// External scanner for the OCaml code embedded in Menhir grammars.
//
// It finds where each piece of OCaml code ends, and follows Menhir's own
// lexer (driver/stage1/Lexer.mll in Menhir's sources) as closely as it can,
// so that tree-sitter accepts the files that Menhir accepts. Menhir does not
// parse OCaml: it only counts the delimiters, skipping strings, characters
// and comments.

#include <stdlib.h>
#include <string.h>
#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  OCAML_COMMENT,      // (* ... *) outside OCaml code
  ACTION_CONTENT,     // the code in { ... }
  HEADER_CONTENT,     // the code in %{ ... %}
  ATTRIBUTE_CONTENT,  // the key and payload of [@ ... ] and %[@ ... ]
  TYPE_CONTENT,       // the type in < ... >
  POSTLUDE_CONTENT,   // everything after the second %%
  UNKNOWN_DIRECTIVE,  // never valid: %tokenA is not %token A
};

// The delimiters that are open inside a piece of code, innermost last.
typedef struct {
  char *stack;
  size_t depth;
  size_t capacity;
} Scanner;

static void push(Scanner *scanner, char c) {
  if (scanner->depth == scanner->capacity) {
    scanner->capacity = scanner->capacity ? 2 * scanner->capacity : 16;
    scanner->stack = realloc(scanner->stack, scanner->capacity);
  }
  scanner->stack[scanner->depth++] = c;
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static inline bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

// Menhir's [string] rule, after the opening quote. A backslash escapes the
// character that follows it. Returns false on an unterminated string.
static bool scan_string(TSLexer *lexer) {
  for (;;) {
    if (eof(lexer)) return false;
    int32_t c = lexer->lookahead;
    advance(lexer);
    if (c == '"') return true;
    if (c == '\\' && !eof(lexer)) advance(lexer);
  }
}

// Menhir's [char] rule, after the opening quote. It skips a character
// literal, or nothing at all when there is none (as in the type variable
// 'a, or a lone quote in a comment).
//
// The tree-sitter lexer cannot go back, so when there is no character
// literal, the character that was read to find that out is returned, and
// the caller must treat it as the next character of the input. Otherwise,
// 0 is returned. The other characters read in vain (a backslash, digits) do
// not matter to the caller. With [mark], the end of the token is marked
// before each character that may be returned, in case it is the closing
// delimiter.
static int32_t scan_char(TSLexer *lexer, bool mark) {
  if (eof(lexer) || lexer->lookahead == '\'') return 0;
  int32_t c = lexer->lookahead;
  if (mark) mark_end(lexer);
  advance(lexer);

  if (c == '\\') {
    if (eof(lexer)) return 0;
    c = lexer->lookahead;
    if (mark) mark_end(lexer);
    advance(lexer);
    if (iswdigit(c)) {
      // '\ddd'
      if (lexer->lookahead == '\'') {
        advance(lexer);
        return 0;
      }
      for (int i = 0; i < 2; i++) {
        if (!iswdigit(lexer->lookahead)) return 0;
        advance(lexer);
      }
    } else if (c == 'x' && lexer->lookahead != '\'') {
      // '\xhh'
      for (int i = 0; i < 2; i++) {
        if (!iswxdigit(lexer->lookahead)) return 0;
        advance(lexer);
      }
    } else if (c == '\r' && lexer->lookahead == '\n') {
      advance(lexer);
    } else if (lexer->lookahead != '\'') {
      return c;
    }
    if (lexer->lookahead != '\'') return 0;
    advance(lexer);
    return 0;
  }

  if (c == '\r' && lexer->lookahead == '\n') {
    advance(lexer);
    if (lexer->lookahead == '\'') advance(lexer);
    return 0;
  }
  if (lexer->lookahead != '\'') return c;
  advance(lexer);
  return 0;
}

// Menhir's [ocamlcomment] rule, after the opening (*. Comments nest, and
// contain strings and characters. Unlike OCaml, Menhir does not know about
// quoted strings {|...|} in comments. Returns false on an unterminated
// comment or string.
static bool scan_comment(TSLexer *lexer) {
  int depth = 1;
  int32_t pending = 0;
  for (;;) {
    int32_t c = pending;
    pending = 0;
    if (!c) {
      if (eof(lexer)) return false;
      c = lexer->lookahead;
      advance(lexer);
    }
    switch (c) {
      case '*':
        if (lexer->lookahead == ')') {
          advance(lexer);
          if (--depth == 0) return true;
        }
        break;
      case '(':
        if (lexer->lookahead == '*') {
          advance(lexer);
          depth++;
        }
        break;
      case '"':
        if (!scan_string(lexer)) return false;
        break;
      case '\'':
        pending = scan_char(lexer, false);
        break;
    }
  }
}

// The rules of Menhir's lexer for OCaml code: [action] (in { } and, for
// the outermost level of a header, in %{ %}), [parentheses] and
// [attribute].
typedef enum { ACTION, HEADER, PARENTHESES, ATTRIBUTE } Rule;

// Scan OCaml code, up to the closing delimiter of [rule], which is not part
// of the token. Delimiters nest as in Menhir: { } and ( ) everywhere, and
// [ ] only in attributes. A closing delimiter that does not match the
// innermost opening one is an error, and so is the end of the input.
static bool scan_code(Scanner *scanner, TSLexer *lexer, Rule outer) {
  scanner->depth = 0;
  int32_t pending = 0;
  for (;;) {
    int32_t c = pending;
    pending = 0;
    if (!c) {
      mark_end(lexer);
      if (eof(lexer)) return false;
      c = lexer->lookahead;
      advance(lexer);
    }

    Rule rule = outer;
    if (scanner->depth > 0) {
      switch (scanner->stack[scanner->depth - 1]) {
        case '{': rule = ACTION; break;
        case '(': rule = PARENTHESES; break;
        default: rule = ATTRIBUTE;
      }
    }

    switch (c) {
      case '{':
        push(scanner, '{');
        break;

      case '}':
        if (rule != ACTION) return false;
        if (scanner->depth == 0) return true;
        scanner->depth--;
        break;

      case '%':
        if (lexer->lookahead == '}') {
          if (rule == HEADER) return true;
          if (rule == ACTION) return false;
        }
        break;

      case '(':
        if (lexer->lookahead == '*') {
          advance(lexer);
          if (!scan_comment(lexer)) return false;
        } else {
          push(scanner, '(');
        }
        break;

      case ')':
        if (rule != PARENTHESES) return false;
        scanner->depth--;
        break;

      case '[':
        if (rule == ATTRIBUTE) push(scanner, '[');
        break;

      case ']':
        if (rule != ATTRIBUTE) break;
        if (scanner->depth == 0) return true;
        scanner->depth--;
        break;

      case '"':
        if (!scan_string(lexer)) return false;
        break;

      case '\'':
        pending = scan_char(lexer, true);
        break;
    }
  }
}

// Menhir reads an attribute's key right after [@, as one or more
// identifier characters or dots.
static bool is_attribute_char(int32_t c) {
  return iswalnum(c) || c == '_' || c == '.';
}

// Menhir's identifier characters, in Latin-1.
static bool is_ident_char(int32_t c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
         (c >= '0' && c <= '9') || c == '_' ||
         (c >= 0xC0 && c <= 0xFF && c != 0xD7 && c != 0xF7);
}

// Menhir reads % and all the identifier characters that follow it as one
// directive, so %tokenA is an unknown directive, not %token A. After the %,
// read those characters, and return true if they are not a directive.
static bool scan_unknown_directive(TSLexer *lexer) {
  static const char *const directives[] = {
      "token",  "type",      "left",      "right",     "nonassoc",
      "start",  "prec",      "public",    "parameter", "inline",
      "attribute", "on_error_reduce", "merge",
  };
  char name[16];
  size_t length = 0;
  bool too_long = false;
  while (is_ident_char(lexer->lookahead)) {
    if (length < sizeof(name) - 1) {
      name[length++] = (char)lexer->lookahead;
    } else {
      too_long = true;
    }
    advance(lexer);
  }
  if (length == 0) return false;  // %%, %{, %[@ and so on
  if (too_long) return true;
  name[length] = '\0';
  for (size_t i = 0; i < sizeof(directives) / sizeof(*directives); i++) {
    if (strcmp(name, directives[i]) == 0) return false;
  }
  return true;
}

// Scan the postlude: everything after the second %%, up to end of file.
static bool scan_postlude(TSLexer *lexer) {
  if (eof(lexer)) return false;
  while (!eof(lexer)) advance(lexer);
  mark_end(lexer);
  return true;
}

// Scan OCaml type expressions: < ... >, as Menhir's [angled] rule does.
// Types do not nest < >; the > of -> and [> does not close the type.
static bool scan_type(TSLexer *lexer) {
  // Check for empty type: <>
  if (lexer->lookahead == '>') return false;

  int32_t last = 0;
  for (;;) {
    if (eof(lexer)) return true;
    int32_t c = lexer->lookahead;
    if (c == '>' && last != '-' && last != '[') return true;
    advance(lexer);
    if (c == '>') {
      last = 0;
    } else if (c == '(' && lexer->lookahead == '*') {
      advance(lexer);
      if (!scan_comment(lexer)) return false;
      last = 0;
    } else {
      last = c;
    }
    mark_end(lexer);
  }
}

void *tree_sitter_menhir_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_menhir_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner->stack);
  free(scanner);
}

