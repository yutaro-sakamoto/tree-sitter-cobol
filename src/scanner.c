#include <tree_sitter/parser.h>
#include <stdlib.h>
#include <wctype.h>

enum TokenType {
    WHITE_SPACES,
    LINE_PREFIX_COMMENT,
    LINE_SUFFIX_COMMENT,
    LINE_COMMENT,
    COMMENT_ENTRY,
    multiline_string,
    EXEC_BLOCK,
};

// Wide mode: a preprocessor that converts free-format COBOL to fixed format
// by left-padding every line 7 columns writes the sentinel "CGWIDE" into the
// sequence area (columns 1-6) of the FIRST line. Free-format lines routinely
// run past column 72, so when the sentinel is seen the fixed-format right
// margin (column 73+ = ignored identification area) is pushed out of reach.
// The one-byte flag is scanner state, carried through serialize/deserialize.
#define CG_FIXED_WIDTH 72
#define CG_WIDE_WIDTH 4096
static const char CG_WIDE_SENTINEL[6] = {'C', 'G', 'W', 'I', 'D', 'E'};

void *tree_sitter_COBOL_external_scanner_create() {
    return calloc(1, 1);
}

static bool is_white_space(int c) {
    return iswspace(c) || c == ';' || c == ',';
}

const int number_of_comment_entry_keywords = 9;
char* any_content_keyword[] = {
    "author",
    "installlation",
    "date-written",
    "date-compiled",
    "security",
    "identification division",
    "environment division",
    "data division",
    "procedure division",
};

static bool start_with_word( TSLexer *lexer, char *words[], int number_of_words, int width) {
    while(lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        lexer->advance(lexer, true);
    }

    char *keyword_pointer[number_of_words];
    bool continue_check[number_of_words];
    for(int i=0; i<number_of_words; ++i) {
        keyword_pointer[i] = words[i];
        continue_check[i] = true;
    }

    while(true) {
        // At the end of the line
        if(lexer->get_column(lexer) > width - 1 || lexer->lookahead == '\n' || lexer->lookahead == 0) {
            return false;
        }

        // If all keyword matching fails, move to the end of the line
        bool all_match_failed = true;
        for(int i=0; i<number_of_words; ++i) {
            if(continue_check[i]) {
                all_match_failed = false;
            }
        }

        if(all_match_failed) {
            for(; lexer->get_column(lexer) < width - 1 && lexer->lookahead != '\n' && lexer->lookahead != 0;
            lexer->advance(lexer, true)) {
            }
            return false;
        }

        // If the head of the line matches any of specified keywords, return true;
        char c = lexer->lookahead;
        for(int i=0; i<number_of_words; ++i) {
            if(*(keyword_pointer[i]) == 0 && continue_check[i]) {
                return true;
            }
        }

        // matching keywords
        for(int i=0; i<number_of_words; ++i) {
            char k = *(keyword_pointer[i]);
            if(continue_check[i]) {
                continue_check[i] = c == towupper(k) || c == towlower(k);
            }
            (keyword_pointer[i])++;
        }

        // next character
        lexer->advance(lexer, true);
    }

    return false;
}

