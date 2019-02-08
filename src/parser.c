#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 249
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  anon_sym_PERCENT_PERCENT = 1,
  anon_sym_PIPE = 2,
  sym_lid = 3,
  sym_uid = 4,
  sym_qid = 5,
  anon_sym_PERCENTparameter = 6,
  anon_sym_PERCENTtoken = 7,
  anon_sym_COMMA = 8,
  anon_sym_PERCENTtype = 9,
  anon_sym_PERCENTstart = 10,
  anon_sym_PERCENTattribute = 11,
  anon_sym_PERCENTon_error_reduce = 12,
  anon_sym_SEMI = 13,
  anon_sym_PERCENTleft = 14,
  anon_sym_PERCENTright = 15,
  anon_sym_PERCENTnonassoc = 16,
  anon_sym_LPAREN = 17,
  anon_sym_COMMA2 = 18,
  anon_sym_RPAREN = 19,
  anon_sym_COLON = 20,
  anon_sym_PERCENTpublic = 21,
  anon_sym_PERCENTinline = 22,
  anon_sym_PERCENTprec = 23,
  anon_sym_EQ = 24,
  anon_sym_QMARK = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  sym_new_rule = 28,
  sym_header = 29,
  sym_ocaml_type = 30,
  sym_action = 31,
  sym_attribute = 32,
  sym_grammar_attribute = 33,
  sym_postlude = 34,
  sym_line_comment = 35,
  sym_comment = 36,
  sym_ocaml_comment = 37,
  sym_source_file = 38,
  sym_bar = 39,
  sym_symbol = 40,
  sym_declaration = 41,
  sym_terminal_alias_attrs = 42,
  sym_priority_keyword = 43,
  sym_non_terminal = 44,
  sym_old_rule = 45,
  sym_flags = 46,
  sym_production_group = 47,
  sym_precedence = 48,
  sym_producer = 49,
  sym_strict_actual = 50,
  sym_actual = 51,
  sym_lax_actual = 52,
  sym_modifier = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_source_file_repeat2 = 55,
  aux_sym_declaration_repeat1 = 56,
  aux_sym_declaration_repeat2 = 57,
  aux_sym_declaration_repeat3 = 58,
  aux_sym_declaration_repeat4 = 59,
  aux_sym_declaration_repeat5 = 60,
  aux_sym_old_rule_repeat1 = 61,
  aux_sym_old_rule_repeat2 = 62,
  aux_sym_old_rule_repeat3 = 63,
  aux_sym_production_group_repeat1 = 64,
  aux_sym_production_group_repeat2 = 65,
  aux_sym_strict_actual_repeat1 = 66,
  aux_sym_actual_repeat1 = 67,
  aux_sym_lax_actual_repeat1 = 68,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PIPE] = "|",
  [sym_lid] = "lid",
  [sym_uid] = "uid",
  [sym_qid] = "qid",
  [anon_sym_PERCENTparameter] = "%parameter",
  [anon_sym_PERCENTtoken] = "%token",
  [anon_sym_COMMA] = ",",
  [anon_sym_PERCENTtype] = "%type",
  [anon_sym_PERCENTstart] = "%start",
  [anon_sym_PERCENTattribute] = "%attribute",
  [anon_sym_PERCENTon_error_reduce] = "%on_error_reduce",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENTleft] = "%left",
  [anon_sym_PERCENTright] = "%right",
  [anon_sym_PERCENTnonassoc] = "%nonassoc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA2] = ", ",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_PERCENTpublic] = "%public",
  [anon_sym_PERCENTinline] = "%inline",
  [anon_sym_PERCENTprec] = "%prec",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_new_rule] = "new_rule",
  [sym_header] = "header",
  [sym_ocaml_type] = "ocaml_type",
  [sym_action] = "action",
  [sym_attribute] = "attribute",
  [sym_grammar_attribute] = "grammar_attribute",
  [sym_postlude] = "postlude",
  [sym_line_comment] = "line_comment",
  [sym_comment] = "comment",
  [sym_ocaml_comment] = "ocaml_comment",
  [sym_source_file] = "source_file",
  [sym_bar] = "bar",
  [sym_symbol] = "symbol",
  [sym_declaration] = "declaration",
  [sym_terminal_alias_attrs] = "terminal_alias_attrs",
  [sym_priority_keyword] = "priority_keyword",
  [sym_non_terminal] = "non_terminal",
  [sym_old_rule] = "old_rule",
  [sym_flags] = "flags",
  [sym_production_group] = "production_group",
  [sym_precedence] = "precedence",
  [sym_producer] = "producer",
  [sym_strict_actual] = "strict_actual",
  [sym_actual] = "actual",
  [sym_lax_actual] = "lax_actual",
  [sym_modifier] = "modifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_declaration_repeat2] = "declaration_repeat2",
  [aux_sym_declaration_repeat3] = "declaration_repeat3",
  [aux_sym_declaration_repeat4] = "declaration_repeat4",
  [aux_sym_declaration_repeat5] = "declaration_repeat5",
  [aux_sym_old_rule_repeat1] = "old_rule_repeat1",
  [aux_sym_old_rule_repeat2] = "old_rule_repeat2",
  [aux_sym_old_rule_repeat3] = "old_rule_repeat3",
  [aux_sym_production_group_repeat1] = "production_group_repeat1",
  [aux_sym_production_group_repeat2] = "production_group_repeat2",
  [aux_sym_strict_actual_repeat1] = "strict_actual_repeat1",
  [aux_sym_actual_repeat1] = "actual_repeat1",
  [aux_sym_lax_actual_repeat1] = "lax_actual_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_lid] = {
    .visible = true,
    .named = true,
  },
  [sym_uid] = {
    .visible = true,
    .named = true,
  },
  [sym_qid] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTparameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTstart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTattribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTon_error_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTnonassoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTprec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_new_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_type] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_postlude] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal_alias_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_priority_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_non_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_old_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_production_group] = {
    .visible = true,
    .named = true,
  },
  [sym_precedence] = {
    .visible = true,
    .named = true,
  },
  [sym_producer] = {
    .visible = true,
    .named = true,
  },
  [sym_strict_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_lax_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strict_actual_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actual_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lax_actual_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == ' ' ||
          lookahead == '!' ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == 'a')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"')
        ADVANCE(29);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(35);
      if (lookahead == 'r')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'i')
        ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o')
        ADVANCE(40);
      if (lookahead == 'y')
        ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'w')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_qid);
      END_STATE();
    case 30:
      if (lookahead == 't')
        ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'f')
        ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '_')
        ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'b')
        ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'g')
        ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'k')
        ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'p')
        ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == '_')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'c')
        ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'h')
        ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'r')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'i')
        ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENTleft);
      END_STATE();
    case 59:
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'm')
        ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENTprec);
      END_STATE();
    case 63:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 69:
      if (lookahead == 'b')
        ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'c')
        ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENTright);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'l')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENTinline);
      END_STATE();
    case 81:
      if (lookahead == 'o')
        ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENTpublic);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'c')
        ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_new_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENTnonassoc);
      END_STATE();
    case 93:
      if (lookahead == '_')
        ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENTattribute);
      END_STATE();
    case 96:
      if (lookahead == 'r')
        ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PERCENTparameter);
      END_STATE();
    case 98:
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'd')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'u')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'e')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENTon_error_reduce);
      END_STATE();
    case 104:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == 'a')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(106);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(108);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'p')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'r')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 111:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(108);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 112:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      END_STATE();
    case 113:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(114);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(115);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 114:
      if (lookahead == 'p')
        ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == ' ')
        ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == 'r')
        ADVANCE(36);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 104, .external_lex_state = 2},
  [2] = {.lex_state = 104, .external_lex_state = 2},
  [3] = {.lex_state = 104, .external_lex_state = 3},
  [4] = {.lex_state = 104, .external_lex_state = 4},
  [5] = {.lex_state = 107, .external_lex_state = 5},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 104, .external_lex_state = 4},
  [8] = {.lex_state = 104, .external_lex_state = 3},
  [9] = {.lex_state = 104, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 104, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 104, .external_lex_state = 4},
  [14] = {.lex_state = 104, .external_lex_state = 4},
  [15] = {.lex_state = 104, .external_lex_state = 2},
  [16] = {.lex_state = 104, .external_lex_state = 2},
  [17] = {.lex_state = 110, .external_lex_state = 6},
  [18] = {.lex_state = 111, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 111, .external_lex_state = 4},
  [21] = {.lex_state = 104, .external_lex_state = 4},
  [22] = {.lex_state = 112, .external_lex_state = 6},
  [23] = {.lex_state = 107, .external_lex_state = 5},
  [24] = {.lex_state = 104, .external_lex_state = 2},
  [25] = {.lex_state = 104, .external_lex_state = 6},
  [26] = {.lex_state = 104, .external_lex_state = 6},
  [27] = {.lex_state = 104, .external_lex_state = 4},
  [28] = {.lex_state = 104, .external_lex_state = 7},
  [29] = {.lex_state = 104, .external_lex_state = 2},
  [30] = {.lex_state = 104, .external_lex_state = 2},
  [31] = {.lex_state = 104, .external_lex_state = 2},
  [32] = {.lex_state = 104, .external_lex_state = 2},
  [33] = {.lex_state = 104, .external_lex_state = 4},
  [34] = {.lex_state = 107, .external_lex_state = 5},
  [35] = {.lex_state = 104, .external_lex_state = 2},
  [36] = {.lex_state = 104, .external_lex_state = 2},
  [37] = {.lex_state = 104, .external_lex_state = 2},
  [38] = {.lex_state = 104, .external_lex_state = 4},
  [39] = {.lex_state = 104, .external_lex_state = 2},
  [40] = {.lex_state = 104, .external_lex_state = 4},
  [41] = {.lex_state = 112, .external_lex_state = 6},
  [42] = {.lex_state = 111, .external_lex_state = 8},
  [43] = {.lex_state = 104, .external_lex_state = 4},
  [44] = {.lex_state = 112, .external_lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 4},
  [46] = {.lex_state = 107, .external_lex_state = 5},
  [47] = {.lex_state = 104, .external_lex_state = 4},
  [48] = {.lex_state = 104, .external_lex_state = 6},
  [49] = {.lex_state = 104, .external_lex_state = 4},
  [50] = {.lex_state = 104, .external_lex_state = 6},
  [51] = {.lex_state = 104, .external_lex_state = 7},
  [52] = {.lex_state = 104, .external_lex_state = 6},
  [53] = {.lex_state = 104, .external_lex_state = 6},
  [54] = {.lex_state = 104, .external_lex_state = 2},
  [55] = {.lex_state = 104, .external_lex_state = 7},
  [56] = {.lex_state = 104, .external_lex_state = 7},
  [57] = {.lex_state = 104, .external_lex_state = 4},
  [58] = {.lex_state = 104, .external_lex_state = 2},
  [59] = {.lex_state = 104, .external_lex_state = 4},
  [60] = {.lex_state = 104, .external_lex_state = 2},
  [61] = {.lex_state = 104, .external_lex_state = 4},
  [62] = {.lex_state = 104, .external_lex_state = 2},
  [63] = {.lex_state = 104, .external_lex_state = 2},
  [64] = {.lex_state = 104, .external_lex_state = 2},
  [65] = {.lex_state = 104, .external_lex_state = 2},
  [66] = {.lex_state = 107, .external_lex_state = 5},
  [67] = {.lex_state = 104, .external_lex_state = 4},
  [68] = {.lex_state = 104, .external_lex_state = 2},
  [69] = {.lex_state = 104, .external_lex_state = 2},
  [70] = {.lex_state = 104, .external_lex_state = 2},
  [71] = {.lex_state = 104, .external_lex_state = 2},
  [72] = {.lex_state = 111, .external_lex_state = 8},
  [73] = {.lex_state = 104, .external_lex_state = 4},
  [74] = {.lex_state = 112, .external_lex_state = 6},
  [75] = {.lex_state = 113, .external_lex_state = 9},
  [76] = {.lex_state = 111, .external_lex_state = 8},
  [77] = {.lex_state = 107, .external_lex_state = 5},
  [78] = {.lex_state = 104, .external_lex_state = 4},
  [79] = {.lex_state = 113, .external_lex_state = 9},
  [80] = {.lex_state = 113, .external_lex_state = 9},
  [81] = {.lex_state = 107, .external_lex_state = 5},
  [82] = {.lex_state = 107, .external_lex_state = 8},
  [83] = {.lex_state = 111, .external_lex_state = 8},
  [84] = {.lex_state = 107, .external_lex_state = 8},
  [85] = {.lex_state = 113, .external_lex_state = 9},
  [86] = {.lex_state = 111, .external_lex_state = 8},
  [87] = {.lex_state = 113, .external_lex_state = 4},
  [88] = {.lex_state = 113, .external_lex_state = 4},
  [89] = {.lex_state = 112, .external_lex_state = 6},
  [90] = {.lex_state = 113, .external_lex_state = 4},
  [91] = {.lex_state = 113, .external_lex_state = 4},
  [92] = {.lex_state = 104, .external_lex_state = 6},
  [93] = {.lex_state = 104, .external_lex_state = 7},
  [94] = {.lex_state = 104, .external_lex_state = 7},
  [95] = {.lex_state = 104, .external_lex_state = 6},
  [96] = {.lex_state = 104, .external_lex_state = 2},
  [97] = {.lex_state = 104, .external_lex_state = 7},
  [98] = {.lex_state = 104, .external_lex_state = 7},
  [99] = {.lex_state = 104, .external_lex_state = 2},
  [100] = {.lex_state = 104, .external_lex_state = 2},
  [101] = {.lex_state = 113, .external_lex_state = 4},
  [102] = {.lex_state = 104, .external_lex_state = 2},
  [103] = {.lex_state = 104, .external_lex_state = 2},
  [104] = {.lex_state = 104, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 104, .external_lex_state = 2},
  [107] = {.lex_state = 104, .external_lex_state = 2},
  [108] = {.lex_state = 111, .external_lex_state = 8},
  [109] = {.lex_state = 107, .external_lex_state = 5},
  [110] = {.lex_state = 113, .external_lex_state = 4},
  [111] = {.lex_state = 111, .external_lex_state = 8},
  [112] = {.lex_state = 104, .external_lex_state = 4},
  [113] = {.lex_state = 111, .external_lex_state = 8},
  [114] = {.lex_state = 104, .external_lex_state = 4},
  [115] = {.lex_state = 107, .external_lex_state = 5},
  [116] = {.lex_state = 107, .external_lex_state = 8},
  [117] = {.lex_state = 107, .external_lex_state = 8},
  [118] = {.lex_state = 104, .external_lex_state = 4},
  [119] = {.lex_state = 113, .external_lex_state = 9},
  [120] = {.lex_state = 111, .external_lex_state = 8},
  [121] = {.lex_state = 111, .external_lex_state = 9},
  [122] = {.lex_state = 113, .external_lex_state = 9},
  [123] = {.lex_state = 107, .external_lex_state = 5},
  [124] = {.lex_state = 107, .external_lex_state = 5},
  [125] = {.lex_state = 111, .external_lex_state = 8},
  [126] = {.lex_state = 107, .external_lex_state = 5},
  [127] = {.lex_state = 107, .external_lex_state = 8},
  [128] = {.lex_state = 111, .external_lex_state = 8},
  [129] = {.lex_state = 107, .external_lex_state = 8},
  [130] = {.lex_state = 107, .external_lex_state = 8},
  [131] = {.lex_state = 111, .external_lex_state = 8},
  [132] = {.lex_state = 111, .external_lex_state = 8},
  [133] = {.lex_state = 107, .external_lex_state = 8},
  [134] = {.lex_state = 104, .external_lex_state = 4},
  [135] = {.lex_state = 112, .external_lex_state = 4},
  [136] = {.lex_state = 113, .external_lex_state = 4},
  [137] = {.lex_state = 104, .external_lex_state = 4},
  [138] = {.lex_state = 113, .external_lex_state = 4},
  [139] = {.lex_state = 104, .external_lex_state = 4},
  [140] = {.lex_state = 104, .external_lex_state = 6},
  [141] = {.lex_state = 113, .external_lex_state = 4},
  [142] = {.lex_state = 113, .external_lex_state = 4},
  [143] = {.lex_state = 104, .external_lex_state = 2},
  [144] = {.lex_state = 113, .external_lex_state = 4},
  [145] = {.lex_state = 107, .external_lex_state = 5},
  [146] = {.lex_state = 107, .external_lex_state = 5},
  [147] = {.lex_state = 107, .external_lex_state = 5},
  [148] = {.lex_state = 112, .external_lex_state = 4},
  [149] = {.lex_state = 113, .external_lex_state = 4},
  [150] = {.lex_state = 111, .external_lex_state = 8},
  [151] = {.lex_state = 113, .external_lex_state = 4},
  [152] = {.lex_state = 107, .external_lex_state = 5},
  [153] = {.lex_state = 107, .external_lex_state = 5},
  [154] = {.lex_state = 113, .external_lex_state = 9},
  [155] = {.lex_state = 111, .external_lex_state = 8},
  [156] = {.lex_state = 111, .external_lex_state = 8},
  [157] = {.lex_state = 111, .external_lex_state = 9},
  [158] = {.lex_state = 107, .external_lex_state = 5},
  [159] = {.lex_state = 107, .external_lex_state = 5},
  [160] = {.lex_state = 107, .external_lex_state = 5},
  [161] = {.lex_state = 107, .external_lex_state = 5},
  [162] = {.lex_state = 107, .external_lex_state = 5},
  [163] = {.lex_state = 107, .external_lex_state = 8},
  [164] = {.lex_state = 113, .external_lex_state = 9},
  [165] = {.lex_state = 113, .external_lex_state = 4},
  [166] = {.lex_state = 113, .external_lex_state = 9},
  [167] = {.lex_state = 113, .external_lex_state = 9},
  [168] = {.lex_state = 113, .external_lex_state = 4},
  [169] = {.lex_state = 113, .external_lex_state = 4},
  [170] = {.lex_state = 107, .external_lex_state = 8},
  [171] = {.lex_state = 111, .external_lex_state = 8},
  [172] = {.lex_state = 107, .external_lex_state = 8},
  [173] = {.lex_state = 113, .external_lex_state = 9},
  [174] = {.lex_state = 107, .external_lex_state = 8},
  [175] = {.lex_state = 113, .external_lex_state = 4},
  [176] = {.lex_state = 111, .external_lex_state = 8},
  [177] = {.lex_state = 113, .external_lex_state = 4},
  [178] = {.lex_state = 113, .external_lex_state = 4},
  [179] = {.lex_state = 113, .external_lex_state = 4},
  [180] = {.lex_state = 104, .external_lex_state = 6},
  [181] = {.lex_state = 113, .external_lex_state = 4},
  [182] = {.lex_state = 104, .external_lex_state = 2},
  [183] = {.lex_state = 107, .external_lex_state = 5},
  [184] = {.lex_state = 107, .external_lex_state = 5},
  [185] = {.lex_state = 111, .external_lex_state = 8},
  [186] = {.lex_state = 112, .external_lex_state = 4},
  [187] = {.lex_state = 107, .external_lex_state = 5},
  [188] = {.lex_state = 113, .external_lex_state = 4},
  [189] = {.lex_state = 111, .external_lex_state = 8},
  [190] = {.lex_state = 111, .external_lex_state = 9},
  [191] = {.lex_state = 107, .external_lex_state = 5},
  [192] = {.lex_state = 107, .external_lex_state = 5},
  [193] = {.lex_state = 104, .external_lex_state = 4},
  [194] = {.lex_state = 113, .external_lex_state = 4},
  [195] = {.lex_state = 113, .external_lex_state = 9},
  [196] = {.lex_state = 113, .external_lex_state = 9},
  [197] = {.lex_state = 111, .external_lex_state = 8},
  [198] = {.lex_state = 113, .external_lex_state = 4},
  [199] = {.lex_state = 111, .external_lex_state = 8},
  [200] = {.lex_state = 113, .external_lex_state = 9},
  [201] = {.lex_state = 113, .external_lex_state = 4},
  [202] = {.lex_state = 113, .external_lex_state = 4},
  [203] = {.lex_state = 107, .external_lex_state = 8},
  [204] = {.lex_state = 107, .external_lex_state = 8},
  [205] = {.lex_state = 111, .external_lex_state = 8},
  [206] = {.lex_state = 111, .external_lex_state = 8},
  [207] = {.lex_state = 113, .external_lex_state = 4},
  [208] = {.lex_state = 113, .external_lex_state = 4},
  [209] = {.lex_state = 107, .external_lex_state = 5},
  [210] = {.lex_state = 111, .external_lex_state = 8},
  [211] = {.lex_state = 107, .external_lex_state = 5},
  [212] = {.lex_state = 111, .external_lex_state = 8},
  [213] = {.lex_state = 107, .external_lex_state = 5},
  [214] = {.lex_state = 112, .external_lex_state = 4},
  [215] = {.lex_state = 111, .external_lex_state = 8},
  [216] = {.lex_state = 107, .external_lex_state = 5},
  [217] = {.lex_state = 113, .external_lex_state = 4},
  [218] = {.lex_state = 113, .external_lex_state = 4},
  [219] = {.lex_state = 113, .external_lex_state = 4},
  [220] = {.lex_state = 113, .external_lex_state = 4},
  [221] = {.lex_state = 113, .external_lex_state = 9},
  [222] = {.lex_state = 113, .external_lex_state = 4},
  [223] = {.lex_state = 113, .external_lex_state = 4},
  [224] = {.lex_state = 113, .external_lex_state = 4},
  [225] = {.lex_state = 107, .external_lex_state = 8},
  [226] = {.lex_state = 113, .external_lex_state = 4},
  [227] = {.lex_state = 113, .external_lex_state = 4},
  [228] = {.lex_state = 107, .external_lex_state = 5},
  [229] = {.lex_state = 107, .external_lex_state = 5},
  [230] = {.lex_state = 107, .external_lex_state = 5},
  [231] = {.lex_state = 111, .external_lex_state = 8},
  [232] = {.lex_state = 111, .external_lex_state = 8},
  [233] = {.lex_state = 113, .external_lex_state = 4},
  [234] = {.lex_state = 113, .external_lex_state = 4},
  [235] = {.lex_state = 113, .external_lex_state = 9},
  [236] = {.lex_state = 113, .external_lex_state = 4},
  [237] = {.lex_state = 107, .external_lex_state = 5},
  [238] = {.lex_state = 107, .external_lex_state = 5},
  [239] = {.lex_state = 107, .external_lex_state = 5},
  [240] = {.lex_state = 111, .external_lex_state = 8},
  [241] = {.lex_state = 113, .external_lex_state = 4},
  [242] = {.lex_state = 113, .external_lex_state = 9},
  [243] = {.lex_state = 107, .external_lex_state = 5},
  [244] = {.lex_state = 107, .external_lex_state = 5},
  [245] = {.lex_state = 107, .external_lex_state = 5},
  [246] = {.lex_state = 107, .external_lex_state = 5},
  [247] = {.lex_state = 107, .external_lex_state = 5},
  [248] = {.lex_state = 107, .external_lex_state = 5},
};

