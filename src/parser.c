#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 247
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 5
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
  sym_postlude = 29,
  sym_header = 30,
  sym_ocaml_type = 31,
  sym_action = 32,
  sym_attribute = 33,
  sym_grammar_attribute = 34,
  sym_source_file = 35,
  sym_bar = 36,
  sym_symbol = 37,
  sym_declaration = 38,
  sym_terminal_alias_attrs = 39,
  sym_priority_keyword = 40,
  sym_non_terminal = 41,
  sym_old_rule = 42,
  sym_flags = 43,
  sym_production_group = 44,
  sym_precedence = 45,
  sym_producer = 46,
  sym_strict_actual = 47,
  sym_actual = 48,
  sym_lax_actual = 49,
  sym_modifier = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_source_file_repeat2 = 52,
  aux_sym_declaration_repeat1 = 53,
  aux_sym_declaration_repeat2 = 54,
  aux_sym_declaration_repeat3 = 55,
  aux_sym_declaration_repeat4 = 56,
  aux_sym_declaration_repeat5 = 57,
  aux_sym_old_rule_repeat1 = 58,
  aux_sym_old_rule_repeat2 = 59,
  aux_sym_old_rule_repeat3 = 60,
  aux_sym_production_group_repeat1 = 61,
  aux_sym_production_group_repeat2 = 62,
  aux_sym_strict_actual_repeat1 = 63,
  aux_sym_actual_repeat1 = 64,
  aux_sym_lax_actual_repeat1 = 65,
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
  [sym_postlude] = "postlude",
  [sym_header] = "header",
  [sym_ocaml_type] = "ocaml_type",
  [sym_action] = "action",
  [sym_attribute] = "attribute",
  [sym_grammar_attribute] = "grammar_attribute",
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
  [sym_postlude] = {
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
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == 'Q')
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
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '%')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_uid);
      if (lookahead == 'I')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_uid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 18:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e')
        ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a')
        ADVANCE(34);
      if (lookahead == 'r')
        ADVANCE(35);
      if (lookahead == 'u')
        ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 't')
        ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'y')
        ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_uid);
      if (lookahead == 'D')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'w')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'f')
        ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == '_')
        ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'b')
        ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'g')
        ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'k')
        ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'p')
        ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_qid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == '_')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == 'Q')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == '%')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(18);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == 'p')
        ADVANCE(106);
      if (lookahead == 'r')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(108);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == 'Q')
        ADVANCE(12);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 108:
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == 'p')
        ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == 'p')
        ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(35);
      if (lookahead == 'u')
        ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 's')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'u')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'd')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_postlude);
      END_STATE();
    case 119:
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      END_STATE();
    case 120:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 121:
      if (lookahead == '%')
        ADVANCE(122);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == 'Q')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 122:
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == 'p')
        ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == '%')
        ADVANCE(124);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(125);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == 'Q')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 124:
      if (lookahead == 'p')
        ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == ' ')
        ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 127:
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
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 119, .external_lex_state = 3},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 104, .external_lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 104},
  [14] = {.lex_state = 104},
  [15] = {.lex_state = 104, .external_lex_state = 2},
  [16] = {.lex_state = 104, .external_lex_state = 2},
  [17] = {.lex_state = 120, .external_lex_state = 4},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 121},
  [21] = {.lex_state = 104},
  [22] = {.lex_state = 120, .external_lex_state = 4},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 104, .external_lex_state = 2},
  [25] = {.lex_state = 104, .external_lex_state = 4},
  [26] = {.lex_state = 104, .external_lex_state = 4},
  [27] = {.lex_state = 104, .external_lex_state = 4},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 104, .external_lex_state = 5},
  [30] = {.lex_state = 119, .external_lex_state = 2},
  [31] = {.lex_state = 104, .external_lex_state = 2},
  [32] = {.lex_state = 104, .external_lex_state = 2},
  [33] = {.lex_state = 104, .external_lex_state = 2},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 107},
  [36] = {.lex_state = 104, .external_lex_state = 2},
  [37] = {.lex_state = 104, .external_lex_state = 2},
  [38] = {.lex_state = 104, .external_lex_state = 2},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 104, .external_lex_state = 2},
  [41] = {.lex_state = 104},
  [42] = {.lex_state = 120, .external_lex_state = 4},
  [43] = {.lex_state = 121, .external_lex_state = 6},
  [44] = {.lex_state = 104},
  [45] = {.lex_state = 120, .external_lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 104, .external_lex_state = 4},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 104, .external_lex_state = 4},
  [52] = {.lex_state = 104, .external_lex_state = 5},
  [53] = {.lex_state = 104, .external_lex_state = 4},
  [54] = {.lex_state = 104, .external_lex_state = 4},
  [55] = {.lex_state = 119, .external_lex_state = 2},
  [56] = {.lex_state = 119, .external_lex_state = 5},
  [57] = {.lex_state = 119, .external_lex_state = 5},
  [58] = {.lex_state = 119},
  [59] = {.lex_state = 119, .external_lex_state = 2},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 104, .external_lex_state = 2},
  [62] = {.lex_state = 104},
  [63] = {.lex_state = 104, .external_lex_state = 2},
  [64] = {.lex_state = 104, .external_lex_state = 2},
  [65] = {.lex_state = 104, .external_lex_state = 2},
  [66] = {.lex_state = 104, .external_lex_state = 2},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 104},
  [69] = {.lex_state = 104, .external_lex_state = 2},
  [70] = {.lex_state = 104, .external_lex_state = 2},
  [71] = {.lex_state = 104, .external_lex_state = 2},
  [72] = {.lex_state = 104, .external_lex_state = 2},
  [73] = {.lex_state = 121, .external_lex_state = 6},
  [74] = {.lex_state = 104},
  [75] = {.lex_state = 120, .external_lex_state = 4},
  [76] = {.lex_state = 123, .external_lex_state = 7},
  [77] = {.lex_state = 121, .external_lex_state = 6},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 104},
  [80] = {.lex_state = 123, .external_lex_state = 7},
  [81] = {.lex_state = 123, .external_lex_state = 7},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 107, .external_lex_state = 6},
  [84] = {.lex_state = 121, .external_lex_state = 6},
  [85] = {.lex_state = 107, .external_lex_state = 6},
  [86] = {.lex_state = 123, .external_lex_state = 7},
  [87] = {.lex_state = 121, .external_lex_state = 6},
  [88] = {.lex_state = 123},
  [89] = {.lex_state = 123},
  [90] = {.lex_state = 120, .external_lex_state = 4},
  [91] = {.lex_state = 123},
  [92] = {.lex_state = 123},
  [93] = {.lex_state = 104, .external_lex_state = 4},
  [94] = {.lex_state = 104, .external_lex_state = 5},
  [95] = {.lex_state = 104, .external_lex_state = 5},
  [96] = {.lex_state = 104, .external_lex_state = 4},
  [97] = {.lex_state = 119, .external_lex_state = 2},
  [98] = {.lex_state = 119, .external_lex_state = 5},
  [99] = {.lex_state = 119, .external_lex_state = 5},
  [100] = {.lex_state = 119, .external_lex_state = 2},
  [101] = {.lex_state = 119, .external_lex_state = 2},
  [102] = {.lex_state = 123},
  [103] = {.lex_state = 104, .external_lex_state = 2},
  [104] = {.lex_state = 104, .external_lex_state = 2},
  [105] = {.lex_state = 104, .external_lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 104, .external_lex_state = 2},
  [108] = {.lex_state = 104, .external_lex_state = 2},
  [109] = {.lex_state = 121, .external_lex_state = 6},
  [110] = {.lex_state = 107},
  [111] = {.lex_state = 123},
  [112] = {.lex_state = 121, .external_lex_state = 6},
  [113] = {.lex_state = 104},
  [114] = {.lex_state = 121, .external_lex_state = 6},
  [115] = {.lex_state = 104},
  [116] = {.lex_state = 107},
  [117] = {.lex_state = 107, .external_lex_state = 6},
  [118] = {.lex_state = 107, .external_lex_state = 6},
  [119] = {.lex_state = 104},
  [120] = {.lex_state = 123, .external_lex_state = 7},
  [121] = {.lex_state = 121, .external_lex_state = 6},
  [122] = {.lex_state = 121, .external_lex_state = 7},
  [123] = {.lex_state = 123, .external_lex_state = 7},
  [124] = {.lex_state = 107},
  [125] = {.lex_state = 107},
  [126] = {.lex_state = 121, .external_lex_state = 6},
  [127] = {.lex_state = 107},
  [128] = {.lex_state = 107, .external_lex_state = 6},
  [129] = {.lex_state = 121, .external_lex_state = 6},
  [130] = {.lex_state = 107, .external_lex_state = 6},
  [131] = {.lex_state = 107, .external_lex_state = 6},
  [132] = {.lex_state = 121, .external_lex_state = 6},
  [133] = {.lex_state = 121, .external_lex_state = 6},
  [134] = {.lex_state = 107, .external_lex_state = 6},
  [135] = {.lex_state = 104},
  [136] = {.lex_state = 120},
  [137] = {.lex_state = 123},
  [138] = {.lex_state = 104},
  [139] = {.lex_state = 123},
  [140] = {.lex_state = 104},
  [141] = {.lex_state = 104, .external_lex_state = 4},
  [142] = {.lex_state = 123},
  [143] = {.lex_state = 123},
  [144] = {.lex_state = 104, .external_lex_state = 2},
  [145] = {.lex_state = 123},
  [146] = {.lex_state = 107},
  [147] = {.lex_state = 107},
  [148] = {.lex_state = 107},
  [149] = {.lex_state = 120},
  [150] = {.lex_state = 123},
  [151] = {.lex_state = 121, .external_lex_state = 6},
  [152] = {.lex_state = 123},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 107},
  [155] = {.lex_state = 123, .external_lex_state = 7},
  [156] = {.lex_state = 121, .external_lex_state = 6},
  [157] = {.lex_state = 121, .external_lex_state = 6},
  [158] = {.lex_state = 121, .external_lex_state = 7},
  [159] = {.lex_state = 107},
  [160] = {.lex_state = 107},
  [161] = {.lex_state = 107},
  [162] = {.lex_state = 107},
  [163] = {.lex_state = 107},
  [164] = {.lex_state = 107, .external_lex_state = 6},
  [165] = {.lex_state = 123},
  [166] = {.lex_state = 123, .external_lex_state = 7},
  [167] = {.lex_state = 123},
  [168] = {.lex_state = 123},
  [169] = {.lex_state = 107, .external_lex_state = 6},
  [170] = {.lex_state = 121, .external_lex_state = 6},
  [171] = {.lex_state = 107, .external_lex_state = 6},
  [172] = {.lex_state = 123, .external_lex_state = 7},
  [173] = {.lex_state = 107, .external_lex_state = 6},
  [174] = {.lex_state = 123},
  [175] = {.lex_state = 121, .external_lex_state = 6},
  [176] = {.lex_state = 123},
  [177] = {.lex_state = 123},
  [178] = {.lex_state = 123},
  [179] = {.lex_state = 104, .external_lex_state = 4},
  [180] = {.lex_state = 123},
  [181] = {.lex_state = 104, .external_lex_state = 2},
  [182] = {.lex_state = 107},
  [183] = {.lex_state = 107},
  [184] = {.lex_state = 121, .external_lex_state = 6},
  [185] = {.lex_state = 120},
  [186] = {.lex_state = 107},
  [187] = {.lex_state = 123},
  [188] = {.lex_state = 121, .external_lex_state = 6},
  [189] = {.lex_state = 121, .external_lex_state = 7},
  [190] = {.lex_state = 107},
  [191] = {.lex_state = 107},
  [192] = {.lex_state = 104},
  [193] = {.lex_state = 123},
  [194] = {.lex_state = 123, .external_lex_state = 7},
  [195] = {.lex_state = 121, .external_lex_state = 6},
  [196] = {.lex_state = 123},
  [197] = {.lex_state = 121, .external_lex_state = 6},
  [198] = {.lex_state = 123, .external_lex_state = 7},
  [199] = {.lex_state = 123},
  [200] = {.lex_state = 123},
  [201] = {.lex_state = 107, .external_lex_state = 6},
  [202] = {.lex_state = 107, .external_lex_state = 6},
  [203] = {.lex_state = 121, .external_lex_state = 6},
  [204] = {.lex_state = 121, .external_lex_state = 6},
  [205] = {.lex_state = 123},
  [206] = {.lex_state = 123},
  [207] = {.lex_state = 107},
  [208] = {.lex_state = 121, .external_lex_state = 6},
  [209] = {.lex_state = 107},
  [210] = {.lex_state = 121, .external_lex_state = 6},
  [211] = {.lex_state = 107},
  [212] = {.lex_state = 120},
  [213] = {.lex_state = 121, .external_lex_state = 6},
  [214] = {.lex_state = 107},
  [215] = {.lex_state = 123},
  [216] = {.lex_state = 123},
  [217] = {.lex_state = 123},
  [218] = {.lex_state = 123},
  [219] = {.lex_state = 123, .external_lex_state = 7},
  [220] = {.lex_state = 123},
  [221] = {.lex_state = 123},
  [222] = {.lex_state = 123},
  [223] = {.lex_state = 107, .external_lex_state = 6},
  [224] = {.lex_state = 123},
  [225] = {.lex_state = 123},
  [226] = {.lex_state = 107},
  [227] = {.lex_state = 107},
  [228] = {.lex_state = 107},
  [229] = {.lex_state = 121, .external_lex_state = 6},
  [230] = {.lex_state = 121, .external_lex_state = 6},
  [231] = {.lex_state = 123},
  [232] = {.lex_state = 123},
  [233] = {.lex_state = 123, .external_lex_state = 7},
  [234] = {.lex_state = 123},
  [235] = {.lex_state = 107},
  [236] = {.lex_state = 107},
  [237] = {.lex_state = 107},
  [238] = {.lex_state = 121, .external_lex_state = 6},
  [239] = {.lex_state = 123},
  [240] = {.lex_state = 123, .external_lex_state = 7},
  [241] = {.lex_state = 107},
  [242] = {.lex_state = 107},
  [243] = {.lex_state = 107},
  [244] = {.lex_state = 107},
  [245] = {.lex_state = 107},
  [246] = {.lex_state = 107},
};