// The scanner keeps no state between tokens.
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
  bool error_recovery = valid_symbols[ACTION_CONTENT] &&
                        valid_symbols[HEADER_CONTENT] &&
                        valid_symbols[ATTRIBUTE_CONTENT] &&
                        valid_symbols[TYPE_CONTENT] &&
                        valid_symbols[POSTLUDE_CONTENT];

  if (!error_recovery && valid_symbols[ATTRIBUTE_CONTENT]) {
    // No whitespace between [@ and the key.
    if (!is_attribute_char(lexer->lookahead)) return false;
    lexer->result_symbol = ATTRIBUTE_CONTENT;
    return scan_code(scanner, lexer, ATTRIBUTE);
  }

  while (iswspace(lexer->lookahead)) skip(lexer);

  if (error_recovery) {
    // Only comments, below.
  } else if (valid_symbols[POSTLUDE_CONTENT]) {
    lexer->result_symbol = POSTLUDE_CONTENT;
    return scan_postlude(lexer);
  } else if (valid_symbols[ACTION_CONTENT]) {
    lexer->result_symbol = ACTION_CONTENT;
    return scan_code(scanner, lexer, ACTION);
  } else if (valid_symbols[HEADER_CONTENT]) {
    lexer->result_symbol = HEADER_CONTENT;
    return scan_code(scanner, lexer, HEADER);
  } else if (valid_symbols[TYPE_CONTENT]) {
    lexer->result_symbol = TYPE_CONTENT;
    return scan_type(lexer);
  }

  if (!error_recovery && lexer->lookahead == '%') {
    advance(lexer);
    lexer->result_symbol = UNKNOWN_DIRECTIVE;
    return scan_unknown_directive(lexer);
  }

  if (valid_symbols[OCAML_COMMENT] && lexer->lookahead == '(') {
    advance(lexer);
    if (lexer->lookahead != '*') return false;
    advance(lexer);
    lexer->result_symbol = OCAML_COMMENT;
    return scan_comment(lexer);
  }

  return false;
}
