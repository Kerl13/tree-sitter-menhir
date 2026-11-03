#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  OCAML_COMMENT,       // OCaml comments: (* ... *)
  OCAML_CONTENT,       // OCaml code block content
  OCAML_TYPE_CONTENT,  // OCaml type expression content
  POSTLUDE_CONTENT,    // Everything after the second %%
};

typedef struct {
  size_t quoted_string_id_length;
  size_t quoted_string_id_capacity;
  char *quoted_string_id;
} Scanner;

static inline void quoted_string_id_clear(Scanner *scanner) {
  scanner->quoted_string_id_length = 0;
}

static inline void quoted_string_id_resize(Scanner *scanner,
                                           size_t min_capacity) {
  size_t capacity = scanner->quoted_string_id_capacity;

  if (capacity >= min_capacity) return;

  if (capacity < 16) capacity = 16;
  while (capacity < min_capacity) capacity <<= 1;

  scanner->quoted_string_id_capacity = capacity;
  scanner->quoted_string_id =
      realloc(scanner->quoted_string_id, capacity * sizeof(char));
}

static inline void quoted_string_id_push(Scanner *scanner, char c) {
  quoted_string_id_resize(scanner, scanner->quoted_string_id_length + 1);
  scanner->quoted_string_id[scanner->quoted_string_id_length++] = c;
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static inline bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

static void scan_string(TSLexer *lexer) {
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
        if (eof(lexer)) return;
        advance(lexer);
        break;
      default:
        advance(lexer);
    }
  }
}

static bool scan_left_quoted_string_delimiter(Scanner *scanner,
                                              TSLexer *lexer) {
  quoted_string_id_clear(scanner);

  while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
    quoted_string_id_push(scanner, lexer->lookahead);
    advance(lexer);
  }

  if (lexer->lookahead != '|') return false;

  advance(lexer);
  return true;
}

static bool scan_right_quoted_string_delimiter(Scanner *scanner,
                                               TSLexer *lexer) {
  for (size_t i = 0; i < scanner->quoted_string_id_length; i++) {
    if (lexer->lookahead != scanner->quoted_string_id[i]) return false;
    advance(lexer);
  }

  if (lexer->lookahead != '}') return false;

  return true;
}

static bool scan_quoted_string(Scanner *scanner, TSLexer *lexer) {
  if (!scan_left_quoted_string_delimiter(scanner, lexer)) return false;

  for (;;) {
    switch (lexer->lookahead) {
      case '|':
        advance(lexer);
        if (scan_right_quoted_string_delimiter(scanner, lexer)) return true;
        break;
      case '\0':
        if (eof(lexer)) return false;
        advance(lexer);
        break;
      default:
        advance(lexer);
    }
  }
}

