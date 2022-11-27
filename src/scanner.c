#include <tree_sitter/parser.h>

enum TokenType {
    LINE_PREFIX_COMMENT,
    LINE_SUFFIX_COMMENT,
    COMMENT,
    WHITE_SPACES,
};

void *tree_sitter_COBOL_external_scanner_create() {
    return NULL;
}

bool tree_sitter_COBOL_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    if(valid_symbols[LINE_PREFIX_COMMENT]) {
        while(lexer->get_column(lexer) <= 6) {
            puts("aaaa");
            lexer->advance(lexer, true);
        }
        lexer->result_symbol = LINE_PREFIX_COMMENT;
        return true;
    }

    if(valid_symbols[COMMENT]) {
        if(lexer->get_column(lexer) == 7) {
            if(lexer->lookahead == '*') {
                while(lexer->lookahead != '\n' && lexer->lookahead != 0) {
                    puts("bbbb");
                    lexer->advance(lexer, true);
                }
                lexer->result_symbol = COMMENT;
                return true;
            } else {
                lexer->advance(lexer, true);
                return false;
            }
        }
    }
    if(valid_symbols[LINE_SUFFIX_COMMENT]) {
        if(lexer->get_column(lexer) >= 73) {
            while(lexer->lookahead != '\n' && lexer->lookahead != 0) {
                puts("cccc");
                lexer->advance(lexer, true);
            }
            lexer->result_symbol = LINE_SUFFIX_COMMENT;
            return true;
        } else {
            return false;
        }
    }

    if(valid_symbols[LINE_SUFFIX_COMMENT]) {
        int32_t c = lexer->lookahead;
        bool ret = false;
        while(c == ' ' || c == '\t' || c == '\r') {
                ret = true;
                lexer->advance(lexer, true);
                puts("dd");
                c = lexer->lookahead;
        }
        if(ret) {
            lexer->result_symbol = WHITE_SPACES;
        }
        return ret;
    }
    return false;
}

unsigned tree_sitter_COBOL_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_COBOL_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

void tree_sitter_COBOL_external_scanner_destroy(void *payload) {
}