enum {
  ts_external_token_header = 0,
  ts_external_token_ocaml_type = 1,
  ts_external_token_action = 2,
  ts_external_token_attribute = 3,
  ts_external_token_grammar_attribute = 4,
  ts_external_token_postlude = 5,
  ts_external_token_line_comment = 6,
  ts_external_token_comment = 7,
  ts_external_token_ocaml_comment = 8,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_header] = sym_header,
  [ts_external_token_ocaml_type] = sym_ocaml_type,
  [ts_external_token_action] = sym_action,
  [ts_external_token_attribute] = sym_attribute,
  [ts_external_token_grammar_attribute] = sym_grammar_attribute,
  [ts_external_token_postlude] = sym_postlude,
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_ocaml_comment] = sym_ocaml_comment,
};

static bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_header] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_postlude] = true,
    [ts_external_token_action] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_attribute] = true,
  },
  [2] = {
    [ts_external_token_header] = true,
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_line_comment] = true,
  },
  [3] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_line_comment] = true,
  },
  [4] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_postlude] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_line_comment] = true,
  },
  [6] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_attribute] = true,
  },
  [7] = {
    [ts_external_token_header] = true,
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_attribute] = true,
  },
  [8] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_action] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_line_comment] = true,
  },
  [9] = {
    [ts_external_token_ocaml_comment] = true,
    [ts_external_token_action] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_attribute] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PERCENTpublic] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(1),
    [anon_sym_PERCENTtype] = ACTIONS(1),
    [anon_sym_PERCENTleft] = ACTIONS(1),
    [sym_lid] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_qid] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(1),
    [sym_ocaml_type] = ACTIONS(1),
    [sym_grammar_attribute] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(1),
    [anon_sym_PERCENTright] = ACTIONS(1),
    [sym_uid] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(1),
    [sym_action] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENTattribute] = ACTIONS(1),
    [anon_sym_PERCENTnonassoc] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PERCENTtoken] = ACTIONS(1),
    [sym_new_rule] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_declaration] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_source_file] = STATE(12),
    [sym_priority_keyword] = STATE(13),
    [sym_header] = ACTIONS(5),
    [anon_sym_PERCENTstart] = ACTIONS(7),
    [anon_sym_PERCENTright] = ACTIONS(9),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(11),
    [anon_sym_PERCENTparameter] = ACTIONS(13),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(15),
    [anon_sym_PERCENTtype] = ACTIONS(17),
    [anon_sym_PERCENTleft] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(5),
    [anon_sym_PERCENTattribute] = ACTIONS(19),
    [anon_sym_PERCENTnonassoc] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_PERCENTtoken] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_header] = ACTIONS(23),
    [anon_sym_PERCENTstart] = ACTIONS(23),
    [anon_sym_PERCENTright] = ACTIONS(23),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(23),
    [anon_sym_PERCENTparameter] = ACTIONS(23),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(23),
    [anon_sym_PERCENTtype] = ACTIONS(23),
    [anon_sym_PERCENTleft] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(23),
    [anon_sym_PERCENTattribute] = ACTIONS(23),
    [anon_sym_PERCENTnonassoc] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_PERCENTtoken] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_non_terminal] = STATE(16),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(25),
    [sym_lid] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_qid] = ACTIONS(29),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(23),
    [sym_old_rule] = STATE(23),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(39),
    [sym_new_rule] = ACTIONS(41),
    [sym_lid] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_symbol] = STATE(25),
    [sym_strict_actual] = STATE(26),
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_terminal_alias_attrs] = STATE(29),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(32),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_priority_keyword] = STATE(13),
    [sym_declaration] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_header] = ACTIONS(5),
    [anon_sym_PERCENTstart] = ACTIONS(7),
    [anon_sym_PERCENTright] = ACTIONS(9),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(55),
    [anon_sym_PERCENTparameter] = ACTIONS(13),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(15),
    [anon_sym_PERCENTtype] = ACTIONS(17),
    [anon_sym_PERCENTleft] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(5),
    [anon_sym_PERCENTattribute] = ACTIONS(19),
    [anon_sym_PERCENTnonassoc] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_PERCENTtoken] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_symbol] = STATE(36),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_non_terminal] = STATE(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
    [sym_lid] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
    [sym_line_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_non_terminal] = STATE(39),
    [aux_sym_declaration_repeat4] = STATE(39),
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [sym_lid] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(65),
  },
  [18] = {
    [sym_qid] = ACTIONS(67),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(69),
    [sym_lid] = ACTIONS(67),
    [sym_line_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_qid] = ACTIONS(67),
    [anon_sym_PERCENTpublic] = ACTIONS(69),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(67),
    [sym_line_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_symbol] = STATE(41),
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
  },
  [22] = {
    [aux_sym_declaration_repeat5] = STATE(44),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(77),
  },
  [23] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_old_rule] = STATE(46),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(79),
    [sym_new_rule] = ACTIONS(81),
    [sym_lid] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_qid] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [sym_attribute] = ACTIONS(83),
    [sym_uid] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_lid] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
  },
  [26] = {
    [aux_sym_declaration_repeat3] = STATE(53),
    [sym_symbol] = STATE(25),
    [aux_sym_declaration_repeat5] = STATE(51),
    [sym_modifier] = STATE(52),
    [sym_strict_actual] = STATE(50),
    [sym_qid] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym_uid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(87),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(87),
    [sym_lid] = ACTIONS(31),
    [sym_attribute] = ACTIONS(91),
  },
  [27] = {
    [sym_terminal_alias_attrs] = STATE(54),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
  },
  [28] = {
    [aux_sym_declaration_repeat5] = STATE(56),
    [sym_header] = ACTIONS(93),
    [anon_sym_PERCENTstart] = ACTIONS(93),
    [anon_sym_PERCENTright] = ACTIONS(93),
    [sym_uid] = ACTIONS(93),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(93),
    [anon_sym_PERCENTparameter] = ACTIONS(93),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(93),
    [anon_sym_PERCENTtype] = ACTIONS(93),
    [anon_sym_PERCENTleft] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_qid] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(93),
    [anon_sym_PERCENTattribute] = ACTIONS(93),
    [anon_sym_PERCENTnonassoc] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_PERCENTtoken] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(97),
  },
  [29] = {
    [aux_sym_declaration_repeat1] = STATE(58),
    [sym_terminal_alias_attrs] = STATE(58),
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_header] = ACTIONS(83),
    [anon_sym_PERCENTstart] = ACTIONS(83),
    [anon_sym_PERCENTright] = ACTIONS(83),
    [sym_uid] = ACTIONS(83),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(83),
    [anon_sym_PERCENTparameter] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(83),
    [anon_sym_PERCENTtype] = ACTIONS(83),
    [anon_sym_PERCENTleft] = ACTIONS(83),
    [sym_lid] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_qid] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_PERCENTattribute] = ACTIONS(83),
    [anon_sym_PERCENTnonassoc] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_PERCENTtoken] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_declaration_repeat3] = STATE(64),
    [sym_symbol] = STATE(31),
    [sym_modifier] = STATE(63),
    [sym_strict_actual] = STATE(62),
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_qid] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(65),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(66),
    [sym_old_rule] = STATE(66),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(79),
    [sym_new_rule] = ACTIONS(107),
    [sym_lid] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_priority_keyword] = STATE(13),
    [sym_declaration] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym_header] = ACTIONS(109),
    [anon_sym_PERCENTstart] = ACTIONS(112),
    [anon_sym_PERCENTright] = ACTIONS(115),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(118),
    [anon_sym_PERCENTparameter] = ACTIONS(120),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(123),
    [anon_sym_PERCENTtype] = ACTIONS(126),
    [anon_sym_PERCENTleft] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(109),
    [anon_sym_PERCENTattribute] = ACTIONS(129),
    [anon_sym_PERCENTnonassoc] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_PERCENTtoken] = ACTIONS(132),
    [sym_line_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_symbol] = STATE(68),
    [aux_sym_declaration_repeat2] = STATE(68),
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(135),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_non_terminal] = STATE(69),
    [aux_sym_declaration_repeat4] = STATE(69),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_non_terminal] = STATE(70),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_non_terminal] = STATE(71),
    [aux_sym_declaration_repeat4] = STATE(71),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_qid] = ACTIONS(139),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(139),
    [sym_line_comment] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_declaration_repeat5] = STATE(74),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(145),
  },
  [42] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(81),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(151),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_symbol] = STATE(88),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [44] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(159),
  },
  [45] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_old_rule] = STATE(46),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PERCENTpublic] = ACTIONS(166),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_uid] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(171),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(169),
    [sym_new_rule] = ACTIONS(174),
    [sym_lid] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_symbol] = STATE(90),
    [sym_strict_actual] = STATE(91),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_attribute] = ACTIONS(180),
    [sym_uid] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
  },
  [49] = {
    [sym_symbol] = STATE(25),
    [sym_strict_actual] = STATE(92),
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_modifier] = STATE(52),
    [sym_qid] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_uid] = ACTIONS(182),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(87),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(87),
    [sym_lid] = ACTIONS(182),
    [sym_attribute] = ACTIONS(182),
  },
  [51] = {
    [aux_sym_declaration_repeat5] = STATE(93),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(184),
  },
  [52] = {
    [sym_qid] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [sym_attribute] = ACTIONS(186),
    [sym_uid] = ACTIONS(186),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(186),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(186),
    [sym_lid] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
  },
  [53] = {
    [aux_sym_declaration_repeat3] = STATE(95),
    [sym_symbol] = STATE(25),
    [aux_sym_declaration_repeat5] = STATE(94),
    [sym_strict_actual] = STATE(50),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
    [sym_attribute] = ACTIONS(188),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(89),
  },
  [54] = {
    [aux_sym_declaration_repeat1] = STATE(96),
    [sym_terminal_alias_attrs] = STATE(96),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [55] = {
    [aux_sym_declaration_repeat5] = STATE(97),
    [sym_header] = ACTIONS(190),
    [anon_sym_PERCENTstart] = ACTIONS(190),
    [anon_sym_PERCENTright] = ACTIONS(190),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(190),
    [anon_sym_PERCENTparameter] = ACTIONS(190),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(190),
    [anon_sym_PERCENTtype] = ACTIONS(190),
    [anon_sym_PERCENTleft] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(190),
    [anon_sym_PERCENTattribute] = ACTIONS(190),
    [anon_sym_PERCENTnonassoc] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_PERCENTtoken] = ACTIONS(190),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(192),
  },
  [56] = {
    [aux_sym_declaration_repeat5] = STATE(98),
    [sym_header] = ACTIONS(190),
    [anon_sym_PERCENTstart] = ACTIONS(190),
    [anon_sym_PERCENTright] = ACTIONS(190),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(190),
    [anon_sym_PERCENTparameter] = ACTIONS(190),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(190),
    [anon_sym_PERCENTtype] = ACTIONS(190),
    [anon_sym_PERCENTleft] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(190),
    [anon_sym_PERCENTattribute] = ACTIONS(190),
    [anon_sym_PERCENTnonassoc] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_PERCENTtoken] = ACTIONS(190),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(194),
  },
  [57] = {
    [sym_terminal_alias_attrs] = STATE(99),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
  },
  [58] = {
    [aux_sym_declaration_repeat1] = STATE(100),
    [sym_terminal_alias_attrs] = STATE(100),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_symbol] = STATE(90),
    [sym_strict_actual] = STATE(101),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_header] = ACTIONS(180),
    [anon_sym_PERCENTstart] = ACTIONS(180),
    [anon_sym_PERCENTright] = ACTIONS(180),
    [sym_uid] = ACTIONS(180),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(180),
    [anon_sym_PERCENTparameter] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(180),
    [anon_sym_PERCENTtype] = ACTIONS(180),
    [anon_sym_PERCENTleft] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(180),
    [anon_sym_PERCENTattribute] = ACTIONS(180),
    [anon_sym_PERCENTnonassoc] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_PERCENTtoken] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(102),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(182),
    [anon_sym_PERCENTstart] = ACTIONS(182),
    [anon_sym_PERCENTright] = ACTIONS(182),
    [sym_uid] = ACTIONS(182),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(182),
    [anon_sym_PERCENTparameter] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(182),
    [anon_sym_PERCENTtype] = ACTIONS(182),
    [anon_sym_PERCENTleft] = ACTIONS(182),
    [sym_lid] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_qid] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(182),
    [anon_sym_PERCENTattribute] = ACTIONS(182),
    [anon_sym_PERCENTnonassoc] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_PERCENTtoken] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_header] = ACTIONS(186),
    [anon_sym_PERCENTstart] = ACTIONS(186),
    [anon_sym_PERCENTright] = ACTIONS(186),
    [sym_uid] = ACTIONS(186),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(186),
    [anon_sym_PERCENTparameter] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(186),
    [anon_sym_PERCENTtype] = ACTIONS(186),
    [anon_sym_PERCENTleft] = ACTIONS(186),
    [sym_lid] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
    [sym_qid] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(186),
    [anon_sym_PERCENTattribute] = ACTIONS(186),
    [anon_sym_PERCENTnonassoc] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_PERCENTtoken] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [sym_line_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(62),
    [aux_sym_declaration_repeat3] = STATE(103),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [65] = {
    [aux_sym_declaration_repeat3] = STATE(104),
    [sym_symbol] = STATE(31),
    [sym_modifier] = STATE(63),
    [sym_strict_actual] = STATE(62),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_qid] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(46),
    [sym_old_rule] = STATE(46),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(196),
    [sym_new_rule] = ACTIONS(81),
    [sym_lid] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
  },
  [67] = {
    [sym_symbol] = STATE(106),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_symbol] = STATE(107),
    [aux_sym_declaration_repeat2] = STATE(107),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(135),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_non_terminal] = STATE(71),
    [aux_sym_declaration_repeat4] = STATE(71),
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [sym_lid] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
    [sym_line_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_header] = ACTIONS(200),
    [anon_sym_PERCENTstart] = ACTIONS(200),
    [anon_sym_PERCENTright] = ACTIONS(200),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [anon_sym_PERCENTparameter] = ACTIONS(200),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(200),
    [anon_sym_PERCENTtype] = ACTIONS(200),
    [anon_sym_PERCENTleft] = ACTIONS(200),
    [sym_lid] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(200),
    [anon_sym_PERCENTattribute] = ACTIONS(200),
    [anon_sym_PERCENTnonassoc] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_PERCENTtoken] = ACTIONS(200),
    [sym_line_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_non_terminal] = STATE(71),
    [aux_sym_declaration_repeat4] = STATE(71),
    [sym_header] = ACTIONS(200),
    [anon_sym_PERCENTstart] = ACTIONS(200),
    [anon_sym_PERCENTright] = ACTIONS(200),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [anon_sym_PERCENTparameter] = ACTIONS(200),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(200),
    [anon_sym_PERCENTtype] = ACTIONS(200),
    [anon_sym_PERCENTleft] = ACTIONS(200),
    [sym_lid] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(200),
    [anon_sym_PERCENTattribute] = ACTIONS(200),
    [anon_sym_PERCENTnonassoc] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_PERCENTtoken] = ACTIONS(200),
    [sym_line_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(109),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(208),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_symbol] = STATE(110),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [74] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(159),
  },
  [75] = {
    [sym_uid] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_ocaml_type] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(65),
  },
  [76] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(109),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [77] = {
    [sym_precedence] = STATE(115),
    [sym_qid] = ACTIONS(216),
    [anon_sym_PERCENTpublic] = ACTIONS(216),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_uid] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [sym_postlude] = ACTIONS(216),
    [sym_new_rule] = ACTIONS(218),
    [anon_sym_PERCENTprec] = ACTIONS(220),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(218),
    [sym_line_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_symbol] = STATE(117),
    [sym_qid] = ACTIONS(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(222),
    [sym_line_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_attribute] = ACTIONS(65),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_ocaml_type] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(224),
  },
  [80] = {
    [aux_sym_old_rule_repeat3] = STATE(120),
    [aux_sym_declaration_repeat5] = STATE(121),
    [sym_modifier] = STATE(122),
    [sym_uid] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(228),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(226),
    [sym_action] = ACTIONS(226),
    [sym_lid] = ACTIONS(226),
    [sym_qid] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(228),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(232),
  },
  [81] = {
    [aux_sym_old_rule_repeat3] = STATE(124),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(123),
    [sym_qid] = ACTIONS(234),
    [anon_sym_PERCENTpublic] = ACTIONS(234),
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_uid] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(236),
    [sym_postlude] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(240),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(240),
    [sym_line_comment] = ACTIONS(3),
  },
  [82] = {
    [aux_sym_production_group_repeat2] = STATE(127),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(242),
    [sym_line_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_actual] = STATE(80),
    [aux_sym_production_group_repeat1] = STATE(128),
    [sym_producer] = STATE(128),
    [sym_bar] = STATE(86),
    [sym_symbol] = STATE(85),
    [aux_sym_production_group_repeat2] = STATE(127),
    [sym_precedence] = STATE(129),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(242),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_action] = ACTIONS(242),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [84] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(242),
    [sym_line_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_uid] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_action] = ACTIONS(244),
    [sym_lid] = ACTIONS(244),
    [sym_qid] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_ocaml_type] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(244),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(244),
  },
  [86] = {
    [sym_actual] = STATE(80),
    [aux_sym_production_group_repeat1] = STATE(132),
    [sym_producer] = STATE(132),
    [sym_precedence] = STATE(133),
    [sym_symbol] = STATE(85),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(248),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(248),
    [sym_action] = ACTIONS(248),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
  },
  [88] = {
    [aux_sym_old_rule_repeat1] = STATE(136),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_line_comment] = ACTIONS(3),
  },
  [89] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(256),
  },
  [90] = {
    [anon_sym_STAR] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [91] = {
    [sym_modifier] = STATE(141),
    [aux_sym_strict_actual_repeat1] = STATE(142),
    [anon_sym_STAR] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(261),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [anon_sym_QMARK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(265),
  },
  [92] = {
    [sym_modifier] = STATE(52),
    [sym_qid] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_uid] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(87),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(87),
    [sym_lid] = ACTIONS(267),
    [sym_attribute] = ACTIONS(267),
  },
  [93] = {
    [aux_sym_declaration_repeat5] = STATE(93),
    [sym_header] = ACTIONS(254),
    [anon_sym_PERCENTstart] = ACTIONS(254),
    [anon_sym_PERCENTright] = ACTIONS(254),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(254),
    [anon_sym_PERCENTparameter] = ACTIONS(254),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(254),
    [anon_sym_PERCENTtype] = ACTIONS(254),
    [anon_sym_PERCENTleft] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(254),
    [anon_sym_PERCENTattribute] = ACTIONS(254),
    [anon_sym_PERCENTnonassoc] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_PERCENTtoken] = ACTIONS(254),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(269),
  },
  [94] = {
    [aux_sym_declaration_repeat5] = STATE(93),
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(184),
  },
  [95] = {
    [sym_symbol] = STATE(25),
    [sym_strict_actual] = STATE(50),
    [aux_sym_declaration_repeat3] = STATE(95),
    [sym_qid] = ACTIONS(272),
    [sym_lid] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(275),
    [sym_uid] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(267),
  },
  [96] = {
    [aux_sym_declaration_repeat1] = STATE(100),
    [sym_terminal_alias_attrs] = STATE(100),
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
    [sym_line_comment] = ACTIONS(3),
  },
  [97] = {
    [aux_sym_declaration_repeat5] = STATE(98),
    [sym_header] = ACTIONS(278),
    [anon_sym_PERCENTstart] = ACTIONS(278),
    [anon_sym_PERCENTright] = ACTIONS(278),
    [sym_uid] = ACTIONS(278),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(278),
    [anon_sym_PERCENTparameter] = ACTIONS(278),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(278),
    [anon_sym_PERCENTtype] = ACTIONS(278),
    [anon_sym_PERCENTleft] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(278),
    [anon_sym_PERCENTattribute] = ACTIONS(278),
    [anon_sym_PERCENTnonassoc] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_PERCENTtoken] = ACTIONS(278),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(194),
  },
  [98] = {
    [aux_sym_declaration_repeat5] = STATE(98),
    [sym_header] = ACTIONS(254),
    [anon_sym_PERCENTstart] = ACTIONS(254),
    [anon_sym_PERCENTright] = ACTIONS(254),
    [sym_uid] = ACTIONS(254),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(254),
    [anon_sym_PERCENTparameter] = ACTIONS(254),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(254),
    [anon_sym_PERCENTtype] = ACTIONS(254),
    [anon_sym_PERCENTleft] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(254),
    [anon_sym_PERCENTattribute] = ACTIONS(254),
    [anon_sym_PERCENTnonassoc] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_PERCENTtoken] = ACTIONS(254),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(280),
  },
  [99] = {
    [sym_header] = ACTIONS(283),
    [anon_sym_PERCENTstart] = ACTIONS(283),
    [anon_sym_PERCENTright] = ACTIONS(283),
    [sym_uid] = ACTIONS(283),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(283),
    [anon_sym_PERCENTparameter] = ACTIONS(283),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(283),
    [anon_sym_PERCENTtype] = ACTIONS(283),
    [anon_sym_PERCENTleft] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(283),
    [anon_sym_PERCENTattribute] = ACTIONS(283),
    [anon_sym_PERCENTnonassoc] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_PERCENTtoken] = ACTIONS(283),
    [sym_line_comment] = ACTIONS(3),
  },
  [100] = {
    [aux_sym_declaration_repeat1] = STATE(100),
    [sym_terminal_alias_attrs] = STATE(100),
    [sym_header] = ACTIONS(283),
    [anon_sym_PERCENTstart] = ACTIONS(283),
    [anon_sym_PERCENTright] = ACTIONS(283),
    [sym_uid] = ACTIONS(285),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(283),
    [anon_sym_PERCENTparameter] = ACTIONS(283),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(283),
    [anon_sym_PERCENTtype] = ACTIONS(283),
    [anon_sym_PERCENTleft] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(283),
    [anon_sym_PERCENTattribute] = ACTIONS(283),
    [anon_sym_PERCENTnonassoc] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_PERCENTtoken] = ACTIONS(283),
    [sym_line_comment] = ACTIONS(3),
  },
  [101] = {
    [sym_modifier] = STATE(141),
    [aux_sym_strict_actual_repeat1] = STATE(144),
    [anon_sym_STAR] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(261),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [anon_sym_QMARK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [102] = {
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(267),
    [anon_sym_PERCENTstart] = ACTIONS(267),
    [anon_sym_PERCENTright] = ACTIONS(267),
    [sym_uid] = ACTIONS(267),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(267),
    [anon_sym_PERCENTparameter] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(267),
    [anon_sym_PERCENTtype] = ACTIONS(267),
    [anon_sym_PERCENTleft] = ACTIONS(267),
    [sym_lid] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_qid] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(267),
    [anon_sym_PERCENTattribute] = ACTIONS(267),
    [anon_sym_PERCENTnonassoc] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_PERCENTtoken] = ACTIONS(267),
    [anon_sym_QMARK] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(62),
    [aux_sym_declaration_repeat3] = STATE(103),
    [sym_header] = ACTIONS(267),
    [anon_sym_PERCENTstart] = ACTIONS(267),
    [anon_sym_PERCENTright] = ACTIONS(267),
    [sym_uid] = ACTIONS(293),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(267),
    [anon_sym_PERCENTparameter] = ACTIONS(267),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(267),
    [anon_sym_PERCENTtype] = ACTIONS(267),
    [anon_sym_PERCENTleft] = ACTIONS(267),
    [sym_lid] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_qid] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(267),
    [anon_sym_PERCENTattribute] = ACTIONS(267),
    [anon_sym_PERCENTnonassoc] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_PERCENTtoken] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(3),
  },
  [104] = {
    [sym_symbol] = STATE(31),
    [sym_strict_actual] = STATE(62),
    [aux_sym_declaration_repeat3] = STATE(103),
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
    [sym_line_comment] = ACTIONS(3),
  },
  [105] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_header] = ACTIONS(301),
    [anon_sym_PERCENTstart] = ACTIONS(301),
    [anon_sym_PERCENTright] = ACTIONS(301),
    [sym_uid] = ACTIONS(301),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(301),
    [anon_sym_PERCENTparameter] = ACTIONS(301),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(301),
    [anon_sym_PERCENTtype] = ACTIONS(301),
    [anon_sym_PERCENTleft] = ACTIONS(301),
    [sym_lid] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym_qid] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(301),
    [anon_sym_PERCENTattribute] = ACTIONS(301),
    [anon_sym_PERCENTnonassoc] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_PERCENTtoken] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(3),
  },
  [107] = {
    [sym_symbol] = STATE(107),
    [aux_sym_declaration_repeat2] = STATE(107),
    [sym_header] = ACTIONS(301),
    [anon_sym_PERCENTstart] = ACTIONS(301),
    [anon_sym_PERCENTright] = ACTIONS(301),
    [sym_uid] = ACTIONS(303),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(301),
    [anon_sym_PERCENTparameter] = ACTIONS(301),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(301),
    [anon_sym_PERCENTtype] = ACTIONS(301),
    [anon_sym_PERCENTleft] = ACTIONS(301),
    [sym_lid] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_qid] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(301),
    [anon_sym_PERCENTattribute] = ACTIONS(301),
    [anon_sym_PERCENTnonassoc] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_PERCENTtoken] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(145),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [109] = {
    [aux_sym_old_rule_repeat3] = STATE(147),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(146),
    [sym_qid] = ACTIONS(309),
    [anon_sym_PERCENTpublic] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_uid] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(311),
    [sym_postlude] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(313),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(3),
  },
  [110] = {
    [aux_sym_old_rule_repeat1] = STATE(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(145),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(317),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_symbol] = STATE(151),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [114] = {
    [sym_symbol] = STATE(153),
    [sym_qid] = ACTIONS(319),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(319),
    [sym_line_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_qid] = ACTIONS(321),
    [anon_sym_PERCENTpublic] = ACTIONS(321),
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_uid] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [sym_postlude] = ACTIONS(321),
    [sym_new_rule] = ACTIONS(323),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(323),
    [sym_line_comment] = ACTIONS(3),
  },
  [116] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
  },
  [117] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(325),
    [sym_action] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(325),
    [sym_line_comment] = ACTIONS(3),
  },
  [118] = {
    [sym_symbol] = STATE(85),
    [sym_actual] = STATE(154),
    [sym_qid] = ACTIONS(147),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(147),
    [sym_line_comment] = ACTIONS(3),
  },
  [119] = {
    [sym_uid] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(180),
    [sym_action] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(180),
  },
  [120] = {
    [aux_sym_old_rule_repeat3] = STATE(155),
    [sym_qid] = ACTIONS(327),
    [sym_uid] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PERCENTprec] = ACTIONS(327),
    [sym_action] = ACTIONS(327),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(3),
  },
  [121] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [aux_sym_declaration_repeat5] = STATE(157),
    [sym_qid] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PERCENTprec] = ACTIONS(327),
    [sym_action] = ACTIONS(327),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(327),
    [sym_attribute] = ACTIONS(333),
  },
  [122] = {
    [sym_uid] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(335),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(335),
    [sym_action] = ACTIONS(335),
    [sym_lid] = ACTIONS(335),
    [sym_qid] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_QMARK] = ACTIONS(335),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(335),
  },
  [123] = {
    [aux_sym_old_rule_repeat3] = STATE(147),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(309),
    [anon_sym_PERCENTpublic] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_uid] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(311),
    [sym_postlude] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(313),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(3),
  },
  [124] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(309),
    [anon_sym_PERCENTpublic] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_uid] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(309),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(313),
    [sym_lid] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(160),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [126] = {
    [sym_precedence] = STATE(161),
    [sym_qid] = ACTIONS(321),
    [anon_sym_PERCENTpublic] = ACTIONS(321),
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_uid] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [sym_postlude] = ACTIONS(321),
    [sym_new_rule] = ACTIONS(323),
    [anon_sym_PERCENTprec] = ACTIONS(220),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(323),
    [sym_line_comment] = ACTIONS(3),
  },
  [127] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(339),
    [sym_line_comment] = ACTIONS(3),
  },
  [128] = {
    [sym_actual] = STATE(80),
    [aux_sym_production_group_repeat1] = STATE(128),
    [sym_producer] = STATE(128),
    [sym_symbol] = STATE(85),
    [sym_qid] = ACTIONS(341),
    [sym_uid] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(344),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(344),
    [anon_sym_PERCENTprec] = ACTIONS(344),
    [sym_action] = ACTIONS(344),
    [sym_lid] = ACTIONS(346),
    [sym_line_comment] = ACTIONS(3),
  },
  [129] = {
    [aux_sym_production_group_repeat2] = STATE(163),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(339),
    [sym_line_comment] = ACTIONS(3),
  },
  [130] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(349),
    [sym_action] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(352),
    [sym_line_comment] = ACTIONS(3),
  },
  [131] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(169),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [aux_sym_production_group_repeat2] = STATE(172),
    [sym_symbol] = STATE(173),
    [sym_producer] = STATE(171),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(354),
    [sym_uid] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(356),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(358),
    [sym_line_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_actual] = STATE(80),
    [aux_sym_production_group_repeat1] = STATE(128),
    [sym_producer] = STATE(128),
    [sym_precedence] = STATE(174),
    [sym_symbol] = STATE(85),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(352),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(352),
    [sym_action] = ACTIONS(352),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [133] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(352),
    [sym_action] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(352),
    [sym_line_comment] = ACTIONS(3),
  },
  [134] = {
    [sym_symbol] = STATE(175),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [135] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(360),
    [sym_line_comment] = ACTIONS(3),
  },
  [136] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_symbol] = STATE(90),
    [sym_strict_actual] = STATE(178),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [138] = {
    [anon_sym_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(180),
  },
  [139] = {
    [sym_symbol] = STATE(90),
    [sym_strict_actual] = STATE(179),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [140] = {
    [sym_qid] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [sym_attribute] = ACTIONS(362),
    [sym_uid] = ACTIONS(362),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(362),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(362),
    [sym_lid] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
  },
  [141] = {
    [anon_sym_STAR] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(186),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(186),
  },
  [142] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(364),
    [sym_line_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_header] = ACTIONS(362),
    [anon_sym_PERCENTstart] = ACTIONS(362),
    [anon_sym_PERCENTright] = ACTIONS(362),
    [sym_uid] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(362),
    [anon_sym_PERCENTparameter] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(362),
    [anon_sym_PERCENTtype] = ACTIONS(362),
    [anon_sym_PERCENTleft] = ACTIONS(362),
    [sym_lid] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_qid] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(362),
    [anon_sym_PERCENTattribute] = ACTIONS(362),
    [anon_sym_PERCENTnonassoc] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(362),
    [anon_sym_PERCENTtoken] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [sym_line_comment] = ACTIONS(3),
  },
  [144] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_line_comment] = ACTIONS(3),
  },
  [145] = {
    [aux_sym_old_rule_repeat3] = STATE(184),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(183),
    [sym_qid] = ACTIONS(368),
    [anon_sym_PERCENTpublic] = ACTIONS(368),
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_uid] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(370),
    [sym_postlude] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(372),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(372),
    [sym_line_comment] = ACTIONS(3),
  },
  [146] = {
    [aux_sym_old_rule_repeat3] = STATE(184),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(368),
    [anon_sym_PERCENTpublic] = ACTIONS(368),
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_uid] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(370),
    [sym_postlude] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(372),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(372),
    [sym_line_comment] = ACTIONS(3),
  },
  [147] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(368),
    [anon_sym_PERCENTpublic] = ACTIONS(368),
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_uid] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(368),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(372),
    [sym_lid] = ACTIONS(372),
    [sym_line_comment] = ACTIONS(3),
  },
  [148] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(374),
    [sym_line_comment] = ACTIONS(3),
  },
  [149] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym_line_comment] = ACTIONS(3),
  },
  [150] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(187),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [151] = {
    [aux_sym_old_rule_repeat1] = STATE(188),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym_line_comment] = ACTIONS(3),
  },
  [152] = {
    [sym_qid] = ACTIONS(65),
    [anon_sym_PERCENTpublic] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_uid] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_postlude] = ACTIONS(65),
    [sym_new_rule] = ACTIONS(378),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(378),
    [sym_line_comment] = ACTIONS(3),
  },
  [153] = {
    [sym_qid] = ACTIONS(325),
    [anon_sym_PERCENTpublic] = ACTIONS(325),
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_uid] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [sym_postlude] = ACTIONS(325),
    [sym_new_rule] = ACTIONS(380),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(380),
    [sym_line_comment] = ACTIONS(3),
  },
  [154] = {
    [aux_sym_old_rule_repeat3] = STATE(189),
    [aux_sym_declaration_repeat5] = STATE(190),
    [sym_modifier] = STATE(122),
    [sym_uid] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(228),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(382),
    [sym_action] = ACTIONS(382),
    [sym_lid] = ACTIONS(382),
    [sym_qid] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(228),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(386),
  },
  [155] = {
    [aux_sym_old_rule_repeat3] = STATE(155),
    [sym_qid] = ACTIONS(388),
    [sym_uid] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_PERCENTprec] = ACTIONS(388),
    [sym_action] = ACTIONS(388),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(388),
    [sym_line_comment] = ACTIONS(3),
  },
  [156] = {
    [aux_sym_old_rule_repeat3] = STATE(155),
    [sym_qid] = ACTIONS(382),
    [sym_uid] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_PERCENTprec] = ACTIONS(382),
    [sym_action] = ACTIONS(382),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(382),
    [sym_line_comment] = ACTIONS(3),
  },
  [157] = {
    [aux_sym_declaration_repeat5] = STATE(157),
    [sym_qid] = ACTIONS(254),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_PERCENTprec] = ACTIONS(254),
    [sym_action] = ACTIONS(254),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(254),
    [sym_attribute] = ACTIONS(393),
  },
  [158] = {
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(396),
    [anon_sym_PERCENTpublic] = ACTIONS(396),
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_uid] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(398),
    [sym_postlude] = ACTIONS(396),
    [sym_new_rule] = ACTIONS(401),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(3),
  },
  [159] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(388),
    [anon_sym_PERCENTpublic] = ACTIONS(388),
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_uid] = ACTIONS(388),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(403),
    [sym_postlude] = ACTIONS(388),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(406),
    [sym_lid] = ACTIONS(406),
    [sym_line_comment] = ACTIONS(3),
  },
  [160] = {
    [sym_qid] = ACTIONS(396),
    [anon_sym_PERCENTpublic] = ACTIONS(396),
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_uid] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [sym_postlude] = ACTIONS(396),
    [sym_new_rule] = ACTIONS(401),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(3),
  },
  [161] = {
    [sym_qid] = ACTIONS(408),
    [anon_sym_PERCENTpublic] = ACTIONS(408),
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_uid] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [sym_postlude] = ACTIONS(408),
    [sym_new_rule] = ACTIONS(410),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(410),
    [sym_line_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_precedence] = STATE(191),
    [sym_qid] = ACTIONS(408),
    [anon_sym_PERCENTpublic] = ACTIONS(408),
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_uid] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [sym_postlude] = ACTIONS(408),
    [sym_new_rule] = ACTIONS(410),
    [anon_sym_PERCENTprec] = ACTIONS(220),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(410),
    [sym_line_comment] = ACTIONS(3),
  },
  [163] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(412),
    [sym_line_comment] = ACTIONS(3),
  },
  [164] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(65),
    [anon_sym_PERCENTprec] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_ocaml_type] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_attribute] = ACTIONS(65),
  },
  [165] = {
    [sym_precedence] = STATE(194),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_COMMA2] = ACTIONS(216),
    [anon_sym_PERCENTprec] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(216),
    [sym_line_comment] = ACTIONS(3),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(224),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(65),
    [anon_sym_PERCENTprec] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
    [sym_qid] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_ocaml_type] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_attribute] = ACTIONS(65),
  },
  [167] = {
    [aux_sym_old_rule_repeat3] = STATE(120),
    [aux_sym_declaration_repeat5] = STATE(121),
    [sym_modifier] = STATE(196),
    [sym_uid] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(416),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(226),
    [sym_action] = ACTIONS(226),
    [sym_lid] = ACTIONS(226),
    [sym_qid] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(416),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(232),
  },
  [168] = {
    [aux_sym_lax_actual_repeat1] = STATE(198),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_line_comment] = ACTIONS(3),
  },
  [169] = {
    [aux_sym_actual_repeat1] = STATE(201),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_line_comment] = ACTIONS(3),
  },
  [170] = {
    [aux_sym_production_group_repeat2] = STATE(203),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(426),
    [sym_line_comment] = ACTIONS(3),
  },
  [171] = {
    [sym_actual] = STATE(80),
    [aux_sym_production_group_repeat1] = STATE(128),
    [sym_producer] = STATE(128),
    [sym_bar] = STATE(86),
    [sym_symbol] = STATE(85),
    [aux_sym_production_group_repeat2] = STATE(203),
    [sym_precedence] = STATE(204),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(426),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_action] = ACTIONS(426),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [172] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(426),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(426),
    [sym_line_comment] = ACTIONS(3),
  },
  [173] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(418),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_action] = ACTIONS(244),
    [sym_lid] = ACTIONS(244),
    [sym_qid] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(428),
    [sym_ocaml_type] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_attribute] = ACTIONS(244),
  },
  [174] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(430),
    [sym_action] = ACTIONS(430),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(430),
    [sym_line_comment] = ACTIONS(3),
  },
  [175] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(432),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_line_comment] = ACTIONS(3),
  },
  [176] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(187),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(434),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_line_comment] = ACTIONS(3),
  },
  [178] = {
    [sym_modifier] = STATE(141),
    [aux_sym_strict_actual_repeat1] = STATE(208),
    [anon_sym_STAR] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(261),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [anon_sym_QMARK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(439),
  },
  [179] = {
    [sym_modifier] = STATE(141),
    [anon_sym_STAR] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(261),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(441),
    [anon_sym_QMARK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(441),
  },
  [180] = {
    [sym_qid] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [sym_attribute] = ACTIONS(443),
    [sym_uid] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(443),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(443),
    [sym_lid] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
  },
  [181] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_line_comment] = ACTIONS(3),
  },
  [182] = {
    [sym_header] = ACTIONS(443),
    [anon_sym_PERCENTstart] = ACTIONS(443),
    [anon_sym_PERCENTright] = ACTIONS(443),
    [sym_uid] = ACTIONS(443),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(443),
    [anon_sym_PERCENTparameter] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(443),
    [anon_sym_PERCENTtype] = ACTIONS(443),
    [anon_sym_PERCENTleft] = ACTIONS(443),
    [sym_lid] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [sym_qid] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(443),
    [anon_sym_PERCENTattribute] = ACTIONS(443),
    [anon_sym_PERCENTnonassoc] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PERCENTtoken] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(3),
  },
  [183] = {
    [aux_sym_old_rule_repeat3] = STATE(209),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(448),
    [anon_sym_PERCENTpublic] = ACTIONS(448),
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym_uid] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(450),
    [sym_postlude] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(452),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(452),
    [sym_line_comment] = ACTIONS(3),
  },
  [184] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(448),
    [anon_sym_PERCENTpublic] = ACTIONS(448),
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym_uid] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(448),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(452),
    [sym_lid] = ACTIONS(452),
    [sym_line_comment] = ACTIONS(3),
  },
  [185] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(211),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(454),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(456),
    [sym_line_comment] = ACTIONS(3),
  },
  [187] = {
    [aux_sym_old_rule_repeat3] = STATE(209),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(213),
    [sym_qid] = ACTIONS(448),
    [anon_sym_PERCENTpublic] = ACTIONS(448),
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym_uid] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(450),
    [sym_postlude] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(452),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(452),
    [sym_line_comment] = ACTIONS(3),
  },
  [188] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_line_comment] = ACTIONS(3),
  },
  [189] = {
    [aux_sym_old_rule_repeat3] = STATE(155),
    [sym_qid] = ACTIONS(460),
    [sym_uid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_PERCENTprec] = ACTIONS(460),
    [sym_action] = ACTIONS(460),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(460),
    [sym_line_comment] = ACTIONS(3),
  },
  [190] = {
    [aux_sym_old_rule_repeat3] = STATE(215),
    [aux_sym_declaration_repeat5] = STATE(157),
    [sym_qid] = ACTIONS(460),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_PERCENTprec] = ACTIONS(460),
    [sym_action] = ACTIONS(460),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(460),
    [sym_attribute] = ACTIONS(333),
  },
  [191] = {
    [sym_qid] = ACTIONS(464),
    [anon_sym_PERCENTpublic] = ACTIONS(464),
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_uid] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [sym_postlude] = ACTIONS(464),
    [sym_new_rule] = ACTIONS(466),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(466),
    [sym_line_comment] = ACTIONS(3),
  },
  [192] = {
    [sym_precedence] = STATE(216),
    [sym_qid] = ACTIONS(464),
    [anon_sym_PERCENTpublic] = ACTIONS(464),
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_uid] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [sym_postlude] = ACTIONS(464),
    [sym_new_rule] = ACTIONS(466),
    [anon_sym_PERCENTprec] = ACTIONS(220),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(466),
    [sym_line_comment] = ACTIONS(3),
  },
  [193] = {
    [sym_symbol] = STATE(217),
    [sym_qid] = ACTIONS(157),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(3),
  },
  [194] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_COMMA2] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_line_comment] = ACTIONS(3),
  },
  [195] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(180),
    [anon_sym_PERCENTprec] = ACTIONS(180),
    [sym_action] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_attribute] = ACTIONS(180),
  },
  [196] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(335),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(468),
    [anon_sym_PERCENTprec] = ACTIONS(335),
    [sym_action] = ACTIONS(335),
    [sym_lid] = ACTIONS(335),
    [sym_qid] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_QMARK] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_attribute] = ACTIONS(335),
  },
  [197] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(218),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [aux_sym_production_group_repeat2] = STATE(172),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(171),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(356),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [198] = {
    [aux_sym_lax_actual_repeat1] = STATE(219),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_line_comment] = ACTIONS(3),
  },
  [199] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(220),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [aux_sym_production_group_repeat2] = STATE(172),
    [sym_symbol] = STATE(173),
    [sym_producer] = STATE(171),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(354),
    [sym_uid] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(356),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(358),
    [sym_line_comment] = ACTIONS(3),
  },
  [200] = {
    [sym_uid] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(470),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(470),
    [sym_action] = ACTIONS(470),
    [sym_lid] = ACTIONS(470),
    [sym_qid] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(470),
  },
  [201] = {
    [aux_sym_actual_repeat1] = STATE(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_line_comment] = ACTIONS(3),
  },
  [202] = {
    [sym_precedence] = STATE(223),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_COMMA2] = ACTIONS(321),
    [anon_sym_PERCENTprec] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_line_comment] = ACTIONS(3),
  },
  [203] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(474),
    [sym_line_comment] = ACTIONS(3),
  },
  [204] = {
    [aux_sym_production_group_repeat2] = STATE(225),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(474),
    [sym_line_comment] = ACTIONS(3),
  },
  [205] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(226),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [aux_sym_production_group_repeat2] = STATE(172),
    [sym_symbol] = STATE(173),
    [sym_producer] = STATE(171),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(354),
    [sym_uid] = ACTIONS(354),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(356),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(358),
    [sym_line_comment] = ACTIONS(3),
  },
  [206] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(211),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(362),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(362),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(362),
  },
  [208] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_line_comment] = ACTIONS(3),
  },
  [209] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(478),
    [anon_sym_PERCENTpublic] = ACTIONS(478),
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_uid] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(478),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(480),
    [sym_lid] = ACTIONS(480),
    [sym_line_comment] = ACTIONS(3),
  },
  [210] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(228),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [211] = {
    [aux_sym_old_rule_repeat3] = STATE(230),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(229),
    [sym_qid] = ACTIONS(478),
    [anon_sym_PERCENTpublic] = ACTIONS(478),
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_uid] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(482),
    [sym_postlude] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(480),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(480),
    [sym_line_comment] = ACTIONS(3),
  },
  [212] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(228),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(484),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [213] = {
    [aux_sym_old_rule_repeat3] = STATE(230),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(478),
    [anon_sym_PERCENTpublic] = ACTIONS(478),
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_uid] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(482),
    [sym_postlude] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(480),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(480),
    [sym_line_comment] = ACTIONS(3),
  },
  [214] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(486),
    [sym_line_comment] = ACTIONS(3),
  },
  [215] = {
    [aux_sym_old_rule_repeat3] = STATE(155),
    [sym_qid] = ACTIONS(488),
    [sym_uid] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_PERCENTprec] = ACTIONS(488),
    [sym_action] = ACTIONS(488),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(488),
    [sym_line_comment] = ACTIONS(3),
  },
  [216] = {
    [sym_qid] = ACTIONS(490),
    [anon_sym_PERCENTpublic] = ACTIONS(490),
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym_uid] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [sym_postlude] = ACTIONS(490),
    [sym_new_rule] = ACTIONS(492),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(492),
    [sym_line_comment] = ACTIONS(3),
  },
  [217] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_COMMA2] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(325),
    [sym_line_comment] = ACTIONS(3),
  },
  [218] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(494),
    [anon_sym_COMMA2] = ACTIONS(494),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_line_comment] = ACTIONS(3),
  },
  [219] = {
    [aux_sym_lax_actual_repeat1] = STATE(219),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(496),
    [anon_sym_COMMA2] = ACTIONS(494),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_line_comment] = ACTIONS(3),
  },
  [220] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(499),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(499),
    [sym_line_comment] = ACTIONS(3),
  },
  [221] = {
    [sym_uid] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(501),
    [sym_action] = ACTIONS(501),
    [sym_lid] = ACTIONS(501),
    [sym_qid] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(501),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(501),
  },
  [222] = {
    [aux_sym_actual_repeat1] = STATE(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(499),
    [sym_line_comment] = ACTIONS(3),
  },
  [223] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_COMMA2] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(408),
    [sym_line_comment] = ACTIONS(3),
  },
  [224] = {
    [sym_precedence] = STATE(233),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_COMMA2] = ACTIONS(408),
    [anon_sym_PERCENTprec] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(408),
    [sym_line_comment] = ACTIONS(3),
  },
  [225] = {
    [aux_sym_production_group_repeat2] = STATE(130),
    [sym_bar] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_action] = ACTIONS(506),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(506),
    [sym_line_comment] = ACTIONS(3),
  },
  [226] = {
    [aux_sym_actual_repeat1] = STATE(236),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_line_comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_STAR] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(443),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(443),
  },
  [228] = {
    [aux_sym_old_rule_repeat3] = STATE(238),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [sym_qid] = ACTIONS(510),
    [anon_sym_PERCENTpublic] = ACTIONS(510),
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_uid] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_postlude] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(514),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(514),
    [sym_line_comment] = ACTIONS(3),
  },
  [229] = {
    [aux_sym_old_rule_repeat3] = STATE(238),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(510),
    [anon_sym_PERCENTpublic] = ACTIONS(510),
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_uid] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_postlude] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(514),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(514),
    [sym_line_comment] = ACTIONS(3),
  },
  [230] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(510),
    [anon_sym_PERCENTpublic] = ACTIONS(510),
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_uid] = ACTIONS(510),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(510),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(514),
    [sym_lid] = ACTIONS(514),
    [sym_line_comment] = ACTIONS(3),
  },
  [231] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(239),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [232] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(239),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(147),
    [sym_uid] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(149),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(516),
    [sym_action] = ACTIONS(149),
    [anon_sym_PERCENTprec] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
  },
  [233] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_COMMA2] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_line_comment] = ACTIONS(3),
  },
  [234] = {
    [sym_precedence] = STATE(241),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_COMMA2] = ACTIONS(464),
    [anon_sym_PERCENTprec] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_line_comment] = ACTIONS(3),
  },
  [235] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(470),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(518),
    [anon_sym_PERCENTprec] = ACTIONS(470),
    [sym_action] = ACTIONS(470),
    [sym_lid] = ACTIONS(470),
    [sym_qid] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_attribute] = ACTIONS(470),
  },
  [236] = {
    [aux_sym_actual_repeat1] = STATE(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_line_comment] = ACTIONS(3),
  },
  [237] = {
    [aux_sym_old_rule_repeat3] = STATE(243),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [sym_postlude] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(526),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(526),
    [sym_line_comment] = ACTIONS(3),
  },
  [238] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(522),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(526),
    [sym_lid] = ACTIONS(526),
    [sym_line_comment] = ACTIONS(3),
  },
  [239] = {
    [aux_sym_old_rule_repeat3] = STATE(243),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(244),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [sym_postlude] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(526),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(526),
    [sym_line_comment] = ACTIONS(3),
  },
  [240] = {
    [sym_actual] = STATE(80),
    [sym_production_group] = STATE(245),
    [sym_precedence] = STATE(82),
    [aux_sym_production_group_repeat1] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(84),
    [sym_symbol] = STATE(85),
    [sym_producer] = STATE(83),
    [sym_bar] = STATE(86),
    [sym_qid] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_action] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(3),
  },
  [241] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_COMMA2] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(490),
    [sym_line_comment] = ACTIONS(3),
  },
  [242] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(528),
    [anon_sym_PERCENTprec] = ACTIONS(501),
    [sym_action] = ACTIONS(501),
    [sym_lid] = ACTIONS(501),
    [sym_qid] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(501),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_attribute] = ACTIONS(501),
  },
  [243] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(530),
    [anon_sym_PERCENTpublic] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(530),
    [sym_uid] = ACTIONS(530),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(530),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(532),
    [sym_lid] = ACTIONS(532),
    [sym_line_comment] = ACTIONS(3),
  },
  [244] = {
    [aux_sym_old_rule_repeat3] = STATE(246),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(530),
    [anon_sym_PERCENTpublic] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(530),
    [sym_uid] = ACTIONS(530),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(534),
    [sym_postlude] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(532),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(532),
    [sym_line_comment] = ACTIONS(3),
  },
  [245] = {
    [aux_sym_old_rule_repeat3] = STATE(246),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(247),
    [sym_qid] = ACTIONS(530),
    [anon_sym_PERCENTpublic] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(530),
    [sym_uid] = ACTIONS(530),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(534),
    [sym_postlude] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(532),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(532),
    [sym_line_comment] = ACTIONS(3),
  },
  [246] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(536),
    [anon_sym_PERCENTpublic] = ACTIONS(536),
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym_uid] = ACTIONS(536),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(536),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(538),
    [sym_lid] = ACTIONS(538),
    [sym_line_comment] = ACTIONS(3),
  },
  [247] = {
    [aux_sym_old_rule_repeat3] = STATE(248),
    [sym_bar] = STATE(125),
    [aux_sym_old_rule_repeat2] = STATE(158),
    [sym_qid] = ACTIONS(536),
    [anon_sym_PERCENTpublic] = ACTIONS(536),
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym_uid] = ACTIONS(536),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(540),
    [sym_postlude] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_new_rule] = ACTIONS(538),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(538),
    [sym_line_comment] = ACTIONS(3),
  },
  [248] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(542),
    [anon_sym_PERCENTpublic] = ACTIONS(542),
    [ts_builtin_sym_end] = ACTIONS(542),
    [sym_uid] = ACTIONS(542),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_postlude] = ACTIONS(542),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(544),
    [sym_lid] = ACTIONS(544),
    [sym_line_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_priority_keyword, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(23),
  [43] = {.count = 1, .reusable = false}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true}, SHIFT(34),
  [57] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(40),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(44),
  [79] = {.count = 1, .reusable = true}, SHIFT(45),
  [81] = {.count = 1, .reusable = false}, SHIFT(46),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(47),
  [87] = {.count = 1, .reusable = true}, SHIFT(48),
  [89] = {.count = 1, .reusable = true}, SHIFT(49),
  [91] = {.count = 1, .reusable = true}, SHIFT(51),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, SHIFT(56),
  [99] = {.count = 1, .reusable = true}, SHIFT(57),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, SHIFT(61),
  [107] = {.count = 1, .reusable = false}, SHIFT(66),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, SHIFT(73),
  [145] = {.count = 1, .reusable = true}, SHIFT(74),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(77),
  [151] = {.count = 1, .reusable = true}, SHIFT(76),
  [153] = {.count = 1, .reusable = true}, SHIFT(78),
  [155] = {.count = 1, .reusable = true}, SHIFT(79),
  [157] = {.count = 1, .reusable = true}, SHIFT(87),
  [159] = {.count = 1, .reusable = true}, SHIFT(89),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(18),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(93),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(94),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(97),
  [194] = {.count = 1, .reusable = true}, SHIFT(98),
  [196] = {.count = 1, .reusable = true}, SHIFT(105),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(38),
  [208] = {.count = 1, .reusable = true}, SHIFT(108),
  [210] = {.count = 1, .reusable = true}, SHIFT(111),
  [212] = {.count = 1, .reusable = true}, SHIFT(112),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_bar, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [220] = {.count = 1, .reusable = true}, SHIFT(114),
  [222] = {.count = 1, .reusable = true}, SHIFT(116),
  [224] = {.count = 1, .reusable = true}, SHIFT(118),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(119),
  [230] = {.count = 1, .reusable = true}, SHIFT(120),
  [232] = {.count = 1, .reusable = true}, SHIFT(121),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [236] = {.count = 1, .reusable = true}, SHIFT(124),
  [238] = {.count = 1, .reusable = true}, SHIFT(113),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [242] = {.count = 1, .reusable = true}, SHIFT(126),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(131),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(134),
  [252] = {.count = 1, .reusable = true}, SHIFT(135),
  [254] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(89),
  [259] = {.count = 1, .reusable = true}, SHIFT(137),
  [261] = {.count = 1, .reusable = true}, SHIFT(138),
  [263] = {.count = 1, .reusable = true}, SHIFT(139),
  [265] = {.count = 1, .reusable = true}, SHIFT(140),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(93),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(17),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(49),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(98),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(57),
  [291] = {.count = 1, .reusable = true}, SHIFT(143),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(30),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(61),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(30),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(67),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [311] = {.count = 1, .reusable = true}, SHIFT(147),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [315] = {.count = 1, .reusable = true}, SHIFT(148),
  [317] = {.count = 1, .reusable = true}, SHIFT(150),
  [319] = {.count = 1, .reusable = true}, SHIFT(152),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(155),
  [331] = {.count = 1, .reusable = true}, SHIFT(156),
  [333] = {.count = 1, .reusable = true}, SHIFT(157),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(159),
  [339] = {.count = 1, .reusable = true}, SHIFT(162),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(75),
  [344] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(79),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(113),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [354] = {.count = 1, .reusable = true}, SHIFT(164),
  [356] = {.count = 1, .reusable = true}, SHIFT(165),
  [358] = {.count = 1, .reusable = true}, SHIFT(166),
  [360] = {.count = 1, .reusable = true}, SHIFT(176),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [364] = {.count = 1, .reusable = true}, SHIFT(180),
  [366] = {.count = 1, .reusable = true}, SHIFT(182),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [370] = {.count = 1, .reusable = true}, SHIFT(184),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [374] = {.count = 1, .reusable = true}, SHIFT(185),
  [376] = {.count = 1, .reusable = true}, SHIFT(186),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [384] = {.count = 1, .reusable = true}, SHIFT(189),
  [386] = {.count = 1, .reusable = true}, SHIFT(190),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(155),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(157),
  [396] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(113),
  [401] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(159),
  [406] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [412] = {.count = 1, .reusable = true}, SHIFT(192),
  [414] = {.count = 1, .reusable = true}, SHIFT(193),
  [416] = {.count = 1, .reusable = true}, SHIFT(195),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [420] = {.count = 1, .reusable = true}, SHIFT(197),
  [422] = {.count = 1, .reusable = true}, SHIFT(199),
  [424] = {.count = 1, .reusable = true}, SHIFT(200),
  [426] = {.count = 1, .reusable = true}, SHIFT(202),
  [428] = {.count = 1, .reusable = true}, SHIFT(205),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [434] = {.count = 1, .reusable = true}, SHIFT(206),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(134),
  [439] = {.count = 1, .reusable = true}, SHIFT(207),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(139),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [450] = {.count = 1, .reusable = true}, SHIFT(209),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [454] = {.count = 1, .reusable = true}, SHIFT(210),
  [456] = {.count = 1, .reusable = true}, SHIFT(212),
  [458] = {.count = 1, .reusable = true}, SHIFT(214),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [462] = {.count = 1, .reusable = true}, SHIFT(215),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [472] = {.count = 1, .reusable = true}, SHIFT(221),
  [474] = {.count = 1, .reusable = true}, SHIFT(224),
  [476] = {.count = 1, .reusable = true}, SHIFT(227),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [482] = {.count = 1, .reusable = true}, SHIFT(230),
  [484] = {.count = 1, .reusable = true}, SHIFT(231),
  [486] = {.count = 1, .reusable = true}, SHIFT(232),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2), SHIFT_REPEAT(197),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(199),
  [506] = {.count = 1, .reusable = true}, SHIFT(234),
  [508] = {.count = 1, .reusable = true}, SHIFT(235),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [512] = {.count = 1, .reusable = true}, SHIFT(238),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [516] = {.count = 1, .reusable = true}, SHIFT(240),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [520] = {.count = 1, .reusable = true}, SHIFT(242),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [524] = {.count = 1, .reusable = true}, SHIFT(243),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [534] = {.count = 1, .reusable = true}, SHIFT(246),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [540] = {.count = 1, .reusable = true}, SHIFT(248),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
};

void *tree_sitter_menhir_external_scanner_create();
void tree_sitter_menhir_external_scanner_destroy(void *);
bool tree_sitter_menhir_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_menhir_external_scanner_serialize(void *, char *);
void tree_sitter_menhir_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_menhir() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_menhir_external_scanner_create,
      tree_sitter_menhir_external_scanner_destroy,
      tree_sitter_menhir_external_scanner_scan,
      tree_sitter_menhir_external_scanner_serialize,
      tree_sitter_menhir_external_scanner_deserialize,
    },
  };
  return &language;
}