static char scan_character(TSLexer *lexer) {
  char last = 0;

  switch (lexer->lookahead) {
    case '\\':
      advance(lexer);
      if (iswdigit(lexer->lookahead)) {
        advance(lexer);
        for (size_t i = 0; i < 2; i++) {
          if (!iswdigit(lexer->lookahead)) return 0;
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
              if (!iswdigit(lexer->lookahead) || lexer->lookahead > '7') {
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
            last = lexer->lookahead;
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
      if (eof(lexer)) return 0;
      advance(lexer);
      break;
    default:
      last = lexer->lookahead;
      advance(lexer);
  }

  if (lexer->lookahead == '\'') {
    advance(lexer);
    return 0;
  }
  return last;
}

static bool scan_identifier(TSLexer *lexer) {
  if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
    advance(lexer);
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
           lexer->lookahead == '\'') {
      advance(lexer);
    }
    return true;
  }
  return false;
}

static bool scan_extattrident(TSLexer *lexer) {
  while (scan_identifier(lexer)) {
    if (lexer->lookahead != '.') return true;
    advance(lexer);
  }
  return false;
}

static bool scan_comment(Scanner *scanner, TSLexer *lexer) {
  char last = 0;

  if (lexer->lookahead != '*') return false;
  advance(lexer);

  for (;;) {
    switch (last ? last : lexer->lookahead) {
      case '(':
        if (last) {
          last = 0;
        } else {
          advance(lexer);
        }
        scan_comment(scanner, lexer);
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
        if (lexer->lookahead == '%') {
          advance(lexer);
          if (lexer->lookahead == '%') advance(lexer);
          if (scan_extattrident(lexer)) {
            while (iswspace(lexer->lookahead)) advance(lexer);
          } else {
            break;
          }
        }
        if (scan_quoted_string(scanner, lexer)) advance(lexer);
        break;
      case '\0':
        if (eof(lexer)) return false;
        if (last) {
          last = 0;
        } else {
          advance(lexer);
        }
        break;
      default:
        if (scan_identifier(lexer) || last) {
          last = 0;
        } else {
          advance(lexer);
        }
    }
  }
}

// Scan OCaml code blocks: %{ %}, { }, [@ ], %[@ ].
//
// [last] holds a character that [scan_character] has already consumed
// without finding a closing quote (as in the type variable 'a). That
// character must still be examined, but must not be consumed twice.
static bool scan_ocaml_code_block(Scanner *scanner, TSLexer *lexer) {
  int brace_depth = 0;
  int bracket_depth = 0;
  char last = 0;

  for (;;) {
    int32_t c = last ? last : lexer->lookahead;
    bool consumed = last != 0;
    last = 0;

    switch (c) {
      case '{':
        if (!consumed) advance(lexer);
        // {|...|} and {id|...|id} are OCaml quoted strings, not braces.
        if (scan_quoted_string(scanner, lexer)) {
          advance(lexer);
        } else {
          brace_depth++;
        }
        break;

      case '}':
        if (brace_depth == 0) return true;  // closing delimiter of { }
        if (!consumed) advance(lexer);
        brace_depth--;
        break;

      case '[':
        if (!consumed) advance(lexer);
        bracket_depth++;
        break;

      case ']':
        if (bracket_depth == 0 && brace_depth == 0) {
          return true;  // closing delimiter of [@ ]
        }
        if (!consumed) advance(lexer);
        if (bracket_depth > 0) bracket_depth--;
        break;

      case '%':
        if (!consumed) {
          // Mark the end first, so that %} is not part of the token.
          mark_end(lexer);
          advance(lexer);
          if (lexer->lookahead == '}') return true;  // closing %}
        }
        break;

      case '(':
        if (!consumed) advance(lexer);
        scan_comment(scanner, lexer);
        break;

      case '"':
        if (!consumed) advance(lexer);
        scan_string(lexer);
        break;

      case '\'':
        if (!consumed) advance(lexer);
        last = scan_character(lexer);
        break;

      case '\0':
        if (eof(lexer)) return true;
        if (!consumed) advance(lexer);
        break;

      default:
        if (!consumed && !scan_identifier(lexer)) advance(lexer);
    }
    mark_end(lexer);
  }
}

// Scan the postlude: everything after the second %%, up to end of file.
static bool scan_postlude(TSLexer *lexer) {
  if (eof(lexer)) return false;
  while (!eof(lexer)) advance(lexer);
  mark_end(lexer);
  return true;
}

// Scan OCaml type expressions: < ... >
static bool scan_ocaml_type_expr(Scanner *scanner, TSLexer *lexer) {
  char last = 0;

  // Check for empty type: <>
  if (lexer->lookahead == '>') {
    return false;  // Empty type
  }

  // No angle bracket depth tracking - OCaml types don't nest < >
  // [< and [> are polymorphic variant markers, not angle brackets
  for (;;) {
    switch (lexer->lookahead) {
      case '[':
        // Could be [< or [> polymorphic variant marker
        last = '[';
        advance(lexer);
        break;

      case '-':
        // Could be part of -> arrow operator
        last = '-';
        advance(lexer);
        break;

      case '<':
        // Could be [< polymorphic variant marker
        if (last == '[') {
          // This is [<, not a nested angle bracket
          last = 0;
          advance(lexer);
        } else {
          last = 0;
          advance(lexer);
        }
        break;

      case '>':
        // Check if this is part of ->, [>, or the closing delimiter
        if (last == '-' || last == '[') {
          // This is -> or [>, not the closing delimiter
          last = 0;
          advance(lexer);
        } else {
          // Closing delimiter found
          return true;
        }
        break;

      case '(':
        last = 0;
        advance(lexer);
        scan_comment(scanner, lexer);
        break;

      case '\0':
        if (eof(lexer)) return true;
        last = 0;
        advance(lexer);
        break;

      default:
        last = 0;
        advance(lexer);
    }
    mark_end(lexer);
  }
}

void *tree_sitter_menhir_external_scanner_create(void) {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_menhir_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner->quoted_string_id);
  free(scanner);
}

unsigned tree_sitter_menhir_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}

void tree_sitter_menhir_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

bool tree_sitter_menhir_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  // During error recovery every symbol is valid. Do not let the greedy
  // content scanners swallow the rest of the file; only comments are safe.
  bool error_recovery = valid_symbols[OCAML_CONTENT] &&
                        valid_symbols[OCAML_TYPE_CONTENT] &&
                        valid_symbols[POSTLUDE_CONTENT];

  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  if (!error_recovery && valid_symbols[POSTLUDE_CONTENT]) {
    lexer->result_symbol = POSTLUDE_CONTENT;
    return scan_postlude(lexer);
  }

  // Handle OCaml code blocks
  if (!error_recovery && valid_symbols[OCAML_CONTENT]) {
    lexer->result_symbol = OCAML_CONTENT;
    return scan_ocaml_code_block(scanner, lexer);
  }

  // Handle OCaml type expressions
  if (!error_recovery && valid_symbols[OCAML_TYPE_CONTENT]) {
    lexer->result_symbol = OCAML_TYPE_CONTENT;
    return scan_ocaml_type_expr(scanner, lexer);
  }

  // Handle OCaml comments
  if (valid_symbols[OCAML_COMMENT] && lexer->lookahead == '(') {
    advance(lexer);
    lexer->result_symbol = OCAML_COMMENT;
    return scan_comment(scanner, lexer);
  }

  return false;
}
