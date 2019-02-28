#include <tree_sitter/parser.h>
#include <cctype>
#include <string>

namespace {

enum {
  HEADER,             // %{ ... %}
  OCAML_TYPE,         // < ... >
  ACTION,             // { ... }
  ATTRIBUTE,          // [@ ... ]
  GRAMMAR_ATTRIBUTE,  // %[@ ... ]
  POSTLUDE,           // %% → eof
  COMMENT,            // /* ... */
  OCAML_COMMENT       // (* ... *)
};

struct Scanner {
  unsigned serialize(char *buffer) {
    return 0;
  }

  void deserialize(const char *buffer, unsigned length) {}

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (isspace(lexer->lookahead)) {
      skip(lexer);
    }

    // --- %{ and %[ and %% ------------------------------------------------ //
    if (lexer->lookahead == '%') {
      advance(lexer);
      if (valid_symbols[HEADER] && lexer->lookahead == '{') {
        advance(lexer);
        lexer->result_symbol = HEADER;
        return scan_action(true, lexer);
      } else if (valid_symbols[GRAMMAR_ATTRIBUTE] && lexer->lookahead == '[') {
        advance(lexer);
        lexer->result_symbol = GRAMMAR_ATTRIBUTE;
        return scan_attribute(lexer);
      } else if (valid_symbols[POSTLUDE] && lexer->lookahead == '%') {
        lexer->result_symbol = POSTLUDE;
        return scan_postlude(lexer);
      }
      return false;

    // --- /* -------------------------------------------------------------- //
    } else if (lexer->lookahead == '/') {
      advance(lexer);
      if (valid_symbols[COMMENT] && lexer->lookahead == '*') {
        advance(lexer);
        lexer->result_symbol = COMMENT;
        return scan_comment(lexer);
      }
      return false;

    // --- (* ... *) ------------------------------------------------------- //
    } else if (valid_symbols[OCAML_COMMENT] && lexer->lookahead == '(') {
      advance(lexer);
      lexer->result_symbol = OCAML_COMMENT;
      return scan_ocaml_comment(lexer);
    // --- < ... > --------------------------------------------------------- //
    } else if (valid_symbols[OCAML_TYPE] && lexer->lookahead == '<') {
      advance(lexer);
      lexer->result_symbol = OCAML_TYPE;
      return scan_ocaml_type(lexer);
    // --- { ... } --------------------------------------------------------- //
    } else if (valid_symbols[ACTION] && lexer->lookahead == '{') {
      advance(lexer);
      lexer->result_symbol = ACTION;
      return scan_action(false, lexer);
    // --- [@ ... ] -------------------------------------------------------- //
    } else if (valid_symbols[ATTRIBUTE] && lexer->lookahead == '[') {
      advance(lexer);
      lexer->result_symbol = ATTRIBUTE;
      return scan_attribute(lexer);
    }

    return false;
  }

  bool scan_action(bool percent, TSLexer *lexer) {
    for (;;) {
      // TODO: handle $i expressions
      // TODO: handle parentheses?
      switch (lexer->lookahead) {
        case '{':
          advance(lexer);
          scan_action(false, lexer);
          break;
        case '}':
          advance(lexer);
          if (!percent) {
            return true;
          }
          break;
        case '%':
          advance(lexer);
          if (percent && lexer->lookahead == '}') {
            advance(lexer);
            return true;
          }
          break;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '(':
          advance(lexer);
          scan_ocaml_comment(lexer);
          break;
        case '\0':
          return true;
        default:
          advance(lexer);
      }
    }
  }