bool tree_sitter_COBOL_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    if(lexer->lookahead == 0) {
        return false;
    }

    char *wide = (char *)payload;
    const int width = (wide && *wide) ? CG_WIDE_WIDTH : CG_FIXED_WIDTH;

    if(valid_symbols[WHITE_SPACES]) {
        if(is_white_space(lexer->lookahead)) {
            while(is_white_space(lexer->lookahead)) {
                lexer->advance(lexer, true);
            }
            lexer->result_symbol = WHITE_SPACES;
            lexer->mark_end(lexer);
            return true;
        }
    }

    if(valid_symbols[LINE_PREFIX_COMMENT] && lexer->get_column(lexer) <= 5) {
        // The sequence area is ignored content — but the free-format
        // preprocessor plants the CGWIDE sentinel here on the first line.
        int match = 0;
        while(lexer->get_column(lexer) <= 5) {
            if(match >= 0 && match < 6 && lexer->lookahead == CG_WIDE_SENTINEL[match]) {
                match++;
            } else {
                match = -1;
            }
            lexer->advance(lexer, true);
        }
        if(match == 6 && wide) {
            *wide = 1;
        }
        lexer->result_symbol = LINE_PREFIX_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    if(valid_symbols[LINE_COMMENT]) {
        if(lexer->get_column(lexer) == 6) {
            if(lexer->lookahead == '*' || lexer->lookahead == '/') {
                while(lexer->lookahead != '\n' && lexer->lookahead != 0) {
                    lexer->advance(lexer, true);
                }
                lexer->result_symbol = LINE_COMMENT;
                lexer->mark_end(lexer);
                return true;
            } else {
                lexer->advance(lexer, true);
                lexer->mark_end(lexer);
                return false;
            }
        }
    }

    if(valid_symbols[LINE_SUFFIX_COMMENT]) {
        if(lexer->get_column(lexer) >= width) {
            while(lexer->lookahead != '\n' && lexer->lookahead != 0) {
                lexer->advance(lexer, true);
            }
            lexer->result_symbol = LINE_SUFFIX_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }
    }

    if(valid_symbols[COMMENT_ENTRY]) {
        if(!start_with_word(lexer, any_content_keyword, number_of_comment_entry_keywords, width)) {
            lexer->mark_end(lexer);
            lexer->result_symbol = COMMENT_ENTRY;
            return true;
        } else {
            return false;
        }
    }

    if(valid_symbols[EXEC_BLOCK]) {
        // EXEC (CICS|SQL|DLI|...) ... END-EXEC embedded block. Match the word
        // EXEC (case-insensitive) followed by whitespace, then consume through
        // the next END-EXEC. On any mismatch return false so the internal
        // lexer re-reads the same characters as an ordinary WORD.
        if(lexer->lookahead == 'e' || lexer->lookahead == 'E') {
            const char *kw = "exec";
            int ki = 0;
            while(ki < 4 && (lexer->lookahead == towupper(kw[ki]) || lexer->lookahead == towlower(kw[ki]))) {
                lexer->advance(lexer, false);
                ki++;
            }
            if(ki == 4 && (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                           lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                char ring[8] = {0,0,0,0,0,0,0,0};
                while(lexer->lookahead != 0) {
                    for(int i = 0; i < 7; ++i) ring[i] = ring[i+1];
                    ring[7] = (char)towlower(lexer->lookahead);
                    lexer->advance(lexer, false);
                    if(ring[0]=='e' && ring[1]=='n' && ring[2]=='d' && ring[3]=='-' &&
                       ring[4]=='e' && ring[5]=='x' && ring[6]=='e' && ring[7]=='c') {
                        lexer->result_symbol = EXEC_BLOCK;
                        lexer->mark_end(lexer);
                        return true;
                    }
                }
            }
            return false;
        }
    }

    if(valid_symbols[multiline_string]) {
        int quote = lexer->lookahead;
        if(quote != '"' && quote != '\'') {
            return false;
        }
        while(true) {
            if(lexer->lookahead != quote) {
                return false;
            }
            lexer->advance(lexer, false);
            bool closed = false;
            while(true) {
                while(lexer->lookahead != quote && lexer->lookahead != 0 && lexer->get_column(lexer) < width) {
                    lexer->advance(lexer, false);
                }
                if(lexer->lookahead != quote) {
                    break;
                }
                lexer->advance(lexer, false);
                if(lexer->lookahead == quote) {
                    // doubled quote = escaped quote inside the literal
                    lexer->advance(lexer, false);
                    continue;
                }
                closed = true;
                break;
            }
            if(closed) {
                lexer->result_symbol = multiline_string;
                lexer->mark_end(lexer);
                return true;
            }
            while(lexer->lookahead != 0 && lexer->lookahead != '\n') {
                lexer->advance(lexer, true);
            }
            if(lexer->lookahead == 0) {
                return false;
            }
            lexer->advance(lexer, true);
            int i;
            for(i=0; i<=5; ++i) {
                if(lexer->lookahead == 0 || lexer->lookahead == '\n') {
                    return false;
                }
                lexer->advance(lexer, true);
            }

            if(lexer->lookahead != '-') {
                return false;
            }

            lexer->advance(lexer, true);
            while(lexer->lookahead == ' ' && lexer->get_column(lexer) < width) {
                lexer->advance(lexer, true);
            }
        }
    }

    return false;
}

unsigned tree_sitter_COBOL_external_scanner_serialize(void *payload, char *buffer) {
    if(payload && buffer) {
        buffer[0] = *(char *)payload;
        return 1;
    }
    return 0;
}

void tree_sitter_COBOL_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    if(payload) {
        *(char *)payload = (buffer && length >= 1) ? buffer[0] : 0;
    }
}

void tree_sitter_COBOL_external_scanner_destroy(void *payload) {
    free(payload);
}