enum {
  ts_external_token_header = 0,
  ts_external_token_ocaml_type = 1,
  ts_external_token_action = 2,
  ts_external_token_attribute = 3,
  ts_external_token_grammar_attribute = 4,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_header] = sym_header,
  [ts_external_token_ocaml_type] = sym_ocaml_type,
  [ts_external_token_action] = sym_action,
  [ts_external_token_attribute] = sym_attribute,
  [ts_external_token_grammar_attribute] = sym_grammar_attribute,
};

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_header] = true,
    [ts_external_token_action] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_attribute] = true,
  },
  [2] = {
    [ts_external_token_header] = true,
    [ts_external_token_grammar_attribute] = true,
  },
  [3] = {
    [ts_external_token_ocaml_type] = true,
  },
  [4] = {
    [ts_external_token_attribute] = true,
  },
  [5] = {
    [ts_external_token_header] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_attribute] = true,
  },
  [6] = {
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_action] = true,
  },
  [7] = {
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_action] = true,
    [ts_external_token_attribute] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PERCENTpublic] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(1),
    [anon_sym_PERCENTtype] = ACTIONS(1),
    [anon_sym_PERCENTleft] = ACTIONS(1),
    [sym_lid] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_qid] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(1),
    [sym_ocaml_type] = ACTIONS(1),
    [sym_grammar_attribute] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(1),
    [anon_sym_PERCENTright] = ACTIONS(1),
    [sym_uid] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_declaration] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_source_file] = STATE(12),
    [sym_priority_keyword] = STATE(13),
    [sym_header] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [sym_grammar_attribute] = ACTIONS(3),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_PERCENTtoken] = ACTIONS(15),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENTleft] = ACTIONS(7),
  },
  [2] = {
    [sym_header] = ACTIONS(21),
    [anon_sym_PERCENTstart] = ACTIONS(21),
    [anon_sym_PERCENTright] = ACTIONS(21),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [anon_sym_PERCENTparameter] = ACTIONS(21),
    [anon_sym_PERCENTattribute] = ACTIONS(21),
    [anon_sym_PERCENTnonassoc] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_grammar_attribute] = ACTIONS(21),
    [anon_sym_PERCENTtoken] = ACTIONS(21),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(21),
    [anon_sym_PERCENTtype] = ACTIONS(21),
    [anon_sym_PERCENTleft] = ACTIONS(21),
  },
  [3] = {
    [sym_non_terminal] = STATE(16),
    [sym_ocaml_type] = ACTIONS(23),
    [sym_lid] = ACTIONS(25),
  },
  [4] = {
    [sym_qid] = ACTIONS(27),
    [sym_lid] = ACTIONS(29),
    [sym_uid] = ACTIONS(27),
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
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_postlude] = ACTIONS(39),
    [sym_new_rule] = ACTIONS(41),
    [sym_lid] = ACTIONS(31),
  },
  [6] = {
    [sym_ocaml_type] = ACTIONS(43),
  },
  [7] = {
    [sym_symbol] = STATE(26),
    [sym_strict_actual] = STATE(27),
    [sym_qid] = ACTIONS(45),
    [sym_lid] = ACTIONS(47),
    [sym_uid] = ACTIONS(45),
  },
  [8] = {
    [sym_terminal_alias_attrs] = STATE(30),
    [sym_ocaml_type] = ACTIONS(49),
    [sym_uid] = ACTIONS(51),
  },
  [9] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(33),
    [sym_qid] = ACTIONS(53),
    [sym_lid] = ACTIONS(55),
    [sym_uid] = ACTIONS(53),
  },
  [10] = {
    [sym_ocaml_type] = ACTIONS(57),
  },
  [11] = {
    [sym_priority_keyword] = STATE(13),
    [sym_declaration] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_header] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [sym_grammar_attribute] = ACTIONS(3),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(15),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENTleft] = ACTIONS(7),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [13] = {
    [sym_symbol] = STATE(37),
    [sym_qid] = ACTIONS(53),
    [sym_lid] = ACTIONS(55),
    [sym_uid] = ACTIONS(53),
  },
  [14] = {
    [sym_non_terminal] = STATE(38),
    [sym_lid] = ACTIONS(25),
  },
  [15] = {
    [sym_header] = ACTIONS(63),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
    [sym_lid] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
  },
  [16] = {
    [sym_non_terminal] = STATE(40),
    [aux_sym_declaration_repeat4] = STATE(40),
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
  },
  [17] = {
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_attribute] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
  },
  [18] = {
    [sym_qid] = ACTIONS(71),
    [sym_uid] = ACTIONS(71),
    [anon_sym_PERCENTinline] = ACTIONS(73),
    [sym_lid] = ACTIONS(75),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(77),
  },
  [20] = {
    [sym_qid] = ACTIONS(71),
    [anon_sym_PERCENTpublic] = ACTIONS(73),
    [sym_uid] = ACTIONS(71),
    [sym_lid] = ACTIONS(75),
  },
  [21] = {
    [sym_symbol] = STATE(42),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(79),
    [sym_uid] = ACTIONS(31),
  },
  [22] = {
    [aux_sym_declaration_repeat5] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_attribute] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
  },
  [23] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(47),
    [sym_old_rule] = STATE(47),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_uid] = ACTIONS(31),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_postlude] = ACTIONS(87),
    [sym_new_rule] = ACTIONS(89),
    [sym_lid] = ACTIONS(31),
  },
  [24] = {
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
  },
  [25] = {
    [sym_qid] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(69),
    [sym_attribute] = ACTIONS(69),
    [sym_uid] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [sym_lid] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
  },
  [26] = {
    [sym_qid] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(95),
    [sym_attribute] = ACTIONS(95),
    [sym_uid] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(95),
    [sym_lid] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
  },
  [27] = {
    [aux_sym_declaration_repeat3] = STATE(54),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat5] = STATE(52),
    [sym_modifier] = STATE(53),
    [sym_strict_actual] = STATE(51),
    [sym_qid] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym_uid] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [sym_lid] = ACTIONS(47),
    [sym_attribute] = ACTIONS(103),
  },
  [28] = {
    [sym_terminal_alias_attrs] = STATE(55),
    [sym_uid] = ACTIONS(51),
  },
  [29] = {
    [aux_sym_declaration_repeat5] = STATE(57),
    [sym_header] = ACTIONS(105),
    [anon_sym_PERCENTstart] = ACTIONS(105),
    [anon_sym_PERCENTright] = ACTIONS(105),
    [sym_uid] = ACTIONS(107),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(105),
    [anon_sym_PERCENTparameter] = ACTIONS(105),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(105),
    [anon_sym_PERCENTtype] = ACTIONS(105),
    [anon_sym_PERCENTleft] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_qid] = ACTIONS(109),
    [sym_grammar_attribute] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(105),
    [anon_sym_PERCENTnonassoc] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_PERCENTtoken] = ACTIONS(105),
    [sym_attribute] = ACTIONS(111),
  },
  [30] = {
    [aux_sym_declaration_repeat1] = STATE(59),
    [sym_terminal_alias_attrs] = STATE(59),
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
  },
  [31] = {
    [sym_header] = ACTIONS(69),
    [anon_sym_PERCENTstart] = ACTIONS(69),
    [anon_sym_PERCENTright] = ACTIONS(69),
    [sym_uid] = ACTIONS(91),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(69),
    [anon_sym_PERCENTparameter] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(69),
    [anon_sym_PERCENTtype] = ACTIONS(69),
    [anon_sym_PERCENTleft] = ACTIONS(69),
    [sym_lid] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_qid] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_grammar_attribute] = ACTIONS(69),
    [anon_sym_PERCENTattribute] = ACTIONS(69),
    [anon_sym_PERCENTnonassoc] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_PERCENTtoken] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
  },
  [32] = {
    [sym_header] = ACTIONS(95),
    [anon_sym_PERCENTstart] = ACTIONS(95),
    [anon_sym_PERCENTright] = ACTIONS(95),
    [sym_uid] = ACTIONS(93),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(95),
    [anon_sym_PERCENTparameter] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(95),
    [anon_sym_PERCENTtype] = ACTIONS(95),
    [anon_sym_PERCENTleft] = ACTIONS(95),
    [sym_lid] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [sym_qid] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(95),
    [sym_grammar_attribute] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_PERCENTattribute] = ACTIONS(95),
    [anon_sym_PERCENTnonassoc] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_PERCENTtoken] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(95),
  },
  [33] = {
    [aux_sym_declaration_repeat3] = STATE(65),
    [sym_symbol] = STATE(32),
    [sym_modifier] = STATE(64),
    [sym_strict_actual] = STATE(63),
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_qid] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [34] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(66),
    [sym_qid] = ACTIONS(53),
    [sym_lid] = ACTIONS(55),
    [sym_uid] = ACTIONS(53),
  },
  [35] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(67),
    [sym_old_rule] = STATE(67),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_uid] = ACTIONS(31),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_postlude] = ACTIONS(87),
    [sym_new_rule] = ACTIONS(121),
    [sym_lid] = ACTIONS(31),
  },
  [36] = {
    [sym_priority_keyword] = STATE(13),
    [sym_declaration] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_header] = ACTIONS(123),
    [anon_sym_PERCENTstart] = ACTIONS(126),
    [anon_sym_PERCENTright] = ACTIONS(129),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(132),
    [anon_sym_PERCENTparameter] = ACTIONS(134),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(123),
    [sym_grammar_attribute] = ACTIONS(123),
    [anon_sym_PERCENTtoken] = ACTIONS(140),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(143),
    [anon_sym_PERCENTtype] = ACTIONS(146),
    [anon_sym_PERCENTleft] = ACTIONS(129),
  },
  [37] = {
    [sym_symbol] = STATE(69),
    [aux_sym_declaration_repeat2] = STATE(69),
    [sym_header] = ACTIONS(65),
    [anon_sym_PERCENTstart] = ACTIONS(65),
    [anon_sym_PERCENTright] = ACTIONS(65),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(65),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(65),
    [anon_sym_PERCENTtype] = ACTIONS(65),
    [anon_sym_PERCENTleft] = ACTIONS(65),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(149),
    [sym_qid] = ACTIONS(53),
    [sym_grammar_attribute] = ACTIONS(65),
    [anon_sym_PERCENTattribute] = ACTIONS(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PERCENTtoken] = ACTIONS(65),
  },
  [38] = {
    [sym_non_terminal] = STATE(70),
    [aux_sym_declaration_repeat4] = STATE(70),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [39] = {
    [sym_non_terminal] = STATE(71),
    [sym_lid] = ACTIONS(25),
  },
  [40] = {
    [sym_non_terminal] = STATE(72),
    [aux_sym_declaration_repeat4] = STATE(72),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [41] = {
    [sym_qid] = ACTIONS(153),
    [sym_lid] = ACTIONS(155),
    [sym_uid] = ACTIONS(153),
  },
  [42] = {
    [aux_sym_declaration_repeat5] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym_attribute] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(161),
  },
  [43] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(82),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [44] = {
    [sym_symbol] = STATE(89),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [45] = {
    [aux_sym_declaration_repeat5] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(157),
    [sym_attribute] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(161),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(179),
  },
  [47] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(47),
    [sym_old_rule] = STATE(47),
    [sym_qid] = ACTIONS(181),
    [anon_sym_PERCENTpublic] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_uid] = ACTIONS(181),
    [anon_sym_PERCENTinline] = ACTIONS(189),
    [sym_postlude] = ACTIONS(187),
    [sym_new_rule] = ACTIONS(192),
    [sym_lid] = ACTIONS(181),
  },
  [48] = {
    [sym_symbol] = STATE(91),
    [sym_strict_actual] = STATE(92),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [49] = {
    [sym_qid] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(197),
    [sym_attribute] = ACTIONS(197),
    [sym_uid] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [sym_lid] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
  },
  [50] = {
    [sym_symbol] = STATE(26),
    [sym_strict_actual] = STATE(93),
    [sym_qid] = ACTIONS(45),
    [sym_lid] = ACTIONS(47),
    [sym_uid] = ACTIONS(45),
  },
  [51] = {
    [sym_modifier] = STATE(53),
    [sym_qid] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(201),
    [sym_uid] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [sym_lid] = ACTIONS(201),
    [sym_attribute] = ACTIONS(201),
  },
  [52] = {
    [aux_sym_declaration_repeat5] = STATE(94),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_attribute] = ACTIONS(203),
  },
  [53] = {
    [sym_qid] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [sym_attribute] = ACTIONS(207),
    [sym_uid] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [sym_lid] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
  },
  [54] = {
    [aux_sym_declaration_repeat3] = STATE(96),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat5] = STATE(95),
    [sym_strict_actual] = STATE(51),
    [sym_qid] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym_uid] = ACTIONS(45),
    [sym_lid] = ACTIONS(47),
    [sym_attribute] = ACTIONS(209),
  },
  [55] = {
    [aux_sym_declaration_repeat1] = STATE(97),
    [sym_terminal_alias_attrs] = STATE(97),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [56] = {
    [aux_sym_declaration_repeat5] = STATE(98),
    [sym_header] = ACTIONS(211),
    [anon_sym_PERCENTstart] = ACTIONS(211),
    [anon_sym_PERCENTright] = ACTIONS(211),
    [sym_uid] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(211),
    [anon_sym_PERCENTparameter] = ACTIONS(211),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(211),
    [anon_sym_PERCENTtype] = ACTIONS(211),
    [anon_sym_PERCENTleft] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_grammar_attribute] = ACTIONS(211),
    [anon_sym_PERCENTattribute] = ACTIONS(211),
    [anon_sym_PERCENTnonassoc] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_PERCENTtoken] = ACTIONS(211),
    [sym_attribute] = ACTIONS(213),
  },
  [57] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(211),
    [anon_sym_PERCENTstart] = ACTIONS(211),
    [anon_sym_PERCENTright] = ACTIONS(211),
    [sym_uid] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(211),
    [anon_sym_PERCENTparameter] = ACTIONS(211),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(211),
    [anon_sym_PERCENTtype] = ACTIONS(211),
    [anon_sym_PERCENTleft] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_grammar_attribute] = ACTIONS(211),
    [anon_sym_PERCENTattribute] = ACTIONS(211),
    [anon_sym_PERCENTnonassoc] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_PERCENTtoken] = ACTIONS(211),
    [sym_attribute] = ACTIONS(215),
  },
  [58] = {
    [sym_terminal_alias_attrs] = STATE(100),
    [sym_uid] = ACTIONS(51),
  },
  [59] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [60] = {
    [sym_symbol] = STATE(91),
    [sym_strict_actual] = STATE(102),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [61] = {
    [sym_header] = ACTIONS(197),
    [anon_sym_PERCENTstart] = ACTIONS(197),
    [anon_sym_PERCENTright] = ACTIONS(197),
    [sym_uid] = ACTIONS(195),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(197),
    [anon_sym_PERCENTparameter] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(197),
    [anon_sym_PERCENTtype] = ACTIONS(197),
    [anon_sym_PERCENTleft] = ACTIONS(197),
    [sym_lid] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [sym_qid] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(197),
    [sym_grammar_attribute] = ACTIONS(197),
    [anon_sym_PERCENTattribute] = ACTIONS(197),
    [anon_sym_PERCENTnonassoc] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_PERCENTtoken] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
  },
  [62] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(103),
    [sym_qid] = ACTIONS(53),
    [sym_lid] = ACTIONS(55),
    [sym_uid] = ACTIONS(53),
  },
  [63] = {
    [sym_modifier] = STATE(64),
    [sym_header] = ACTIONS(201),
    [anon_sym_PERCENTstart] = ACTIONS(201),
    [anon_sym_PERCENTright] = ACTIONS(201),
    [sym_uid] = ACTIONS(199),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(201),
    [anon_sym_PERCENTparameter] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(201),
    [anon_sym_PERCENTtype] = ACTIONS(201),
    [anon_sym_PERCENTleft] = ACTIONS(201),
    [sym_lid] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [sym_qid] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_grammar_attribute] = ACTIONS(201),
    [anon_sym_PERCENTattribute] = ACTIONS(201),
    [anon_sym_PERCENTnonassoc] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_PERCENTtoken] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [64] = {
    [sym_header] = ACTIONS(207),
    [anon_sym_PERCENTstart] = ACTIONS(207),
    [anon_sym_PERCENTright] = ACTIONS(207),
    [sym_uid] = ACTIONS(205),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(207),
    [anon_sym_PERCENTparameter] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(207),
    [anon_sym_PERCENTtype] = ACTIONS(207),
    [anon_sym_PERCENTleft] = ACTIONS(207),
    [sym_lid] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_qid] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [sym_grammar_attribute] = ACTIONS(207),
    [anon_sym_PERCENTattribute] = ACTIONS(207),
    [anon_sym_PERCENTnonassoc] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_PERCENTtoken] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
  },
  [65] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(63),
    [aux_sym_declaration_repeat3] = STATE(104),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_qid] = ACTIONS(53),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [66] = {
    [aux_sym_declaration_repeat3] = STATE(105),
    [sym_symbol] = STATE(32),
    [sym_modifier] = STATE(64),
    [sym_strict_actual] = STATE(63),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_qid] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [67] = {
    [sym_flags] = STATE(21),
    [sym_symbol] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(47),
    [sym_old_rule] = STATE(47),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_uid] = ACTIONS(31),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_postlude] = ACTIONS(217),
    [sym_new_rule] = ACTIONS(89),
    [sym_lid] = ACTIONS(31),
  },
  [68] = {
    [sym_symbol] = STATE(107),
    [sym_qid] = ACTIONS(53),
    [sym_lid] = ACTIONS(55),
    [sym_uid] = ACTIONS(53),
  },
  [69] = {
    [sym_symbol] = STATE(108),
    [aux_sym_declaration_repeat2] = STATE(108),
    [sym_header] = ACTIONS(151),
    [anon_sym_PERCENTstart] = ACTIONS(151),
    [anon_sym_PERCENTright] = ACTIONS(151),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(151),
    [anon_sym_PERCENTparameter] = ACTIONS(151),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(151),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(151),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(149),
    [sym_qid] = ACTIONS(53),
    [sym_grammar_attribute] = ACTIONS(151),
    [anon_sym_PERCENTattribute] = ACTIONS(151),
    [anon_sym_PERCENTnonassoc] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_PERCENTtoken] = ACTIONS(151),
  },
  [70] = {
    [sym_non_terminal] = STATE(72),
    [aux_sym_declaration_repeat4] = STATE(72),
    [sym_header] = ACTIONS(219),
    [anon_sym_PERCENTstart] = ACTIONS(219),
    [anon_sym_PERCENTright] = ACTIONS(219),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(219),
    [anon_sym_PERCENTparameter] = ACTIONS(219),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(219),
    [anon_sym_PERCENTtype] = ACTIONS(219),
    [anon_sym_PERCENTleft] = ACTIONS(219),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_grammar_attribute] = ACTIONS(219),
    [anon_sym_PERCENTattribute] = ACTIONS(219),
    [anon_sym_PERCENTnonassoc] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PERCENTtoken] = ACTIONS(219),
  },
  [71] = {
    [sym_header] = ACTIONS(221),
    [anon_sym_PERCENTstart] = ACTIONS(221),
    [anon_sym_PERCENTright] = ACTIONS(221),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(221),
    [anon_sym_PERCENTparameter] = ACTIONS(221),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(221),
    [anon_sym_PERCENTtype] = ACTIONS(221),
    [anon_sym_PERCENTleft] = ACTIONS(221),
    [sym_lid] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_grammar_attribute] = ACTIONS(221),
    [anon_sym_PERCENTattribute] = ACTIONS(221),
    [anon_sym_PERCENTnonassoc] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_PERCENTtoken] = ACTIONS(221),
  },
  [72] = {
    [sym_non_terminal] = STATE(72),
    [aux_sym_declaration_repeat4] = STATE(72),
    [sym_header] = ACTIONS(221),
    [anon_sym_PERCENTstart] = ACTIONS(221),
    [anon_sym_PERCENTright] = ACTIONS(221),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(221),
    [anon_sym_PERCENTparameter] = ACTIONS(221),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(221),
    [anon_sym_PERCENTtype] = ACTIONS(221),
    [anon_sym_PERCENTleft] = ACTIONS(221),
    [sym_lid] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(226),
    [sym_grammar_attribute] = ACTIONS(221),
    [anon_sym_PERCENTattribute] = ACTIONS(221),
    [anon_sym_PERCENTnonassoc] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_PERCENTtoken] = ACTIONS(221),
  },
  [73] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(110),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(229),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [74] = {
    [sym_symbol] = STATE(111),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [75] = {
    [aux_sym_declaration_repeat5] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym_attribute] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(233),
  },
  [76] = {
    [sym_uid] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_COMMA2] = ACTIONS(69),
    [anon_sym_PERCENTprec] = ACTIONS(69),
    [sym_action] = ACTIONS(69),
    [sym_lid] = ACTIONS(69),
    [sym_qid] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_ocaml_type] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_attribute] = ACTIONS(69),
  },
  [77] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(110),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [78] = {
    [sym_precedence] = STATE(116),
    [sym_qid] = ACTIONS(239),
    [anon_sym_PERCENTpublic] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_uid] = ACTIONS(239),
    [anon_sym_PERCENTinline] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [sym_postlude] = ACTIONS(241),
    [sym_new_rule] = ACTIONS(239),
    [anon_sym_PERCENTprec] = ACTIONS(243),
    [sym_lid] = ACTIONS(239),
  },
  [79] = {
    [sym_symbol] = STATE(118),
    [sym_qid] = ACTIONS(245),
    [sym_lid] = ACTIONS(247),
    [sym_uid] = ACTIONS(245),
  },
  [80] = {
    [sym_attribute] = ACTIONS(69),
    [sym_uid] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_COMMA2] = ACTIONS(69),
    [anon_sym_PERCENTprec] = ACTIONS(69),
    [sym_action] = ACTIONS(69),
    [sym_lid] = ACTIONS(69),
    [sym_qid] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_ocaml_type] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(249),
  },
  [81] = {
    [aux_sym_old_rule_repeat3] = STATE(121),
    [aux_sym_declaration_repeat5] = STATE(122),
    [sym_modifier] = STATE(123),
    [sym_qid] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(253),
    [sym_uid] = ACTIONS(251),
    [sym_ocaml_type] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PERCENTprec] = ACTIONS(255),
    [sym_action] = ACTIONS(255),
    [anon_sym_QMARK] = ACTIONS(253),
    [sym_lid] = ACTIONS(255),
    [sym_attribute] = ACTIONS(259),
  },
  [82] = {
    [aux_sym_old_rule_repeat3] = STATE(125),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(124),
    [sym_qid] = ACTIONS(261),
    [anon_sym_PERCENTpublic] = ACTIONS(263),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_uid] = ACTIONS(261),
    [anon_sym_PERCENTinline] = ACTIONS(263),
    [sym_postlude] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(261),
    [sym_lid] = ACTIONS(261),
  },
  [83] = {
    [aux_sym_production_group_repeat2] = STATE(128),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(269),
    [sym_action] = ACTIONS(269),
  },
  [84] = {
    [sym_actual] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(129),
    [sym_producer] = STATE(129),
    [sym_bar] = STATE(87),
    [sym_symbol] = STATE(86),
    [aux_sym_production_group_repeat2] = STATE(128),
    [sym_precedence] = STATE(130),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_uid] = ACTIONS(163),
    [sym_action] = ACTIONS(269),
    [sym_ocaml_type] = ACTIONS(269),
    [sym_lid] = ACTIONS(171),
  },
  [85] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(269),
    [sym_action] = ACTIONS(269),
  },
  [86] = {
    [sym_qid] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [sym_uid] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(275),
    [sym_ocaml_type] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PERCENTprec] = ACTIONS(273),
    [sym_action] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [sym_lid] = ACTIONS(273),
    [sym_attribute] = ACTIONS(273),
  },
  [87] = {
    [sym_actual] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(133),
    [sym_producer] = STATE(133),
    [sym_precedence] = STATE(134),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(277),
    [sym_action] = ACTIONS(277),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_uid] = ACTIONS(163),
    [sym_ocaml_type] = ACTIONS(277),
    [sym_lid] = ACTIONS(171),
  },
  [88] = {
    [anon_sym_COMMA2] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [89] = {
    [aux_sym_old_rule_repeat1] = STATE(137),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [90] = {
    [aux_sym_declaration_repeat5] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(283),
    [sym_attribute] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(283),
  },
  [91] = {
    [anon_sym_COMMA2] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(95),
  },
  [92] = {
    [sym_modifier] = STATE(142),
    [aux_sym_strict_actual_repeat1] = STATE(143),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(294),
  },
  [93] = {
    [sym_modifier] = STATE(53),
    [sym_qid] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_uid] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [sym_lid] = ACTIONS(298),
    [sym_attribute] = ACTIONS(298),
  },
  [94] = {
    [aux_sym_declaration_repeat5] = STATE(94),
    [sym_header] = ACTIONS(283),
    [anon_sym_PERCENTstart] = ACTIONS(283),
    [anon_sym_PERCENTright] = ACTIONS(283),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(283),
    [anon_sym_PERCENTparameter] = ACTIONS(283),
    [anon_sym_PERCENTattribute] = ACTIONS(283),
    [anon_sym_PERCENTnonassoc] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [sym_grammar_attribute] = ACTIONS(283),
    [anon_sym_PERCENTtoken] = ACTIONS(283),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(283),
    [anon_sym_PERCENTtype] = ACTIONS(283),
    [anon_sym_PERCENTleft] = ACTIONS(283),
    [sym_attribute] = ACTIONS(300),
  },
  [95] = {
    [aux_sym_declaration_repeat5] = STATE(94),
    [sym_header] = ACTIONS(219),
    [anon_sym_PERCENTstart] = ACTIONS(219),
    [anon_sym_PERCENTright] = ACTIONS(219),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(219),
    [anon_sym_PERCENTparameter] = ACTIONS(219),
    [anon_sym_PERCENTattribute] = ACTIONS(219),
    [anon_sym_PERCENTnonassoc] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [sym_grammar_attribute] = ACTIONS(219),
    [anon_sym_PERCENTtoken] = ACTIONS(219),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(219),
    [anon_sym_PERCENTtype] = ACTIONS(219),
    [anon_sym_PERCENTleft] = ACTIONS(219),
    [sym_attribute] = ACTIONS(203),
  },
  [96] = {
    [sym_symbol] = STATE(26),
    [sym_strict_actual] = STATE(51),
    [aux_sym_declaration_repeat3] = STATE(96),
    [sym_qid] = ACTIONS(303),
    [sym_attribute] = ACTIONS(298),
    [sym_uid] = ACTIONS(303),
    [sym_lid] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [97] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
    [sym_header] = ACTIONS(219),
    [anon_sym_PERCENTstart] = ACTIONS(219),
    [anon_sym_PERCENTright] = ACTIONS(219),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(219),
    [anon_sym_PERCENTparameter] = ACTIONS(219),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(219),
    [anon_sym_PERCENTtype] = ACTIONS(219),
    [anon_sym_PERCENTleft] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_grammar_attribute] = ACTIONS(219),
    [anon_sym_PERCENTattribute] = ACTIONS(219),
    [anon_sym_PERCENTnonassoc] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PERCENTtoken] = ACTIONS(219),
  },
  [98] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(312),
    [anon_sym_PERCENTstart] = ACTIONS(312),
    [anon_sym_PERCENTright] = ACTIONS(312),
    [sym_uid] = ACTIONS(312),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(312),
    [anon_sym_PERCENTparameter] = ACTIONS(312),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(312),
    [anon_sym_PERCENTtype] = ACTIONS(312),
    [anon_sym_PERCENTleft] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_grammar_attribute] = ACTIONS(312),
    [anon_sym_PERCENTattribute] = ACTIONS(312),
    [anon_sym_PERCENTnonassoc] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_PERCENTtoken] = ACTIONS(312),
    [sym_attribute] = ACTIONS(215),
  },
  [99] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(283),
    [anon_sym_PERCENTstart] = ACTIONS(283),
    [anon_sym_PERCENTright] = ACTIONS(283),
    [sym_uid] = ACTIONS(283),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(283),
    [anon_sym_PERCENTparameter] = ACTIONS(283),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(283),
    [anon_sym_PERCENTtype] = ACTIONS(283),
    [anon_sym_PERCENTleft] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [sym_grammar_attribute] = ACTIONS(283),
    [anon_sym_PERCENTattribute] = ACTIONS(283),
    [anon_sym_PERCENTnonassoc] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_PERCENTtoken] = ACTIONS(283),
    [sym_attribute] = ACTIONS(314),
  },
  [100] = {
    [sym_header] = ACTIONS(317),
    [anon_sym_PERCENTstart] = ACTIONS(317),
    [anon_sym_PERCENTright] = ACTIONS(317),
    [sym_uid] = ACTIONS(317),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(317),
    [anon_sym_PERCENTparameter] = ACTIONS(317),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(317),
    [anon_sym_PERCENTtype] = ACTIONS(317),
    [anon_sym_PERCENTleft] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [sym_grammar_attribute] = ACTIONS(317),
    [anon_sym_PERCENTattribute] = ACTIONS(317),
    [anon_sym_PERCENTnonassoc] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_PERCENTtoken] = ACTIONS(317),
  },
  [101] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
    [sym_header] = ACTIONS(317),
    [anon_sym_PERCENTstart] = ACTIONS(317),
    [anon_sym_PERCENTright] = ACTIONS(317),
    [sym_uid] = ACTIONS(319),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(317),
    [anon_sym_PERCENTparameter] = ACTIONS(317),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(317),
    [anon_sym_PERCENTtype] = ACTIONS(317),
    [anon_sym_PERCENTleft] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(322),
    [sym_grammar_attribute] = ACTIONS(317),
    [anon_sym_PERCENTattribute] = ACTIONS(317),
    [anon_sym_PERCENTnonassoc] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_PERCENTtoken] = ACTIONS(317),
  },
  [102] = {
    [sym_modifier] = STATE(142),
    [aux_sym_strict_actual_repeat1] = STATE(145),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [103] = {
    [sym_modifier] = STATE(64),
    [sym_header] = ACTIONS(298),
    [anon_sym_PERCENTstart] = ACTIONS(298),
    [anon_sym_PERCENTright] = ACTIONS(298),
    [sym_uid] = ACTIONS(296),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(298),
    [anon_sym_PERCENTparameter] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(298),
    [anon_sym_PERCENTtype] = ACTIONS(298),
    [anon_sym_PERCENTleft] = ACTIONS(298),
    [sym_lid] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_qid] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(117),
    [sym_grammar_attribute] = ACTIONS(298),
    [anon_sym_PERCENTattribute] = ACTIONS(298),
    [anon_sym_PERCENTnonassoc] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_PERCENTtoken] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [104] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(63),
    [aux_sym_declaration_repeat3] = STATE(104),
    [sym_header] = ACTIONS(298),
    [anon_sym_PERCENTstart] = ACTIONS(298),
    [anon_sym_PERCENTright] = ACTIONS(298),
    [sym_uid] = ACTIONS(327),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(298),
    [anon_sym_PERCENTparameter] = ACTIONS(298),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(298),
    [anon_sym_PERCENTtype] = ACTIONS(298),
    [anon_sym_PERCENTleft] = ACTIONS(298),
    [sym_lid] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_qid] = ACTIONS(327),
    [sym_grammar_attribute] = ACTIONS(298),
    [anon_sym_PERCENTattribute] = ACTIONS(298),
    [anon_sym_PERCENTnonassoc] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_PERCENTtoken] = ACTIONS(298),
  },
  [105] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(63),
    [aux_sym_declaration_repeat3] = STATE(104),
    [sym_header] = ACTIONS(219),
    [anon_sym_PERCENTstart] = ACTIONS(219),
    [anon_sym_PERCENTright] = ACTIONS(219),
    [sym_uid] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(219),
    [anon_sym_PERCENTparameter] = ACTIONS(219),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(219),
    [anon_sym_PERCENTtype] = ACTIONS(219),
    [anon_sym_PERCENTleft] = ACTIONS(219),
    [sym_lid] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(119),
    [sym_qid] = ACTIONS(53),
    [sym_grammar_attribute] = ACTIONS(219),
    [anon_sym_PERCENTattribute] = ACTIONS(219),
    [anon_sym_PERCENTnonassoc] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_PERCENTtoken] = ACTIONS(219),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(336),
  },
  [107] = {
    [sym_header] = ACTIONS(338),
    [anon_sym_PERCENTstart] = ACTIONS(338),
    [anon_sym_PERCENTright] = ACTIONS(338),
    [sym_uid] = ACTIONS(340),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(338),
    [anon_sym_PERCENTparameter] = ACTIONS(338),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(338),
    [anon_sym_PERCENTtype] = ACTIONS(338),
    [anon_sym_PERCENTleft] = ACTIONS(338),
    [sym_lid] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [sym_qid] = ACTIONS(340),
    [sym_grammar_attribute] = ACTIONS(338),
    [anon_sym_PERCENTattribute] = ACTIONS(338),
    [anon_sym_PERCENTnonassoc] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_PERCENTtoken] = ACTIONS(338),
  },
  [108] = {
    [sym_symbol] = STATE(108),
    [aux_sym_declaration_repeat2] = STATE(108),
    [sym_header] = ACTIONS(338),
    [anon_sym_PERCENTstart] = ACTIONS(338),
    [anon_sym_PERCENTright] = ACTIONS(338),
    [sym_uid] = ACTIONS(342),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(338),
    [anon_sym_PERCENTparameter] = ACTIONS(338),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(338),
    [anon_sym_PERCENTtype] = ACTIONS(338),
    [anon_sym_PERCENTleft] = ACTIONS(338),
    [sym_lid] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_qid] = ACTIONS(342),
    [sym_grammar_attribute] = ACTIONS(338),
    [anon_sym_PERCENTattribute] = ACTIONS(338),
    [anon_sym_PERCENTnonassoc] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_PERCENTtoken] = ACTIONS(338),
  },
  [109] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(146),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [110] = {
    [aux_sym_old_rule_repeat3] = STATE(148),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(147),
    [sym_qid] = ACTIONS(351),
    [anon_sym_PERCENTpublic] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_uid] = ACTIONS(351),
    [anon_sym_PERCENTinline] = ACTIONS(353),
    [sym_postlude] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(351),
    [sym_lid] = ACTIONS(351),
  },
  [111] = {
    [aux_sym_old_rule_repeat1] = STATE(150),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(357),
  },
  [112] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(146),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(359),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [113] = {
    [sym_symbol] = STATE(152),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [114] = {
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [115] = {
    [sym_symbol] = STATE(154),
    [sym_qid] = ACTIONS(361),
    [sym_lid] = ACTIONS(363),
    [sym_uid] = ACTIONS(361),
  },
  [116] = {
    [sym_qid] = ACTIONS(365),
    [anon_sym_PERCENTpublic] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(367),
    [sym_uid] = ACTIONS(365),
    [anon_sym_PERCENTinline] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(367),
    [sym_postlude] = ACTIONS(367),
    [sym_new_rule] = ACTIONS(365),
    [sym_lid] = ACTIONS(365),
  },
  [117] = {
    [anon_sym_PIPE] = ACTIONS(69),
    [sym_ocaml_type] = ACTIONS(69),
    [sym_action] = ACTIONS(69),
  },
  [118] = {
    [anon_sym_PIPE] = ACTIONS(369),
    [sym_ocaml_type] = ACTIONS(369),
    [sym_action] = ACTIONS(369),
  },
  [119] = {
    [sym_symbol] = STATE(86),
    [sym_actual] = STATE(155),
    [sym_qid] = ACTIONS(163),
    [sym_lid] = ACTIONS(371),
    [sym_uid] = ACTIONS(163),
  },
  [120] = {
    [sym_qid] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym_uid] = ACTIONS(195),
    [sym_ocaml_type] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PERCENTprec] = ACTIONS(197),
    [sym_action] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_COMMA2] = ACTIONS(197),
    [sym_lid] = ACTIONS(197),
    [sym_attribute] = ACTIONS(197),
  },
  [121] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [sym_qid] = ACTIONS(373),
    [sym_uid] = ACTIONS(373),
    [sym_ocaml_type] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PERCENTprec] = ACTIONS(375),
    [sym_action] = ACTIONS(375),
    [sym_lid] = ACTIONS(375),
  },
  [122] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [aux_sym_declaration_repeat5] = STATE(158),
    [sym_qid] = ACTIONS(373),
    [sym_uid] = ACTIONS(373),
    [sym_ocaml_type] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PERCENTprec] = ACTIONS(375),
    [sym_action] = ACTIONS(375),
    [sym_lid] = ACTIONS(375),
    [sym_attribute] = ACTIONS(381),
  },
  [123] = {
    [sym_qid] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [sym_uid] = ACTIONS(383),
    [sym_ocaml_type] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PERCENTprec] = ACTIONS(385),
    [sym_action] = ACTIONS(385),
    [anon_sym_QMARK] = ACTIONS(385),
    [sym_lid] = ACTIONS(385),
    [sym_attribute] = ACTIONS(385),
  },
  [124] = {
    [aux_sym_old_rule_repeat3] = STATE(148),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(351),
    [anon_sym_PERCENTpublic] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_uid] = ACTIONS(351),
    [anon_sym_PERCENTinline] = ACTIONS(353),
    [sym_postlude] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(351),
    [sym_lid] = ACTIONS(351),
  },
  [125] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(351),
    [anon_sym_PERCENTpublic] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_uid] = ACTIONS(351),
    [anon_sym_PERCENTinline] = ACTIONS(353),
    [sym_postlude] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(351),
    [sym_lid] = ACTIONS(351),
  },
  [126] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(161),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [127] = {
    [sym_precedence] = STATE(162),
    [sym_qid] = ACTIONS(365),
    [anon_sym_PERCENTpublic] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(367),
    [sym_uid] = ACTIONS(365),
    [anon_sym_PERCENTinline] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(367),
    [sym_postlude] = ACTIONS(367),
    [sym_new_rule] = ACTIONS(365),
    [anon_sym_PERCENTprec] = ACTIONS(243),
    [sym_lid] = ACTIONS(365),
  },
  [128] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(389),
    [sym_action] = ACTIONS(389),
  },
  [129] = {
    [sym_actual] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(129),
    [sym_producer] = STATE(129),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_PERCENTprec] = ACTIONS(394),
    [sym_uid] = ACTIONS(391),
    [sym_action] = ACTIONS(394),
    [sym_ocaml_type] = ACTIONS(394),
    [sym_lid] = ACTIONS(396),
  },
  [130] = {
    [aux_sym_production_group_repeat2] = STATE(164),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(389),
    [sym_action] = ACTIONS(389),
  },
  [131] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(399),
    [sym_ocaml_type] = ACTIONS(402),
    [sym_action] = ACTIONS(402),
  },
  [132] = {
    [sym_actual] = STATE(166),
    [sym_production_group] = STATE(167),
    [sym_lax_actual] = STATE(168),
    [sym_precedence] = STATE(169),
    [aux_sym_production_group_repeat1] = STATE(170),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_producer] = STATE(170),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_action] = ACTIONS(404),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(404),
    [sym_lid] = ACTIONS(171),
  },
  [133] = {
    [sym_actual] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(129),
    [sym_producer] = STATE(129),
    [sym_precedence] = STATE(173),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(402),
    [sym_action] = ACTIONS(402),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_uid] = ACTIONS(163),
    [sym_ocaml_type] = ACTIONS(402),
    [sym_lid] = ACTIONS(171),
  },
  [134] = {
    [anon_sym_PIPE] = ACTIONS(402),
    [sym_ocaml_type] = ACTIONS(402),
    [sym_action] = ACTIONS(402),
  },
  [135] = {
    [sym_symbol] = STATE(174),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [136] = {
    [anon_sym_COLON] = ACTIONS(406),
  },
  [137] = {
    [aux_sym_old_rule_repeat1] = STATE(176),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(357),
  },
  [138] = {
    [sym_symbol] = STATE(91),
    [sym_strict_actual] = STATE(177),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [139] = {
    [anon_sym_COMMA2] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
  },
  [140] = {
    [sym_symbol] = STATE(91),
    [sym_strict_actual] = STATE(178),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [141] = {
    [sym_qid] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [sym_attribute] = ACTIONS(410),
    [sym_uid] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
    [sym_lid] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
  },
  [142] = {
    [anon_sym_COMMA2] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
  },
  [143] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(412),
  },
  [144] = {
    [sym_header] = ACTIONS(410),
    [anon_sym_PERCENTstart] = ACTIONS(410),
    [anon_sym_PERCENTright] = ACTIONS(410),
    [sym_uid] = ACTIONS(408),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(410),
    [anon_sym_PERCENTparameter] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(410),
    [anon_sym_PERCENTtype] = ACTIONS(410),
    [anon_sym_PERCENTleft] = ACTIONS(410),
    [sym_lid] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
    [sym_qid] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [sym_grammar_attribute] = ACTIONS(410),
    [anon_sym_PERCENTattribute] = ACTIONS(410),
    [anon_sym_PERCENTnonassoc] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(410),
    [anon_sym_PERCENTtoken] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
  },
  [145] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(414),
  },
  [146] = {
    [aux_sym_old_rule_repeat3] = STATE(183),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(182),
    [sym_qid] = ACTIONS(416),
    [anon_sym_PERCENTpublic] = ACTIONS(418),
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_uid] = ACTIONS(416),
    [anon_sym_PERCENTinline] = ACTIONS(418),
    [sym_postlude] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(416),
    [sym_lid] = ACTIONS(416),
  },
  [147] = {
    [aux_sym_old_rule_repeat3] = STATE(183),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(416),
    [anon_sym_PERCENTpublic] = ACTIONS(418),
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_uid] = ACTIONS(416),
    [anon_sym_PERCENTinline] = ACTIONS(418),
    [sym_postlude] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(416),
    [sym_lid] = ACTIONS(416),
  },
  [148] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(416),
    [anon_sym_PERCENTpublic] = ACTIONS(418),
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_uid] = ACTIONS(416),
    [anon_sym_PERCENTinline] = ACTIONS(418),
    [sym_postlude] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(416),
    [sym_lid] = ACTIONS(416),
  },
  [149] = {
    [anon_sym_COLON] = ACTIONS(422),
  },
  [150] = {
    [aux_sym_old_rule_repeat1] = STATE(176),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(424),
  },
  [151] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(186),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [152] = {
    [aux_sym_old_rule_repeat1] = STATE(187),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(424),
  },
  [153] = {
    [sym_qid] = ACTIONS(91),
    [anon_sym_PERCENTpublic] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_uid] = ACTIONS(91),
    [anon_sym_PERCENTinline] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [sym_postlude] = ACTIONS(69),
    [sym_new_rule] = ACTIONS(91),
    [sym_lid] = ACTIONS(91),
  },
  [154] = {
    [sym_qid] = ACTIONS(426),
    [anon_sym_PERCENTpublic] = ACTIONS(369),
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_uid] = ACTIONS(426),
    [anon_sym_PERCENTinline] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [sym_postlude] = ACTIONS(369),
    [sym_new_rule] = ACTIONS(426),
    [sym_lid] = ACTIONS(426),
  },
  [155] = {
    [aux_sym_old_rule_repeat3] = STATE(188),
    [aux_sym_declaration_repeat5] = STATE(189),
    [sym_modifier] = STATE(123),
    [sym_qid] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(253),
    [sym_uid] = ACTIONS(428),
    [sym_ocaml_type] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_PERCENTprec] = ACTIONS(430),
    [sym_action] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(253),
    [sym_lid] = ACTIONS(430),
    [sym_attribute] = ACTIONS(434),
  },
  [156] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [sym_qid] = ACTIONS(436),
    [sym_uid] = ACTIONS(436),
    [sym_ocaml_type] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PERCENTprec] = ACTIONS(438),
    [sym_action] = ACTIONS(438),
    [sym_lid] = ACTIONS(438),
  },
  [157] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [sym_qid] = ACTIONS(428),
    [sym_uid] = ACTIONS(428),
    [sym_ocaml_type] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_PERCENTprec] = ACTIONS(430),
    [sym_action] = ACTIONS(430),
    [sym_lid] = ACTIONS(430),
  },
  [158] = {
    [aux_sym_declaration_repeat5] = STATE(158),
    [sym_qid] = ACTIONS(443),
    [sym_uid] = ACTIONS(443),
    [sym_ocaml_type] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_PERCENTprec] = ACTIONS(283),
    [sym_action] = ACTIONS(283),
    [sym_lid] = ACTIONS(283),
    [sym_attribute] = ACTIONS(445),
  },
  [159] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(448),
    [anon_sym_PERCENTpublic] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_uid] = ACTIONS(448),
    [anon_sym_PERCENTinline] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(452),
    [sym_postlude] = ACTIONS(450),
    [sym_new_rule] = ACTIONS(448),
    [sym_lid] = ACTIONS(448),
  },
  [160] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(436),
    [anon_sym_PERCENTpublic] = ACTIONS(438),
    [ts_builtin_sym_end] = ACTIONS(438),
    [sym_uid] = ACTIONS(436),
    [anon_sym_PERCENTinline] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(455),
    [sym_postlude] = ACTIONS(438),
    [sym_new_rule] = ACTIONS(436),
    [sym_lid] = ACTIONS(436),
  },
  [161] = {
    [sym_qid] = ACTIONS(448),
    [anon_sym_PERCENTpublic] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_uid] = ACTIONS(448),
    [anon_sym_PERCENTinline] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
    [sym_postlude] = ACTIONS(450),
    [sym_new_rule] = ACTIONS(448),
    [sym_lid] = ACTIONS(448),
  },
  [162] = {
    [sym_qid] = ACTIONS(458),
    [anon_sym_PERCENTpublic] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_uid] = ACTIONS(458),
    [anon_sym_PERCENTinline] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(460),
    [sym_postlude] = ACTIONS(460),
    [sym_new_rule] = ACTIONS(458),
    [sym_lid] = ACTIONS(458),
  },
  [163] = {
    [sym_precedence] = STATE(190),
    [sym_qid] = ACTIONS(458),
    [anon_sym_PERCENTpublic] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_uid] = ACTIONS(458),
    [anon_sym_PERCENTinline] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(460),
    [sym_postlude] = ACTIONS(460),
    [sym_new_rule] = ACTIONS(458),
    [anon_sym_PERCENTprec] = ACTIONS(243),
    [sym_lid] = ACTIONS(458),
  },
  [164] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(462),
    [sym_action] = ACTIONS(462),
  },
  [165] = {
    [sym_precedence] = STATE(193),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_COMMA2] = ACTIONS(241),
    [anon_sym_PERCENTprec] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(241),
  },
  [166] = {
    [aux_sym_old_rule_repeat3] = STATE(121),
    [aux_sym_declaration_repeat5] = STATE(122),
    [sym_modifier] = STATE(194),
    [sym_qid] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(253),
    [sym_uid] = ACTIONS(251),
    [sym_ocaml_type] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PERCENTprec] = ACTIONS(255),
    [sym_action] = ACTIONS(255),
    [anon_sym_QMARK] = ACTIONS(253),
    [sym_lid] = ACTIONS(255),
    [sym_attribute] = ACTIONS(259),
  },
  [167] = {
    [aux_sym_lax_actual_repeat1] = STATE(196),
    [anon_sym_COMMA2] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(468),
  },
  [168] = {
    [aux_sym_actual_repeat1] = STATE(199),
    [anon_sym_COMMA2] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(472),
  },
  [169] = {
    [aux_sym_production_group_repeat2] = STATE(201),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(474),
    [sym_action] = ACTIONS(474),
  },
  [170] = {
    [sym_actual] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(129),
    [sym_producer] = STATE(129),
    [sym_bar] = STATE(87),
    [sym_symbol] = STATE(86),
    [aux_sym_production_group_repeat2] = STATE(201),
    [sym_precedence] = STATE(202),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_uid] = ACTIONS(163),
    [sym_action] = ACTIONS(474),
    [sym_ocaml_type] = ACTIONS(474),
    [sym_lid] = ACTIONS(171),
  },
  [171] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(474),
    [sym_action] = ACTIONS(474),
  },
  [172] = {
    [sym_uid] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_COMMA2] = ACTIONS(466),
    [anon_sym_PERCENTprec] = ACTIONS(273),
    [sym_action] = ACTIONS(273),
    [sym_lid] = ACTIONS(273),
    [sym_qid] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(476),
    [sym_ocaml_type] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_attribute] = ACTIONS(273),
  },
  [173] = {
    [anon_sym_PIPE] = ACTIONS(478),
    [sym_ocaml_type] = ACTIONS(478),
    [sym_action] = ACTIONS(478),
  },
  [174] = {
    [anon_sym_COMMA2] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(480),
  },
  [175] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(186),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(482),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [176] = {
    [aux_sym_old_rule_repeat1] = STATE(176),
    [anon_sym_COMMA2] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(480),
  },
  [177] = {
    [sym_modifier] = STATE(142),
    [aux_sym_strict_actual_repeat1] = STATE(206),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [178] = {
    [sym_modifier] = STATE(142),
    [anon_sym_COMMA2] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(290),
  },
  [179] = {
    [sym_qid] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(493),
    [sym_attribute] = ACTIONS(493),
    [sym_uid] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [sym_lid] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
  },
  [180] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [anon_sym_COMMA2] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(489),
  },
  [181] = {
    [sym_header] = ACTIONS(493),
    [anon_sym_PERCENTstart] = ACTIONS(493),
    [anon_sym_PERCENTright] = ACTIONS(493),
    [sym_uid] = ACTIONS(491),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(493),
    [anon_sym_PERCENTparameter] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(493),
    [anon_sym_PERCENTtype] = ACTIONS(493),
    [anon_sym_PERCENTleft] = ACTIONS(493),
    [sym_lid] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [sym_qid] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(493),
    [sym_grammar_attribute] = ACTIONS(493),
    [anon_sym_PERCENTattribute] = ACTIONS(493),
    [anon_sym_PERCENTnonassoc] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_PERCENTtoken] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
  },
  [182] = {
    [aux_sym_old_rule_repeat3] = STATE(207),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(498),
    [anon_sym_PERCENTpublic] = ACTIONS(500),
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_uid] = ACTIONS(498),
    [anon_sym_PERCENTinline] = ACTIONS(500),
    [sym_postlude] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(498),
    [sym_lid] = ACTIONS(498),
  },
  [183] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(498),
    [anon_sym_PERCENTpublic] = ACTIONS(500),
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_uid] = ACTIONS(498),
    [anon_sym_PERCENTinline] = ACTIONS(500),
    [sym_postlude] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(498),
    [sym_lid] = ACTIONS(498),
  },
  [184] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(209),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(504),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [185] = {
    [anon_sym_COLON] = ACTIONS(506),
  },
  [186] = {
    [aux_sym_old_rule_repeat3] = STATE(207),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(211),
    [sym_qid] = ACTIONS(498),
    [anon_sym_PERCENTpublic] = ACTIONS(500),
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_uid] = ACTIONS(498),
    [anon_sym_PERCENTinline] = ACTIONS(500),
    [sym_postlude] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(498),
    [sym_lid] = ACTIONS(498),
  },
  [187] = {
    [aux_sym_old_rule_repeat1] = STATE(176),
    [anon_sym_COMMA2] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(508),
  },
  [188] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [sym_qid] = ACTIONS(510),
    [sym_uid] = ACTIONS(510),
    [sym_ocaml_type] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_PERCENTprec] = ACTIONS(512),
    [sym_action] = ACTIONS(512),
    [sym_lid] = ACTIONS(512),
  },
  [189] = {
    [aux_sym_old_rule_repeat3] = STATE(213),
    [aux_sym_declaration_repeat5] = STATE(158),
    [sym_qid] = ACTIONS(510),
    [sym_uid] = ACTIONS(510),
    [sym_ocaml_type] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_PERCENTprec] = ACTIONS(512),
    [sym_action] = ACTIONS(512),
    [sym_lid] = ACTIONS(512),
    [sym_attribute] = ACTIONS(381),
  },
  [190] = {
    [sym_qid] = ACTIONS(516),
    [anon_sym_PERCENTpublic] = ACTIONS(518),
    [ts_builtin_sym_end] = ACTIONS(518),
    [sym_uid] = ACTIONS(516),
    [anon_sym_PERCENTinline] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [sym_postlude] = ACTIONS(518),
    [sym_new_rule] = ACTIONS(516),
    [sym_lid] = ACTIONS(516),
  },
  [191] = {
    [sym_precedence] = STATE(214),
    [sym_qid] = ACTIONS(516),
    [anon_sym_PERCENTpublic] = ACTIONS(518),
    [ts_builtin_sym_end] = ACTIONS(518),
    [sym_uid] = ACTIONS(516),
    [anon_sym_PERCENTinline] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [sym_postlude] = ACTIONS(518),
    [sym_new_rule] = ACTIONS(516),
    [anon_sym_PERCENTprec] = ACTIONS(243),
    [sym_lid] = ACTIONS(516),
  },
  [192] = {
    [sym_symbol] = STATE(215),
    [sym_qid] = ACTIONS(173),
    [sym_lid] = ACTIONS(175),
    [sym_uid] = ACTIONS(173),
  },
  [193] = {
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_COMMA2] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(367),
  },
  [194] = {
    [sym_qid] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_uid] = ACTIONS(383),
    [sym_ocaml_type] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PERCENTprec] = ACTIONS(385),
    [sym_action] = ACTIONS(385),
    [anon_sym_QMARK] = ACTIONS(385),
    [anon_sym_COMMA2] = ACTIONS(520),
    [sym_lid] = ACTIONS(385),
    [sym_attribute] = ACTIONS(385),
  },
  [195] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(216),
    [sym_precedence] = STATE(169),
    [aux_sym_production_group_repeat1] = STATE(170),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(170),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_action] = ACTIONS(404),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(404),
    [sym_lid] = ACTIONS(171),
  },
  [196] = {
    [aux_sym_lax_actual_repeat1] = STATE(217),
    [anon_sym_COMMA2] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(468),
  },
  [197] = {
    [sym_actual] = STATE(166),
    [sym_production_group] = STATE(167),
    [sym_lax_actual] = STATE(218),
    [sym_precedence] = STATE(169),
    [aux_sym_production_group_repeat1] = STATE(170),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_producer] = STATE(170),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_action] = ACTIONS(404),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(404),
    [sym_lid] = ACTIONS(171),
  },
  [198] = {
    [sym_qid] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(524),
    [sym_uid] = ACTIONS(522),
    [sym_ocaml_type] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_PERCENTprec] = ACTIONS(524),
    [sym_action] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(524),
    [sym_lid] = ACTIONS(524),
    [sym_attribute] = ACTIONS(524),
  },
  [199] = {
    [aux_sym_actual_repeat1] = STATE(220),
    [anon_sym_COMMA2] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(526),
  },
  [200] = {
    [sym_precedence] = STATE(221),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_COMMA2] = ACTIONS(367),
    [anon_sym_PERCENTprec] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(367),
  },
  [201] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(528),
    [sym_action] = ACTIONS(528),
  },
  [202] = {
    [aux_sym_production_group_repeat2] = STATE(223),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(528),
    [sym_action] = ACTIONS(528),
  },
  [203] = {
    [sym_actual] = STATE(166),
    [sym_production_group] = STATE(167),
    [sym_lax_actual] = STATE(224),
    [sym_precedence] = STATE(169),
    [aux_sym_production_group_repeat1] = STATE(170),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_producer] = STATE(170),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_action] = ACTIONS(404),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(404),
    [sym_lid] = ACTIONS(171),
  },
  [204] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(209),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [205] = {
    [anon_sym_COMMA2] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
  },
  [206] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(530),
  },
  [207] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(532),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(532),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [sym_postlude] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(532),
    [sym_lid] = ACTIONS(532),
  },
  [208] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(226),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [209] = {
    [aux_sym_old_rule_repeat3] = STATE(228),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(227),
    [sym_qid] = ACTIONS(532),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(532),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [sym_postlude] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(532),
    [sym_lid] = ACTIONS(532),
  },
  [210] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(226),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(538),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [211] = {
    [aux_sym_old_rule_repeat3] = STATE(228),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(532),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(532),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [sym_postlude] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(532),
    [sym_lid] = ACTIONS(532),
  },
  [212] = {
    [anon_sym_COLON] = ACTIONS(540),
  },
  [213] = {
    [aux_sym_old_rule_repeat3] = STATE(156),
    [sym_qid] = ACTIONS(542),
    [sym_uid] = ACTIONS(542),
    [sym_ocaml_type] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_PERCENTprec] = ACTIONS(544),
    [sym_action] = ACTIONS(544),
    [sym_lid] = ACTIONS(544),
  },
  [214] = {
    [sym_qid] = ACTIONS(546),
    [anon_sym_PERCENTpublic] = ACTIONS(548),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_uid] = ACTIONS(546),
    [anon_sym_PERCENTinline] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(548),
    [sym_postlude] = ACTIONS(548),
    [sym_new_rule] = ACTIONS(546),
    [sym_lid] = ACTIONS(546),
  },
  [215] = {
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_COMMA2] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
  },
  [216] = {
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_COMMA2] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(550),
  },
  [217] = {
    [aux_sym_lax_actual_repeat1] = STATE(217),
    [anon_sym_PIPE] = ACTIONS(552),
    [anon_sym_COMMA2] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(550),
  },
  [218] = {
    [anon_sym_COMMA2] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
  },
  [219] = {
    [sym_qid] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [sym_uid] = ACTIONS(557),
    [sym_ocaml_type] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PERCENTprec] = ACTIONS(559),
    [sym_action] = ACTIONS(559),
    [anon_sym_QMARK] = ACTIONS(559),
    [sym_lid] = ACTIONS(559),
    [sym_attribute] = ACTIONS(559),
  },
  [220] = {
    [aux_sym_actual_repeat1] = STATE(220),
    [anon_sym_COMMA2] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(555),
  },
  [221] = {
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_COMMA2] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
  },
  [222] = {
    [sym_precedence] = STATE(231),
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_COMMA2] = ACTIONS(460),
    [anon_sym_PERCENTprec] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(460),
  },
  [223] = {
    [aux_sym_production_group_repeat2] = STATE(131),
    [sym_bar] = STATE(87),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_ocaml_type] = ACTIONS(564),
    [sym_action] = ACTIONS(564),
  },
  [224] = {
    [aux_sym_actual_repeat1] = STATE(234),
    [anon_sym_COMMA2] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(566),
  },
  [225] = {
    [anon_sym_COMMA2] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
  },
  [226] = {
    [aux_sym_old_rule_repeat3] = STATE(236),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(235),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(570),
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(570),
    [sym_postlude] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(568),
    [sym_lid] = ACTIONS(568),
  },
  [227] = {
    [aux_sym_old_rule_repeat3] = STATE(236),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(570),
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(570),
    [sym_postlude] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(568),
    [sym_lid] = ACTIONS(568),
  },
  [228] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(570),
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(570),
    [sym_postlude] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(568),
    [sym_lid] = ACTIONS(568),
  },
  [229] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(237),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [230] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(237),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(574),
    [sym_action] = ACTIONS(167),
    [sym_uid] = ACTIONS(163),
    [anon_sym_PERCENTprec] = ACTIONS(169),
    [sym_ocaml_type] = ACTIONS(167),
    [sym_lid] = ACTIONS(171),
  },
  [231] = {
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_COMMA2] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
  },
  [232] = {
    [sym_precedence] = STATE(239),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_COMMA2] = ACTIONS(518),
    [anon_sym_PERCENTprec] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(518),
  },
  [233] = {
    [sym_qid] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(576),
    [sym_uid] = ACTIONS(522),
    [sym_ocaml_type] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_PERCENTprec] = ACTIONS(524),
    [sym_action] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_COMMA2] = ACTIONS(576),
    [sym_lid] = ACTIONS(524),
    [sym_attribute] = ACTIONS(524),
  },
  [234] = {
    [aux_sym_actual_repeat1] = STATE(220),
    [anon_sym_COMMA2] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(578),
  },
  [235] = {
    [aux_sym_old_rule_repeat3] = STATE(241),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(580),
    [anon_sym_PERCENTpublic] = ACTIONS(582),
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_uid] = ACTIONS(580),
    [anon_sym_PERCENTinline] = ACTIONS(582),
    [sym_postlude] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(580),
    [sym_lid] = ACTIONS(580),
  },
  [236] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(580),
    [anon_sym_PERCENTpublic] = ACTIONS(582),
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_uid] = ACTIONS(580),
    [anon_sym_PERCENTinline] = ACTIONS(582),
    [sym_postlude] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(580),
    [sym_lid] = ACTIONS(580),
  },
  [237] = {
    [aux_sym_old_rule_repeat3] = STATE(241),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(242),
    [sym_qid] = ACTIONS(580),
    [anon_sym_PERCENTpublic] = ACTIONS(582),
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_uid] = ACTIONS(580),
    [anon_sym_PERCENTinline] = ACTIONS(582),
    [sym_postlude] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(580),
    [sym_lid] = ACTIONS(580),
  },
  [238] = {
    [sym_actual] = STATE(81),
    [sym_production_group] = STATE(243),
    [sym_precedence] = STATE(83),
    [aux_sym_production_group_repeat1] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_producer] = STATE(84),
    [sym_bar] = STATE(87),
    [sym_qid] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PERCENTprec] = ACTIONS(237),
    [sym_uid] = ACTIONS(235),
    [sym_action] = ACTIONS(237),
    [sym_ocaml_type] = ACTIONS(237),
    [sym_lid] = ACTIONS(237),
  },
  [239] = {
    [anon_sym_PIPE] = ACTIONS(548),
    [anon_sym_COMMA2] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(548),
  },
  [240] = {
    [sym_qid] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_uid] = ACTIONS(557),
    [sym_ocaml_type] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PERCENTprec] = ACTIONS(559),
    [sym_action] = ACTIONS(559),
    [anon_sym_QMARK] = ACTIONS(559),
    [anon_sym_COMMA2] = ACTIONS(586),
    [sym_lid] = ACTIONS(559),
    [sym_attribute] = ACTIONS(559),
  },
  [241] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(588),
    [anon_sym_PERCENTpublic] = ACTIONS(590),
    [ts_builtin_sym_end] = ACTIONS(590),
    [sym_uid] = ACTIONS(588),
    [anon_sym_PERCENTinline] = ACTIONS(590),
    [sym_postlude] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(588),
    [sym_lid] = ACTIONS(588),
  },
  [242] = {
    [aux_sym_old_rule_repeat3] = STATE(244),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(588),
    [anon_sym_PERCENTpublic] = ACTIONS(590),
    [ts_builtin_sym_end] = ACTIONS(590),
    [sym_uid] = ACTIONS(588),
    [anon_sym_PERCENTinline] = ACTIONS(590),
    [sym_postlude] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(588),
    [sym_lid] = ACTIONS(588),
  },
  [243] = {
    [aux_sym_old_rule_repeat3] = STATE(244),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(245),
    [sym_qid] = ACTIONS(588),
    [anon_sym_PERCENTpublic] = ACTIONS(590),
    [ts_builtin_sym_end] = ACTIONS(590),
    [sym_uid] = ACTIONS(588),
    [anon_sym_PERCENTinline] = ACTIONS(590),
    [sym_postlude] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(588),
    [sym_lid] = ACTIONS(588),
  },
  [244] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(594),
    [anon_sym_PERCENTpublic] = ACTIONS(596),
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_uid] = ACTIONS(594),
    [anon_sym_PERCENTinline] = ACTIONS(596),
    [sym_postlude] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(594),
    [sym_lid] = ACTIONS(594),
  },
  [245] = {
    [aux_sym_old_rule_repeat3] = STATE(246),
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(159),
    [sym_qid] = ACTIONS(594),
    [anon_sym_PERCENTpublic] = ACTIONS(596),
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_uid] = ACTIONS(594),
    [anon_sym_PERCENTinline] = ACTIONS(596),
    [sym_postlude] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(267),
    [sym_new_rule] = ACTIONS(594),
    [sym_lid] = ACTIONS(594),
  },
  [246] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [sym_qid] = ACTIONS(600),
    [anon_sym_PERCENTpublic] = ACTIONS(602),
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_uid] = ACTIONS(600),
    [anon_sym_PERCENTinline] = ACTIONS(602),
    [sym_postlude] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_new_rule] = ACTIONS(600),
    [sym_lid] = ACTIONS(600),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_priority_keyword, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_priority_keyword, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = false}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = false}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(34),
  [59] = {.count = 1, .reusable = true}, SHIFT(35),
  [61] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(39),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(41),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(17),
  [81] = {.count = 1, .reusable = true}, SHIFT(44),
  [83] = {.count = 1, .reusable = true}, SHIFT(45),
  [85] = {.count = 1, .reusable = true}, SHIFT(43),
  [87] = {.count = 1, .reusable = true}, SHIFT(46),
  [89] = {.count = 1, .reusable = false}, SHIFT(47),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(48),
  [99] = {.count = 1, .reusable = true}, SHIFT(49),
  [101] = {.count = 1, .reusable = true}, SHIFT(50),
  [103] = {.count = 1, .reusable = true}, SHIFT(52),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_terminal_alias_attrs, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(56),
  [111] = {.count = 1, .reusable = true}, SHIFT(57),
  [113] = {.count = 1, .reusable = true}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, SHIFT(60),
  [117] = {.count = 1, .reusable = true}, SHIFT(61),
  [119] = {.count = 1, .reusable = true}, SHIFT(62),
  [121] = {.count = 1, .reusable = false}, SHIFT(67),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [149] = {.count = 1, .reusable = true}, SHIFT(68),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(74),
  [159] = {.count = 1, .reusable = true}, SHIFT(75),
  [161] = {.count = 1, .reusable = true}, SHIFT(73),
  [163] = {.count = 1, .reusable = false}, SHIFT(76),
  [165] = {.count = 1, .reusable = true}, SHIFT(77),
  [167] = {.count = 1, .reusable = true}, SHIFT(78),
  [169] = {.count = 1, .reusable = true}, SHIFT(79),
  [171] = {.count = 1, .reusable = true}, SHIFT(80),
  [173] = {.count = 1, .reusable = false}, SHIFT(88),
  [175] = {.count = 1, .reusable = true}, SHIFT(88),
  [177] = {.count = 1, .reusable = true}, SHIFT(90),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(18),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(47),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_modifier, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(94),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(95),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(98),
  [215] = {.count = 1, .reusable = true}, SHIFT(99),
  [217] = {.count = 1, .reusable = true}, SHIFT(106),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(39),
  [229] = {.count = 1, .reusable = true}, SHIFT(109),
  [231] = {.count = 1, .reusable = true}, SHIFT(113),
  [233] = {.count = 1, .reusable = true}, SHIFT(112),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_bar, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_bar, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [243] = {.count = 1, .reusable = true}, SHIFT(115),
  [245] = {.count = 1, .reusable = false}, SHIFT(117),
  [247] = {.count = 1, .reusable = true}, SHIFT(117),
  [249] = {.count = 1, .reusable = true}, SHIFT(119),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 1),
  [253] = {.count = 1, .reusable = true}, SHIFT(120),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(121),
  [259] = {.count = 1, .reusable = true}, SHIFT(122),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [265] = {.count = 1, .reusable = true}, SHIFT(125),
  [267] = {.count = 1, .reusable = true}, SHIFT(114),
  [269] = {.count = 1, .reusable = true}, SHIFT(127),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [275] = {.count = 1, .reusable = true}, SHIFT(132),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [279] = {.count = 1, .reusable = true}, SHIFT(135),
  [281] = {.count = 1, .reusable = true}, SHIFT(136),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(90),
  [288] = {.count = 1, .reusable = true}, SHIFT(138),
  [290] = {.count = 1, .reusable = true}, SHIFT(139),
  [292] = {.count = 1, .reusable = true}, SHIFT(140),
  [294] = {.count = 1, .reusable = true}, SHIFT(141),
  [296] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(94),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(25),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(25),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(50),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(99),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(29),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(58),
  [325] = {.count = 1, .reusable = true}, SHIFT(144),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(31),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(31),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(62),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [338] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [340] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat2, 2),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(31),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(31),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(68),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [355] = {.count = 1, .reusable = true}, SHIFT(148),
  [357] = {.count = 1, .reusable = true}, SHIFT(149),
  [359] = {.count = 1, .reusable = true}, SHIFT(151),
  [361] = {.count = 1, .reusable = false}, SHIFT(153),
  [363] = {.count = 1, .reusable = true}, SHIFT(153),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [371] = {.count = 1, .reusable = true}, SHIFT(76),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(156),
  [379] = {.count = 1, .reusable = true}, SHIFT(157),
  [381] = {.count = 1, .reusable = true}, SHIFT(158),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [387] = {.count = 1, .reusable = true}, SHIFT(160),
  [389] = {.count = 1, .reusable = true}, SHIFT(163),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(76),
  [394] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(80),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(114),
  [402] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [404] = {.count = 1, .reusable = true}, SHIFT(165),
  [406] = {.count = 1, .reusable = true}, SHIFT(175),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 4),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [412] = {.count = 1, .reusable = true}, SHIFT(179),
  [414] = {.count = 1, .reusable = true}, SHIFT(181),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [420] = {.count = 1, .reusable = true}, SHIFT(183),
  [422] = {.count = 1, .reusable = true}, SHIFT(184),
  [424] = {.count = 1, .reusable = true}, SHIFT(185),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 3),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [432] = {.count = 1, .reusable = true}, SHIFT(188),
  [434] = {.count = 1, .reusable = true}, SHIFT(189),
  [436] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(156),
  [443] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat5, 2),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(158),
  [448] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(114),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(160),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [462] = {.count = 1, .reusable = true}, SHIFT(191),
  [464] = {.count = 1, .reusable = true}, SHIFT(192),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [468] = {.count = 1, .reusable = true}, SHIFT(195),
  [470] = {.count = 1, .reusable = true}, SHIFT(197),
  [472] = {.count = 1, .reusable = true}, SHIFT(198),
  [474] = {.count = 1, .reusable = true}, SHIFT(200),
  [476] = {.count = 1, .reusable = true}, SHIFT(203),
  [478] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [482] = {.count = 1, .reusable = true}, SHIFT(204),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(135),
  [487] = {.count = 1, .reusable = true}, SHIFT(205),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 5),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(140),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [502] = {.count = 1, .reusable = true}, SHIFT(207),
  [504] = {.count = 1, .reusable = true}, SHIFT(208),
  [506] = {.count = 1, .reusable = true}, SHIFT(210),
  [508] = {.count = 1, .reusable = true}, SHIFT(212),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 4),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [514] = {.count = 1, .reusable = true}, SHIFT(213),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 4),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [526] = {.count = 1, .reusable = true}, SHIFT(219),
  [528] = {.count = 1, .reusable = true}, SHIFT(222),
  [530] = {.count = 1, .reusable = true}, SHIFT(225),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [536] = {.count = 1, .reusable = true}, SHIFT(228),
  [538] = {.count = 1, .reusable = true}, SHIFT(229),
  [540] = {.count = 1, .reusable = true}, SHIFT(230),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 5),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2), SHIFT_REPEAT(195),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 5),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(197),
  [564] = {.count = 1, .reusable = true}, SHIFT(232),
  [566] = {.count = 1, .reusable = true}, SHIFT(233),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [572] = {.count = 1, .reusable = true}, SHIFT(236),
  [574] = {.count = 1, .reusable = true}, SHIFT(238),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [578] = {.count = 1, .reusable = true}, SHIFT(240),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [584] = {.count = 1, .reusable = true}, SHIFT(241),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [592] = {.count = 1, .reusable = true}, SHIFT(244),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [598] = {.count = 1, .reusable = true}, SHIFT(246),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
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