  bool scan_ocaml_type(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '(':
          advance(lexer);
          scan_ocaml_comment(lexer);
          break;
        case '>':
          advance(lexer);
          return true;
        case '-':  // beware of ->
          advance(lexer);
          advance(lexer);
          break;
        case '[':  // beware of [>
          advance(lexer);
          advance(lexer);
          break;
        case '\0':
          return true;
        default:
          advance(lexer);
      }
    }
  }

  bool scan_attribute(TSLexer *lexer) {
    for (;;) {
      // TODO: follow parentheses and curly brackets?
      switch (lexer->lookahead) {
        case '[':
          advance(lexer);
          scan_attribute(lexer);
          break;
        case ']':
          advance(lexer);
          return true;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '\0':
          return true;
        default:
          advance(lexer);
      }
    }
  }

  bool scan_postlude(TSLexer *lexer) {
    while (lexer->lookahead != '\0') {
      advance(lexer);
    }
    return true;
  }

  bool scan_comment(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '*':
          advance(lexer);
          if (lexer->lookahead == '/') {
            advance(lexer);
            return true;
          }
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '\0':
          return true;
        default:
          if (isalpha(lexer->lookahead) || lexer->lookahead == '_') {
            advance(lexer);
            while (isalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
              advance(lexer);
            }
          } else {
            advance(lexer);
          }
      }
    }
  }

  bool scan_ocaml_comment(TSLexer *lexer) {
    if (lexer->lookahead != '*') return false;
    advance(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '(':
          advance(lexer);
          scan_ocaml_comment(lexer);
          break;
        case '*':
          advance(lexer);
          if (lexer->lookahead == ')') {
            advance(lexer);
            return true;
          }
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '\0':
          return true;
        default:
          if (isalpha(lexer->lookahead) || lexer->lookahead == '_') {
            advance(lexer);
            while (isalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
              advance(lexer);
            }
          } else {
            advance(lexer);
          }
      }
    }
  }

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
          // XXX. Super hackish trick:
          // In order to decide whether this \0 is a \0 character in the
          // source file or the end of the file, we look one step ahead. If
          // the next character is a \0 again, it is likely that the lexer did
          // not really advance and that we read the same character. We assume
          // we reached the end of the file
          //
          // Is there a clean way to do this?
          // https://github.com/tree-sitter/tree-sitter/issues/280
          advance(lexer);
          if (lexer->lookahead == 0) {
            // \0 again, this is probably the end of the file
            return;
          }
          // Surprise! There is something after \0
          break;
        default:
          advance(lexer);
      }
    }
  }

  void scan_character(TSLexer *lexer) {
    switch (lexer->lookahead) {
      case '\\':
        advance(lexer);
        if (isdigit(lexer->lookahead)) {
          advance(lexer);
          for (size_t i = 0; i < 2; i++) {
            if (!isdigit(lexer->lookahead)) return;
            advance(lexer);
          }
        } else {
          switch (lexer->lookahead) {
            case 'x':
              advance(lexer);
              for (size_t i = 0; i < 2; i++) {
                if (!isdigit(lexer->lookahead) && (tolower(lexer->lookahead) < 'a' || tolower(lexer->lookahead) > 'f')) return;
                advance(lexer);
              }
              break;
            case 'o':
              advance(lexer);
              for (size_t i = 0; i < 3; i++) {
                if (!isdigit(lexer->lookahead) || lexer->lookahead > '7') return;
                advance(lexer);
              }
              break;
            case '\'':
              advance(lexer);
              if (lexer->lookahead == '\'') {
                advance(lexer);
              } else {
                scan_character(lexer);
              }
              return;
            case '"':
              advance(lexer);
              if (lexer->lookahead == '\'') {
                advance(lexer);
              } else {
                scan_string(lexer);
              }
              return;
            case '\\':
            case 'n':
            case 't':
            case 'b':
            case 'r':
            case ' ':
              advance(lexer);
              break;
            default:
              return;
          }
        }
        break;
      case '\'':
        break;
      case '\0':
        // XXX. Super hackish trick:
        // In order to decide whether this \0 is a \0 character in the
        // source file or the end of the file, we look one step ahead. If
        // the next character is a \0 again, it is likely that the lexer did
        // not really advance and that we read the same character. We assume
        // we reached the end of the file
        //
        // Is there a clean way to do this?
        // https://github.com/tree-sitter/tree-sitter/issues/280
        advance(lexer);
        if (lexer->lookahead == 0) {
          // \0 again, this is probably the end of the file
          return;
        }
        // Surprise! There is something after \0
        break;
      default:
        advance(lexer);
    }
    if (lexer->lookahead == '\'') advance(lexer);
  }
};

}

extern "C" {

void *tree_sitter_menhir_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_menhir_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_menhir_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_menhir_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_menhir_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}
