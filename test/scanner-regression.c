// Run from the repository root with Clang or GCC on a POSIX system:
// cc -std=c11 -g -O1 -fsanitize=address,undefined -fno-sanitize-recover=all
//    -I src test/scanner-regression.c -o /tmp/cobol-scanner-test
// /tmp/cobol-scanner-test
// AddressSanitizer is required to detect the original out-of-bounds reads.
#ifdef NDEBUG
#undef NDEBUG
#endif
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../src/scanner.c"

typedef struct {
    TSLexer lexer;
    const unsigned char *input;
    size_t length, position;
    uint32_t column;
} TestLexer;

static void test_advance(TSLexer *lexer, bool skip) {
    (void)skip;
    TestLexer *test = (TestLexer *)lexer;
    assert(test->position < test->length);
    test->column = test->input[test->position++] == '\n' ? 0 : test->column + 1;
    lexer->lookahead = test->position == test->length ? 0 : test->input[test->position];
}

static uint32_t test_column(TSLexer *lexer) {
    return ((TestLexer *)lexer)->column;
}

static TestLexer make_lexer(const char *input) {
    TestLexer result = {0};
    result.input = (const unsigned char *)input;
    result.length = strlen(input);
    result.lexer.lookahead = result.length ? result.input[0] : 0;
    result.lexer.advance = test_advance;
    result.lexer.get_column = test_column;
    return result;
}

int main(void) {
    size_t cases = 0;
    for(int i = 0; i < number_of_comment_entry_keywords; ++i) {
        for(int uppercase = 0; uppercase <= 1; ++uppercase) {
            char source[80];
            int length = snprintf(source, sizeof(source), "%s. text\n", any_content_keyword[i]);
            assert(length >= 0 && (size_t)length < sizeof(source));
            if(uppercase) {
                for(size_t j = 0; source[j]; ++j) source[j] = (char)toupper((unsigned char)source[j]);
            }
            TestLexer test = make_lexer(source);
            bool matched = start_with_word(&test.lexer, any_content_keyword, number_of_comment_entry_keywords);
            assert(matched);
            assert(test.position == strlen(any_content_keyword[i]));
            ++cases;
        }
    }
    const char *negative[] = {"unrelated text\n", "date-writteX.\n", "DATE-WRITTEX.\n"};
    for(size_t i = 0; i < sizeof(negative) / sizeof(negative[0]); ++i) {
        TestLexer test = make_lexer(negative[i]);
        bool matched = start_with_word(&test.lexer, any_content_keyword, number_of_comment_entry_keywords);
        assert(!matched);
        ++cases;
    }
    printf("%zu scanner checks passed\n", cases);
    return 0;
}
