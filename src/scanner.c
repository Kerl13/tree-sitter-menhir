#include <assert.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define STRING_RESIZE(vec, _cap)                                               \
    void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0]));     \
    assert(tmp != NULL);                                                       \
    (vec).data = tmp;                                                          \
    memset((vec).data + (vec).len, 0,                                          \
           (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));                \
    (vec).cap = (_cap);

#define STRING_GROW(vec, _cap)                                                 \
    if ((vec).cap < (_cap)) {                                                  \
        STRING_RESIZE((vec), (_cap));                                          \
    }

#define STRING_PUSH(vec, el)                                                   \
    if ((vec).cap == (vec).len) {                                              \
        STRING_RESIZE((vec), MAX(16, (vec).len * 2));                          \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define STRING_FREE(vec)                                                       \
    if ((vec).data != NULL)                                                    \
        free((vec).data);

#define STRING_CLEAR(vec)                                                      \
    {                                                                          \
        (vec).len = 0;                                                         \
        memset((vec).data, 0, (vec).cap * sizeof(char));                       \
    }

enum TokenType { COMMENT };

typedef struct {
    uint32_t cap;
    uint32_t len;
    char *data;
} String;

String string_new() {
    return (String){.cap = 16, .len = 0, .data = calloc(1, sizeof(char) * 17)};
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

void scan_string(TSLexer *lexer) {
    for (;;) {
        switch (lexer->lookahead) {
            case '\\':
                advance(lexer);
                advance(lexer);
                break;
            case '"':
                advance(lexer);
                return;
            case '\0':
                if (lexer->eof(lexer)) {
                    return;
                }
                advance(lexer);
                break;
            default:
                advance(lexer);
        }
    }
}

char scan_character(TSLexer *lexer) {
    char last = 0;

    switch (lexer->lookahead) {
        case '\\':
            advance(lexer);
            if (iswdigit(lexer->lookahead)) {
                advance(lexer);
                for (size_t i = 0; i < 2; i++) {
                    if (!iswdigit(lexer->lookahead)) {
                        return 0;
                    }
                    advance(lexer);
                }
            } else {
                switch (lexer->lookahead) {
                    case 'x':
                        advance(lexer);
                        for (size_t i = 0; i < 2; i++) {
                            if (!iswdigit(lexer->lookahead) &&
                                (towupper(lexer->lookahead) < 'A' ||
                                 towupper(lexer->lookahead) > 'F')) {
                                return 0;
                            }
                            advance(lexer);
                        }
                        break;
                    case 'o':
                        advance(lexer);
                        for (size_t i = 0; i < 3; i++) {
                            if (!iswdigit(lexer->lookahead) ||
                                lexer->lookahead > '7') {
                                return 0;
                            }
                            advance(lexer);
                        }
                        break;
                    case '\'':
                    case '"':
                    case '\\':
                    case 'n':
                    case 't':
                    case 'b':
                    case 'r':
                    case ' ':
                        last = (char)lexer->lookahead;
                        advance(lexer);
                        break;
                    default:
                        return 0;
                }
            }
            break;
        case '\'':
            break;
        case '\0':
            if (lexer->eof(lexer)) {
                return 0;
            }
            break;
        default:
            last = (char)lexer->lookahead;
            advance(lexer);
    }

    if (lexer->lookahead == '\'') {
        advance(lexer);
        return 0;
    }
    return last;
}

bool scan_quoted_string(TSLexer *lexer) {
    String id = string_new();

    while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
        STRING_PUSH(id, lexer->lookahead);
        advance(lexer);
    }

    if (lexer->lookahead != '|') {
        STRING_FREE(id);
        return false;
    }
    advance(lexer);

    for (;;) {
        switch (lexer->lookahead) {
            case '|':
                advance(lexer);
                size_t size = 0;
                for (size = 0; size < id.len; size++) {
                    if (lexer->lookahead != id.data[size]) {
                        break;
                    }
                    advance(lexer);
                }
                if (size == id.len && lexer->lookahead == '}') {
                    advance(lexer);
                    STRING_FREE(id);
                    return true;
                }
                break;
            case '\0':
                if (lexer->eof(lexer)) {
                    STRING_FREE(id);
                    return false;
                }
                advance(lexer);
                break;
            default:
                advance(lexer);
        }
    }
}

bool scan_comment(TSLexer *lexer) {
    char last = 0;

    if (lexer->lookahead != '*') {
        return false;
    }
    advance(lexer);

    for (;;) {
        switch (last ? last : lexer->lookahead) {
            case '(':
                if (last) {
                    last = 0;
                } else {
                    advance(lexer);
                }
                scan_comment(lexer);
                break;
            case '*':
                if (last) {
                    last = 0;
                } else {
                    advance(lexer);
                }
                if (lexer->lookahead == ')') {
                    advance(lexer);
                    return true;
                }
                break;
            case '\'':
                if (last) {
                    last = 0;
                } else {
                    advance(lexer);
                }
                last = scan_character(lexer);
                break;
            case '"':
                if (last) {
                    last = 0;
                } else {
                    advance(lexer);
                }
                scan_string(lexer);
                break;
            case '{':
                if (last) {
                    last = 0;
                } else {
                    advance(lexer);
                }
                scan_quoted_string(lexer);
                break;
            case '\0':
                if (lexer->eof(lexer)) {
                    return false;
                }
                advance(lexer);
                break;
            default:
                if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
                    if (last) {
                        last = 0;
                    } else {
                        advance(lexer);
                    }
                    while (iswalnum(lexer->lookahead) ||
                           lexer->lookahead == '_' ||
                           lexer->lookahead == '\'') {
                        advance(lexer);
                    }
                } else {
                    if (last) {
                        last = 0;
                    } else {
                        advance(lexer);
                    }
                }
        }
    }
}

void *tree_sitter_menhir_external_scanner_create() { return NULL; }

void tree_sitter_menhir_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_menhir_external_scanner_serialize(void *payload,
                                                       char *buffer) {
    return 0;
}

void tree_sitter_menhir_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_menhir_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
        skip(lexer);
    }

    if (valid_symbols[COMMENT] && lexer->lookahead == '(') {
        advance(lexer);
        lexer->result_symbol = COMMENT;
        return scan_comment(lexer);
    }

    return false;
}
