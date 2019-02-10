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
  sym_high_prec_bar = 39,
  sym_low_prec_bar = 40,
  sym_symbol = 41,
  sym_declaration = 42,
  sym_terminal_alias_attrs = 43,
  sym_priority_keyword = 44,
  sym_non_terminal = 45,
  sym_old_rule = 46,
  sym_flags = 47,
  sym_production_group = 48,
  sym_precedence = 49,
  sym_producer = 50,
  sym_strict_actual = 51,
  sym_actual = 52,
  sym_lax_actual = 53,
  sym_modifier = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_source_file_repeat2 = 56,
  aux_sym_declaration_repeat1 = 57,
  aux_sym_declaration_repeat2 = 58,
  aux_sym_declaration_repeat3 = 59,
  aux_sym_declaration_repeat4 = 60,
  aux_sym_declaration_repeat5 = 61,
  aux_sym_old_rule_repeat1 = 62,
  aux_sym_old_rule_repeat2 = 63,
  aux_sym_old_rule_repeat3 = 64,
  aux_sym_production_group_repeat1 = 65,
  aux_sym_production_group_repeat2 = 66,
  aux_sym_strict_actual_repeat1 = 67,
  aux_sym_actual_repeat1 = 68,
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
  [sym_high_prec_bar] = "high_prec_bar",
  [sym_low_prec_bar] = "low_prec_bar",
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
  [sym_high_prec_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_low_prec_bar] = {
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
  [11] = {.lex_state = 104, .external_lex_state = 4},
  [12] = {.lex_state = 104, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 104, .external_lex_state = 4},
  [15] = {.lex_state = 104, .external_lex_state = 2},
  [16] = {.lex_state = 104, .external_lex_state = 2},
  [17] = {.lex_state = 110, .external_lex_state = 6},
  [18] = {.lex_state = 111, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 111, .external_lex_state = 4},
  [21] = {.lex_state = 112, .external_lex_state = 6},
  [22] = {.lex_state = 107, .external_lex_state = 5},
  [23] = {.lex_state = 104, .external_lex_state = 4},
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
  [34] = {.lex_state = 104, .external_lex_state = 2},
  [35] = {.lex_state = 107, .external_lex_state = 5},
  [36] = {.lex_state = 104, .external_lex_state = 2},
  [37] = {.lex_state = 104, .external_lex_state = 2},
  [38] = {.lex_state = 104, .external_lex_state = 4},
  [39] = {.lex_state = 104, .external_lex_state = 2},
  [40] = {.lex_state = 104, .external_lex_state = 4},
  [41] = {.lex_state = 111, .external_lex_state = 8},
  [42] = {.lex_state = 104, .external_lex_state = 4},
  [43] = {.lex_state = 112, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 107, .external_lex_state = 5},
  [46] = {.lex_state = 112, .external_lex_state = 6},
  [47] = {.lex_state = 104, .external_lex_state = 6},
  [48] = {.lex_state = 104, .external_lex_state = 4},
  [49] = {.lex_state = 104, .external_lex_state = 6},
  [50] = {.lex_state = 104, .external_lex_state = 6},
  [51] = {.lex_state = 104, .external_lex_state = 6},
  [52] = {.lex_state = 104, .external_lex_state = 7},
  [53] = {.lex_state = 104, .external_lex_state = 4},
  [54] = {.lex_state = 104, .external_lex_state = 2},
  [55] = {.lex_state = 104, .external_lex_state = 7},
  [56] = {.lex_state = 104, .external_lex_state = 7},
  [57] = {.lex_state = 104, .external_lex_state = 4},
  [58] = {.lex_state = 104, .external_lex_state = 2},
  [59] = {.lex_state = 104, .external_lex_state = 2},
  [60] = {.lex_state = 104, .external_lex_state = 4},
  [61] = {.lex_state = 104, .external_lex_state = 2},
  [62] = {.lex_state = 104, .external_lex_state = 2},
  [63] = {.lex_state = 104, .external_lex_state = 2},
  [64] = {.lex_state = 104, .external_lex_state = 4},
  [65] = {.lex_state = 104, .external_lex_state = 2},
  [66] = {.lex_state = 104, .external_lex_state = 4},
  [67] = {.lex_state = 104, .external_lex_state = 2},
  [68] = {.lex_state = 107, .external_lex_state = 5},
  [69] = {.lex_state = 104, .external_lex_state = 2},
  [70] = {.lex_state = 104, .external_lex_state = 2},
  [71] = {.lex_state = 104, .external_lex_state = 2},
  [72] = {.lex_state = 113, .external_lex_state = 9},
  [73] = {.lex_state = 111, .external_lex_state = 8},
  [74] = {.lex_state = 107, .external_lex_state = 5},
  [75] = {.lex_state = 104, .external_lex_state = 4},
  [76] = {.lex_state = 113, .external_lex_state = 9},
  [77] = {.lex_state = 107, .external_lex_state = 8},
  [78] = {.lex_state = 113, .external_lex_state = 9},
  [79] = {.lex_state = 113, .external_lex_state = 9},
  [80] = {.lex_state = 107, .external_lex_state = 5},
  [81] = {.lex_state = 107, .external_lex_state = 8},
  [82] = {.lex_state = 111, .external_lex_state = 8},
  [83] = {.lex_state = 111, .external_lex_state = 8},
  [84] = {.lex_state = 111, .external_lex_state = 8},
  [85] = {.lex_state = 113, .external_lex_state = 4},
  [86] = {.lex_state = 113, .external_lex_state = 4},
  [87] = {.lex_state = 111, .external_lex_state = 8},
  [88] = {.lex_state = 104, .external_lex_state = 4},
  [89] = {.lex_state = 112, .external_lex_state = 6},
  [90] = {.lex_state = 112, .external_lex_state = 6},
  [91] = {.lex_state = 104, .external_lex_state = 6},
  [92] = {.lex_state = 104, .external_lex_state = 6},
  [93] = {.lex_state = 104, .external_lex_state = 7},
  [94] = {.lex_state = 104, .external_lex_state = 7},
  [95] = {.lex_state = 113, .external_lex_state = 4},
  [96] = {.lex_state = 113, .external_lex_state = 4},
  [97] = {.lex_state = 104, .external_lex_state = 2},
  [98] = {.lex_state = 104, .external_lex_state = 7},
  [99] = {.lex_state = 104, .external_lex_state = 7},
  [100] = {.lex_state = 104, .external_lex_state = 2},
  [101] = {.lex_state = 104, .external_lex_state = 2},
  [102] = {.lex_state = 104, .external_lex_state = 2},
  [103] = {.lex_state = 104, .external_lex_state = 2},
  [104] = {.lex_state = 113, .external_lex_state = 4},
  [105] = {.lex_state = 104, .external_lex_state = 2},
  [106] = {.lex_state = 104, .external_lex_state = 2},
  [107] = {.lex_state = 104, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 104, .external_lex_state = 4},
  [110] = {.lex_state = 107, .external_lex_state = 5},
  [111] = {.lex_state = 107, .external_lex_state = 8},
  [112] = {.lex_state = 107, .external_lex_state = 8},
  [113] = {.lex_state = 104, .external_lex_state = 4},
  [114] = {.lex_state = 107, .external_lex_state = 5},
  [115] = {.lex_state = 107, .external_lex_state = 8},
  [116] = {.lex_state = 111, .external_lex_state = 8},
  [117] = {.lex_state = 113, .external_lex_state = 9},
  [118] = {.lex_state = 111, .external_lex_state = 8},
  [119] = {.lex_state = 111, .external_lex_state = 9},
  [120] = {.lex_state = 113, .external_lex_state = 9},
  [121] = {.lex_state = 107, .external_lex_state = 5},
  [122] = {.lex_state = 107, .external_lex_state = 5},
  [123] = {.lex_state = 111, .external_lex_state = 8},
  [124] = {.lex_state = 107, .external_lex_state = 8},
  [125] = {.lex_state = 111, .external_lex_state = 8},
  [126] = {.lex_state = 107, .external_lex_state = 8},
  [127] = {.lex_state = 111, .external_lex_state = 8},
  [128] = {.lex_state = 107, .external_lex_state = 8},
  [129] = {.lex_state = 107, .external_lex_state = 5},
  [130] = {.lex_state = 104, .external_lex_state = 4},
  [131] = {.lex_state = 112, .external_lex_state = 4},
  [132] = {.lex_state = 113, .external_lex_state = 4},
  [133] = {.lex_state = 111, .external_lex_state = 8},
  [134] = {.lex_state = 113, .external_lex_state = 4},
  [135] = {.lex_state = 111, .external_lex_state = 8},
  [136] = {.lex_state = 104, .external_lex_state = 4},
  [137] = {.lex_state = 113, .external_lex_state = 4},
  [138] = {.lex_state = 104, .external_lex_state = 4},
  [139] = {.lex_state = 104, .external_lex_state = 6},
  [140] = {.lex_state = 113, .external_lex_state = 4},
  [141] = {.lex_state = 113, .external_lex_state = 4},
  [142] = {.lex_state = 104, .external_lex_state = 4},
  [143] = {.lex_state = 104, .external_lex_state = 2},
  [144] = {.lex_state = 113, .external_lex_state = 4},
  [145] = {.lex_state = 107, .external_lex_state = 5},
  [146] = {.lex_state = 107, .external_lex_state = 5},
  [147] = {.lex_state = 113, .external_lex_state = 9},
  [148] = {.lex_state = 107, .external_lex_state = 5},
  [149] = {.lex_state = 113, .external_lex_state = 9},
  [150] = {.lex_state = 113, .external_lex_state = 4},
  [151] = {.lex_state = 113, .external_lex_state = 9},
  [152] = {.lex_state = 107, .external_lex_state = 8},
  [153] = {.lex_state = 113, .external_lex_state = 9},
  [154] = {.lex_state = 113, .external_lex_state = 9},
  [155] = {.lex_state = 113, .external_lex_state = 4},
  [156] = {.lex_state = 113, .external_lex_state = 4},
  [157] = {.lex_state = 107, .external_lex_state = 8},
  [158] = {.lex_state = 111, .external_lex_state = 8},
  [159] = {.lex_state = 111, .external_lex_state = 8},
  [160] = {.lex_state = 111, .external_lex_state = 8},
  [161] = {.lex_state = 111, .external_lex_state = 9},
  [162] = {.lex_state = 107, .external_lex_state = 5},
  [163] = {.lex_state = 107, .external_lex_state = 5},
  [164] = {.lex_state = 107, .external_lex_state = 5},
  [165] = {.lex_state = 107, .external_lex_state = 5},
  [166] = {.lex_state = 107, .external_lex_state = 5},
  [167] = {.lex_state = 107, .external_lex_state = 8},
  [168] = {.lex_state = 107, .external_lex_state = 8},
  [169] = {.lex_state = 107, .external_lex_state = 5},
  [170] = {.lex_state = 113, .external_lex_state = 4},
  [171] = {.lex_state = 111, .external_lex_state = 8},
  [172] = {.lex_state = 112, .external_lex_state = 4},
  [173] = {.lex_state = 113, .external_lex_state = 4},
  [174] = {.lex_state = 107, .external_lex_state = 5},
  [175] = {.lex_state = 113, .external_lex_state = 4},
  [176] = {.lex_state = 111, .external_lex_state = 8},
  [177] = {.lex_state = 113, .external_lex_state = 4},
  [178] = {.lex_state = 113, .external_lex_state = 4},
  [179] = {.lex_state = 104, .external_lex_state = 6},
  [180] = {.lex_state = 113, .external_lex_state = 4},
  [181] = {.lex_state = 113, .external_lex_state = 4},
  [182] = {.lex_state = 104, .external_lex_state = 2},
  [183] = {.lex_state = 111, .external_lex_state = 8},
  [184] = {.lex_state = 111, .external_lex_state = 9},
  [185] = {.lex_state = 104, .external_lex_state = 4},
  [186] = {.lex_state = 113, .external_lex_state = 4},
  [187] = {.lex_state = 113, .external_lex_state = 4},
  [188] = {.lex_state = 111, .external_lex_state = 8},
  [189] = {.lex_state = 113, .external_lex_state = 9},
  [190] = {.lex_state = 113, .external_lex_state = 9},
  [191] = {.lex_state = 111, .external_lex_state = 8},
  [192] = {.lex_state = 113, .external_lex_state = 9},
  [193] = {.lex_state = 113, .external_lex_state = 4},
  [194] = {.lex_state = 113, .external_lex_state = 4},
  [195] = {.lex_state = 111, .external_lex_state = 8},
  [196] = {.lex_state = 107, .external_lex_state = 8},
  [197] = {.lex_state = 107, .external_lex_state = 8},
  [198] = {.lex_state = 107, .external_lex_state = 5},
  [199] = {.lex_state = 107, .external_lex_state = 5},
  [200] = {.lex_state = 107, .external_lex_state = 5},
  [201] = {.lex_state = 107, .external_lex_state = 5},
  [202] = {.lex_state = 111, .external_lex_state = 8},
  [203] = {.lex_state = 111, .external_lex_state = 8},
  [204] = {.lex_state = 107, .external_lex_state = 5},
  [205] = {.lex_state = 112, .external_lex_state = 4},
  [206] = {.lex_state = 113, .external_lex_state = 4},
  [207] = {.lex_state = 113, .external_lex_state = 4},
  [208] = {.lex_state = 113, .external_lex_state = 4},
  [209] = {.lex_state = 111, .external_lex_state = 8},
  [210] = {.lex_state = 113, .external_lex_state = 4},
  [211] = {.lex_state = 113, .external_lex_state = 4},
  [212] = {.lex_state = 113, .external_lex_state = 4},
  [213] = {.lex_state = 113, .external_lex_state = 4},
  [214] = {.lex_state = 113, .external_lex_state = 9},
  [215] = {.lex_state = 113, .external_lex_state = 4},
  [216] = {.lex_state = 113, .external_lex_state = 4},
  [217] = {.lex_state = 113, .external_lex_state = 4},
  [218] = {.lex_state = 113, .external_lex_state = 4},
  [219] = {.lex_state = 107, .external_lex_state = 8},
  [220] = {.lex_state = 107, .external_lex_state = 5},
  [221] = {.lex_state = 107, .external_lex_state = 5},
  [222] = {.lex_state = 107, .external_lex_state = 5},
  [223] = {.lex_state = 107, .external_lex_state = 5},
  [224] = {.lex_state = 111, .external_lex_state = 8},
  [225] = {.lex_state = 111, .external_lex_state = 8},
  [226] = {.lex_state = 112, .external_lex_state = 4},
  [227] = {.lex_state = 113, .external_lex_state = 4},
  [228] = {.lex_state = 113, .external_lex_state = 9},
  [229] = {.lex_state = 113, .external_lex_state = 4},
  [230] = {.lex_state = 113, .external_lex_state = 4},
  [231] = {.lex_state = 113, .external_lex_state = 4},
  [232] = {.lex_state = 107, .external_lex_state = 5},
  [233] = {.lex_state = 107, .external_lex_state = 5},
  [234] = {.lex_state = 107, .external_lex_state = 5},
  [235] = {.lex_state = 111, .external_lex_state = 8},
  [236] = {.lex_state = 111, .external_lex_state = 8},
  [237] = {.lex_state = 113, .external_lex_state = 9},
  [238] = {.lex_state = 113, .external_lex_state = 4},
  [239] = {.lex_state = 107, .external_lex_state = 5},
  [240] = {.lex_state = 107, .external_lex_state = 5},
  [241] = {.lex_state = 107, .external_lex_state = 5},
  [242] = {.lex_state = 111, .external_lex_state = 8},
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
    [sym_priority_keyword] = STATE(11),
    [sym_declaration] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_source_file] = STATE(13),
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
    [sym_symbol] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(22),
    [sym_old_rule] = STATE(22),
    [sym_flags] = STATE(23),
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
    [sym_strict_actual] = STATE(25),
    [sym_symbol] = STATE(26),
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
    [sym_strict_actual] = STATE(31),
    [sym_symbol] = STATE(32),
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
    [sym_symbol] = STATE(34),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_priority_keyword] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_declaration] = STATE(36),
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
  [13] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym_declaration_repeat5] = STATE(43),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(77),
  },
  [22] = {
    [sym_symbol] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(45),
    [sym_old_rule] = STATE(45),
    [sym_flags] = STATE(23),
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
  [23] = {
    [sym_symbol] = STATE(46),
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(31),
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
    [sym_strict_actual] = STATE(49),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat3] = STATE(50),
    [sym_modifier] = STATE(51),
    [aux_sym_declaration_repeat5] = STATE(52),
    [sym_qid] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [sym_uid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_lid] = ACTIONS(31),
    [sym_attribute] = ACTIONS(87),
  },
  [26] = {
    [sym_qid] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [sym_attribute] = ACTIONS(89),
    [sym_uid] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(89),
    [sym_lid] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
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
    [sym_strict_actual] = STATE(61),
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(62),
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(101),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_header] = ACTIONS(89),
    [anon_sym_PERCENTstart] = ACTIONS(89),
    [anon_sym_PERCENTright] = ACTIONS(89),
    [sym_uid] = ACTIONS(89),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(89),
    [anon_sym_PERCENTparameter] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(89),
    [anon_sym_PERCENTtype] = ACTIONS(89),
    [anon_sym_PERCENTleft] = ACTIONS(89),
    [sym_lid] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym_qid] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(89),
    [anon_sym_PERCENTnonassoc] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_PERCENTtoken] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_strict_actual] = STATE(65),
    [sym_symbol] = STATE(32),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_symbol] = STATE(67),
    [aux_sym_declaration_repeat2] = STATE(67),
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
    [anon_sym_COMMA] = ACTIONS(107),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_symbol] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(68),
    [sym_old_rule] = STATE(68),
    [sym_flags] = STATE(23),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(79),
    [sym_new_rule] = ACTIONS(109),
    [sym_lid] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_priority_keyword] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_declaration] = STATE(36),
    [sym_header] = ACTIONS(111),
    [anon_sym_PERCENTstart] = ACTIONS(114),
    [anon_sym_PERCENTright] = ACTIONS(117),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(120),
    [anon_sym_PERCENTparameter] = ACTIONS(122),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(125),
    [anon_sym_PERCENTtype] = ACTIONS(128),
    [anon_sym_PERCENTleft] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(111),
    [anon_sym_PERCENTattribute] = ACTIONS(131),
    [anon_sym_PERCENTnonassoc] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_PERCENTtoken] = ACTIONS(134),
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
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(80),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(84),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [43] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(157),
  },
  [44] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_symbol] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(45),
    [sym_old_rule] = STATE(45),
    [sym_flags] = STATE(23),
    [sym_qid] = ACTIONS(161),
    [anon_sym_PERCENTpublic] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_uid] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(169),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(167),
    [sym_new_rule] = ACTIONS(172),
    [sym_lid] = ACTIONS(175),
    [sym_line_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_declaration_repeat5] = STATE(90),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(178),
  },
  [47] = {
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
  [48] = {
    [sym_strict_actual] = STATE(91),
    [sym_symbol] = STATE(26),
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_modifier] = STATE(51),
    [sym_qid] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_uid] = ACTIONS(182),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_lid] = ACTIONS(182),
    [sym_attribute] = ACTIONS(182),
  },
  [50] = {
    [sym_strict_actual] = STATE(49),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat3] = STATE(92),
    [aux_sym_declaration_repeat5] = STATE(93),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
    [sym_attribute] = ACTIONS(184),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(85),
  },
  [51] = {
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
  [52] = {
    [aux_sym_declaration_repeat5] = STATE(94),
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
    [sym_attribute] = ACTIONS(188),
  },
  [53] = {
    [sym_strict_actual] = STATE(95),
    [sym_symbol] = STATE(96),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [54] = {
    [aux_sym_declaration_repeat1] = STATE(97),
    [sym_terminal_alias_attrs] = STATE(97),
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
    [sym_attribute] = ACTIONS(192),
  },
  [56] = {
    [aux_sym_declaration_repeat5] = STATE(99),
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
    [sym_terminal_alias_attrs] = STATE(100),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
  },
  [58] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
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
  [60] = {
    [sym_strict_actual] = STATE(102),
    [sym_symbol] = STATE(32),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(182),
    [anon_sym_PERCENTstart] = ACTIONS(182),
    [anon_sym_PERCENTright] = ACTIONS(182),
    [sym_uid] = ACTIONS(182),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(182),
    [anon_sym_PERCENTparameter] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(101),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(182),
    [anon_sym_PERCENTtype] = ACTIONS(182),
    [anon_sym_PERCENTleft] = ACTIONS(182),
    [sym_lid] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_qid] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(182),
    [anon_sym_PERCENTattribute] = ACTIONS(182),
    [anon_sym_PERCENTnonassoc] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_PERCENTtoken] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_strict_actual] = STATE(61),
    [sym_symbol] = STATE(32),
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
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
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
    [sym_strict_actual] = STATE(104),
    [sym_symbol] = STATE(96),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_strict_actual] = STATE(61),
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(105),
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(137),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(137),
    [sym_uid] = ACTIONS(51),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(137),
    [anon_sym_PERCENTparameter] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(101),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(137),
    [anon_sym_PERCENTleft] = ACTIONS(137),
    [sym_lid] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [anon_sym_QMARK] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_symbol] = STATE(106),
    [sym_qid] = ACTIONS(51),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
  },
  [67] = {
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
    [anon_sym_COMMA] = ACTIONS(107),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(137),
    [anon_sym_PERCENTattribute] = ACTIONS(137),
    [anon_sym_PERCENTnonassoc] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_symbol] = STATE(21),
    [aux_sym_source_file_repeat2] = STATE(45),
    [sym_old_rule] = STATE(45),
    [sym_flags] = STATE(23),
    [sym_qid] = ACTIONS(31),
    [anon_sym_PERCENTpublic] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_postlude] = ACTIONS(196),
    [sym_new_rule] = ACTIONS(81),
    [sym_lid] = ACTIONS(43),
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
  [73] = {
    [sym_qid] = ACTIONS(208),
    [sym_uid] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(208),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_PERCENTprec] = ACTIONS(208),
    [sym_action] = ACTIONS(208),
    [sym_lid] = ACTIONS(208),
    [sym_line_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_precedence] = STATE(110),
    [sym_qid] = ACTIONS(210),
    [anon_sym_PERCENTpublic] = ACTIONS(210),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_uid] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_postlude] = ACTIONS(210),
    [sym_new_rule] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(212),
    [sym_line_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_symbol] = STATE(112),
    [sym_qid] = ACTIONS(216),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(216),
    [sym_line_comment] = ACTIONS(3),
  },
  [76] = {
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
    [anon_sym_EQ] = ACTIONS(218),
  },
  [77] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(220),
    [sym_line_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_uid] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(222),
    [sym_action] = ACTIONS(222),
    [sym_lid] = ACTIONS(222),
    [sym_qid] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym_ocaml_type] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(222),
  },
  [79] = {
    [aux_sym_old_rule_repeat3] = STATE(118),
    [aux_sym_declaration_repeat5] = STATE(119),
    [sym_modifier] = STATE(120),
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
  [80] = {
    [aux_sym_old_rule_repeat2] = STATE(121),
    [aux_sym_old_rule_repeat3] = STATE(122),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(234),
    [anon_sym_PERCENTpublic] = ACTIONS(234),
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_uid] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(236),
    [sym_postlude] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(238),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(238),
    [sym_line_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(124),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(220),
    [sym_line_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_producer] = STATE(125),
    [sym_symbol] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(125),
    [sym_high_prec_bar] = STATE(83),
    [sym_precedence] = STATE(126),
    [sym_actual] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(124),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(220),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_action] = ACTIONS(220),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_symbol] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(127),
    [sym_precedence] = STATE(128),
    [sym_actual] = STATE(79),
    [sym_producer] = STATE(127),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(240),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(240),
    [sym_action] = ACTIONS(240),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(129),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [85] = {
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
  [86] = {
    [aux_sym_old_rule_repeat1] = STATE(132),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(244),
    [sym_line_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(129),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(133),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_symbol] = STATE(134),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [89] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(248),
  },
  [90] = {
    [aux_sym_declaration_repeat5] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(157),
  },
  [91] = {
    [sym_modifier] = STATE(51),
    [sym_qid] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_uid] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(83),
    [sym_lid] = ACTIONS(255),
    [sym_attribute] = ACTIONS(255),
  },
  [92] = {
    [sym_strict_actual] = STATE(49),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat3] = STATE(92),
    [sym_qid] = ACTIONS(257),
    [sym_lid] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(260),
    [sym_uid] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(255),
  },
  [93] = {
    [aux_sym_declaration_repeat5] = STATE(94),
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
    [sym_attribute] = ACTIONS(188),
  },
  [94] = {
    [aux_sym_declaration_repeat5] = STATE(94),
    [sym_header] = ACTIONS(246),
    [anon_sym_PERCENTstart] = ACTIONS(246),
    [anon_sym_PERCENTright] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(246),
    [anon_sym_PERCENTparameter] = ACTIONS(246),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(246),
    [anon_sym_PERCENTtype] = ACTIONS(246),
    [anon_sym_PERCENTleft] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(246),
    [anon_sym_PERCENTattribute] = ACTIONS(246),
    [anon_sym_PERCENTnonassoc] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_PERCENTtoken] = ACTIONS(246),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(263),
  },
  [95] = {
    [aux_sym_strict_actual_repeat1] = STATE(140),
    [sym_modifier] = STATE(141),
    [anon_sym_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(266),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(266),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(270),
  },
  [96] = {
    [anon_sym_STAR] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [97] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
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
  [98] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(274),
    [anon_sym_PERCENTstart] = ACTIONS(274),
    [anon_sym_PERCENTright] = ACTIONS(274),
    [sym_uid] = ACTIONS(274),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(274),
    [anon_sym_PERCENTparameter] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(274),
    [anon_sym_PERCENTtype] = ACTIONS(274),
    [anon_sym_PERCENTleft] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(274),
    [anon_sym_PERCENTattribute] = ACTIONS(274),
    [anon_sym_PERCENTnonassoc] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_PERCENTtoken] = ACTIONS(274),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(194),
  },
  [99] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(246),
    [anon_sym_PERCENTstart] = ACTIONS(246),
    [anon_sym_PERCENTright] = ACTIONS(246),
    [sym_uid] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(246),
    [anon_sym_PERCENTparameter] = ACTIONS(246),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(246),
    [anon_sym_PERCENTtype] = ACTIONS(246),
    [anon_sym_PERCENTleft] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(246),
    [anon_sym_PERCENTattribute] = ACTIONS(246),
    [anon_sym_PERCENTnonassoc] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_PERCENTtoken] = ACTIONS(246),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(276),
  },
  [100] = {
    [sym_header] = ACTIONS(279),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [sym_uid] = ACTIONS(279),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(279),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(3),
  },
  [101] = {
    [aux_sym_declaration_repeat1] = STATE(101),
    [sym_terminal_alias_attrs] = STATE(101),
    [sym_header] = ACTIONS(279),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [sym_uid] = ACTIONS(281),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(279),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_modifier] = STATE(63),
    [sym_header] = ACTIONS(255),
    [anon_sym_PERCENTstart] = ACTIONS(255),
    [anon_sym_PERCENTright] = ACTIONS(255),
    [sym_uid] = ACTIONS(255),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(255),
    [anon_sym_PERCENTparameter] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(101),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(255),
    [anon_sym_PERCENTtype] = ACTIONS(255),
    [anon_sym_PERCENTleft] = ACTIONS(255),
    [sym_lid] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_qid] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(255),
    [anon_sym_PERCENTattribute] = ACTIONS(255),
    [anon_sym_PERCENTnonassoc] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_PERCENTtoken] = ACTIONS(255),
    [anon_sym_QMARK] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
  },
  [103] = {
    [sym_strict_actual] = STATE(61),
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(103),
    [sym_header] = ACTIONS(255),
    [anon_sym_PERCENTstart] = ACTIONS(255),
    [anon_sym_PERCENTright] = ACTIONS(255),
    [sym_uid] = ACTIONS(287),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(255),
    [anon_sym_PERCENTparameter] = ACTIONS(255),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(255),
    [anon_sym_PERCENTtype] = ACTIONS(255),
    [anon_sym_PERCENTleft] = ACTIONS(255),
    [sym_lid] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_qid] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(255),
    [anon_sym_PERCENTattribute] = ACTIONS(255),
    [anon_sym_PERCENTnonassoc] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_PERCENTtoken] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(3),
  },
  [104] = {
    [aux_sym_strict_actual_repeat1] = STATE(144),
    [sym_modifier] = STATE(141),
    [anon_sym_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(266),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(266),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(293),
  },
  [105] = {
    [sym_strict_actual] = STATE(61),
    [sym_symbol] = STATE(32),
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
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
    [sym_line_comment] = ACTIONS(3),
  },
  [106] = {
    [sym_header] = ACTIONS(295),
    [anon_sym_PERCENTstart] = ACTIONS(295),
    [anon_sym_PERCENTright] = ACTIONS(295),
    [sym_uid] = ACTIONS(295),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(295),
    [anon_sym_PERCENTparameter] = ACTIONS(295),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(295),
    [anon_sym_PERCENTtype] = ACTIONS(295),
    [anon_sym_PERCENTleft] = ACTIONS(295),
    [sym_lid] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_qid] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(295),
    [anon_sym_PERCENTattribute] = ACTIONS(295),
    [anon_sym_PERCENTnonassoc] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_PERCENTtoken] = ACTIONS(295),
    [sym_line_comment] = ACTIONS(3),
  },
  [107] = {
    [sym_symbol] = STATE(107),
    [aux_sym_declaration_repeat2] = STATE(107),
    [sym_header] = ACTIONS(295),
    [anon_sym_PERCENTstart] = ACTIONS(295),
    [anon_sym_PERCENTright] = ACTIONS(295),
    [sym_uid] = ACTIONS(297),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(295),
    [anon_sym_PERCENTparameter] = ACTIONS(295),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(295),
    [anon_sym_PERCENTtype] = ACTIONS(295),
    [anon_sym_PERCENTleft] = ACTIONS(295),
    [sym_lid] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(300),
    [sym_qid] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(295),
    [anon_sym_PERCENTattribute] = ACTIONS(295),
    [anon_sym_PERCENTnonassoc] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_PERCENTtoken] = ACTIONS(295),
    [sym_line_comment] = ACTIONS(3),
  },
  [108] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [109] = {
    [sym_symbol] = STATE(146),
    [sym_qid] = ACTIONS(305),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(305),
    [sym_line_comment] = ACTIONS(3),
  },
  [110] = {
    [sym_qid] = ACTIONS(307),
    [anon_sym_PERCENTpublic] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_uid] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [sym_postlude] = ACTIONS(307),
    [sym_new_rule] = ACTIONS(309),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(3),
  },
  [111] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_action] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(311),
    [sym_action] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(3),
  },
  [113] = {
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(147),
    [sym_qid] = ACTIONS(141),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(3),
  },
  [114] = {
    [sym_precedence] = STATE(148),
    [sym_qid] = ACTIONS(307),
    [anon_sym_PERCENTpublic] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_uid] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [sym_postlude] = ACTIONS(307),
    [sym_new_rule] = ACTIONS(309),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(313),
    [sym_action] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(316),
    [sym_line_comment] = ACTIONS(3),
  },
  [116] = {
    [sym_producer] = STATE(158),
    [sym_symbol] = STATE(153),
    [sym_actual] = STATE(154),
    [sym_lax_actual] = STATE(155),
    [sym_production_group] = STATE(156),
    [sym_precedence] = STATE(157),
    [aux_sym_production_group_repeat1] = STATE(158),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(152),
    [sym_qid] = ACTIONS(318),
    [sym_uid] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(320),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(320),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(3),
  },
  [117] = {
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
  [118] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(324),
    [sym_uid] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_PERCENTprec] = ACTIONS(324),
    [sym_action] = ACTIONS(324),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(324),
    [sym_line_comment] = ACTIONS(3),
  },
  [119] = {
    [aux_sym_old_rule_repeat3] = STATE(160),
    [aux_sym_declaration_repeat5] = STATE(161),
    [sym_qid] = ACTIONS(324),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_PERCENTprec] = ACTIONS(324),
    [sym_action] = ACTIONS(324),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(324),
    [sym_attribute] = ACTIONS(330),
  },
  [120] = {
    [sym_uid] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(332),
    [sym_action] = ACTIONS(332),
    [sym_lid] = ACTIONS(332),
    [sym_qid] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(332),
  },
  [121] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(334),
    [anon_sym_PERCENTpublic] = ACTIONS(334),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_uid] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(336),
    [sym_postlude] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(338),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(338),
    [sym_line_comment] = ACTIONS(3),
  },
  [122] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(334),
    [anon_sym_PERCENTpublic] = ACTIONS(334),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_uid] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(334),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(338),
    [sym_lid] = ACTIONS(338),
    [sym_line_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(165),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [124] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(342),
    [sym_line_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_symbol] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(125),
    [sym_actual] = STATE(79),
    [sym_producer] = STATE(125),
    [sym_qid] = ACTIONS(344),
    [sym_uid] = ACTIONS(344),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(347),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PERCENTprec] = ACTIONS(347),
    [sym_action] = ACTIONS(347),
    [sym_lid] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(3),
  },
  [126] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(167),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(342),
    [sym_line_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_symbol] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(125),
    [sym_precedence] = STATE(168),
    [sym_actual] = STATE(79),
    [sym_producer] = STATE(125),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(316),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(316),
    [sym_action] = ACTIONS(316),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [128] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(316),
    [sym_action] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(316),
    [sym_line_comment] = ACTIONS(3),
  },
  [129] = {
    [aux_sym_old_rule_repeat2] = STATE(169),
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(334),
    [anon_sym_PERCENTpublic] = ACTIONS(334),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_uid] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(336),
    [sym_postlude] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(338),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(338),
    [sym_line_comment] = ACTIONS(3),
  },
  [130] = {
    [sym_symbol] = STATE(170),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [131] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(352),
    [sym_line_comment] = ACTIONS(3),
  },
  [132] = {
    [aux_sym_old_rule_repeat1] = STATE(173),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(354),
    [sym_line_comment] = ACTIONS(3),
  },
  [133] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(174),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [134] = {
    [aux_sym_old_rule_repeat1] = STATE(175),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(354),
    [sym_line_comment] = ACTIONS(3),
  },
  [135] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(174),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(176),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [136] = {
    [sym_symbol] = STATE(177),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [137] = {
    [anon_sym_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(180),
  },
  [138] = {
    [sym_strict_actual] = STATE(178),
    [sym_symbol] = STATE(96),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [139] = {
    [sym_qid] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [sym_attribute] = ACTIONS(356),
    [sym_uid] = ACTIONS(356),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(356),
    [sym_lid] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(356),
  },
  [140] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_line_comment] = ACTIONS(3),
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
    [sym_strict_actual] = STATE(181),
    [sym_symbol] = STATE(96),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [143] = {
    [sym_header] = ACTIONS(356),
    [anon_sym_PERCENTstart] = ACTIONS(356),
    [anon_sym_PERCENTright] = ACTIONS(356),
    [sym_uid] = ACTIONS(356),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(356),
    [anon_sym_PERCENTparameter] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(356),
    [anon_sym_PERCENTtype] = ACTIONS(356),
    [anon_sym_PERCENTleft] = ACTIONS(356),
    [sym_lid] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_qid] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(356),
    [anon_sym_PERCENTattribute] = ACTIONS(356),
    [anon_sym_PERCENTnonassoc] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_PERCENTtoken] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [sym_line_comment] = ACTIONS(3),
  },
  [144] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(360),
    [sym_line_comment] = ACTIONS(3),
  },
  [145] = {
    [sym_qid] = ACTIONS(65),
    [anon_sym_PERCENTpublic] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_uid] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_postlude] = ACTIONS(65),
    [sym_new_rule] = ACTIONS(362),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(362),
    [sym_line_comment] = ACTIONS(3),
  },
  [146] = {
    [sym_qid] = ACTIONS(311),
    [anon_sym_PERCENTpublic] = ACTIONS(311),
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_uid] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [sym_postlude] = ACTIONS(311),
    [sym_new_rule] = ACTIONS(364),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(364),
    [sym_line_comment] = ACTIONS(3),
  },
  [147] = {
    [aux_sym_old_rule_repeat3] = STATE(183),
    [aux_sym_declaration_repeat5] = STATE(184),
    [sym_modifier] = STATE(120),
    [sym_uid] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(228),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(366),
    [sym_action] = ACTIONS(366),
    [sym_lid] = ACTIONS(366),
    [sym_qid] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_QMARK] = ACTIONS(228),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(370),
  },
  [148] = {
    [sym_qid] = ACTIONS(372),
    [anon_sym_PERCENTpublic] = ACTIONS(372),
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym_uid] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [sym_postlude] = ACTIONS(372),
    [sym_new_rule] = ACTIONS(374),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(374),
    [sym_line_comment] = ACTIONS(3),
  },
  [149] = {
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
  [150] = {
    [sym_precedence] = STATE(186),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_COMMA2] = ACTIONS(210),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_line_comment] = ACTIONS(3),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(218),
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
  [152] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(378),
    [sym_line_comment] = ACTIONS(3),
  },
  [153] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(380),
    [anon_sym_PERCENTprec] = ACTIONS(222),
    [sym_action] = ACTIONS(222),
    [sym_lid] = ACTIONS(222),
    [sym_qid] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(382),
    [sym_ocaml_type] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(380),
    [sym_attribute] = ACTIONS(222),
  },
  [154] = {
    [aux_sym_old_rule_repeat3] = STATE(118),
    [aux_sym_declaration_repeat5] = STATE(119),
    [sym_modifier] = STATE(190),
    [sym_uid] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(384),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(226),
    [sym_action] = ACTIONS(226),
    [sym_lid] = ACTIONS(226),
    [sym_qid] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(384),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(232),
  },
  [155] = {
    [aux_sym_actual_repeat1] = STATE(193),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_line_comment] = ACTIONS(3),
  },
  [156] = {
    [aux_sym_old_rule_repeat2] = STATE(194),
    [sym_high_prec_bar] = STATE(195),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(380),
    [sym_line_comment] = ACTIONS(3),
  },
  [157] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(196),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(378),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(378),
    [sym_line_comment] = ACTIONS(3),
  },
  [158] = {
    [sym_producer] = STATE(125),
    [sym_symbol] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(125),
    [sym_high_prec_bar] = STATE(83),
    [sym_precedence] = STATE(197),
    [sym_actual] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(196),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(378),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_action] = ACTIONS(378),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [159] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(390),
    [sym_uid] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_PERCENTprec] = ACTIONS(390),
    [sym_action] = ACTIONS(390),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(390),
    [sym_line_comment] = ACTIONS(3),
  },
  [160] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(366),
    [sym_uid] = ACTIONS(366),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_PERCENTprec] = ACTIONS(366),
    [sym_action] = ACTIONS(366),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(366),
    [sym_line_comment] = ACTIONS(3),
  },
  [161] = {
    [aux_sym_declaration_repeat5] = STATE(161),
    [sym_qid] = ACTIONS(246),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_PERCENTprec] = ACTIONS(246),
    [sym_action] = ACTIONS(246),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(246),
    [sym_attribute] = ACTIONS(395),
  },
  [162] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(398),
    [anon_sym_PERCENTpublic] = ACTIONS(398),
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym_uid] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(400),
    [sym_postlude] = ACTIONS(398),
    [sym_new_rule] = ACTIONS(403),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(403),
    [sym_line_comment] = ACTIONS(3),
  },
  [163] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(405),
    [anon_sym_PERCENTpublic] = ACTIONS(405),
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_uid] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(405),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(407),
    [sym_lid] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(3),
  },
  [164] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(390),
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_uid] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(409),
    [sym_postlude] = ACTIONS(390),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(412),
    [sym_lid] = ACTIONS(412),
    [sym_line_comment] = ACTIONS(3),
  },
  [165] = {
    [sym_qid] = ACTIONS(398),
    [anon_sym_PERCENTpublic] = ACTIONS(398),
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym_uid] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [sym_postlude] = ACTIONS(398),
    [sym_new_rule] = ACTIONS(403),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(403),
    [sym_line_comment] = ACTIONS(3),
  },
  [166] = {
    [sym_precedence] = STATE(198),
    [sym_qid] = ACTIONS(372),
    [anon_sym_PERCENTpublic] = ACTIONS(372),
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym_uid] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [sym_postlude] = ACTIONS(372),
    [sym_new_rule] = ACTIONS(374),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(374),
    [sym_line_comment] = ACTIONS(3),
  },
  [167] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(414),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(414),
    [sym_line_comment] = ACTIONS(3),
  },
  [168] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(416),
    [sym_action] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(416),
    [sym_line_comment] = ACTIONS(3),
  },
  [169] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(200),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(405),
    [anon_sym_PERCENTpublic] = ACTIONS(405),
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_uid] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_postlude] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(3),
  },
  [170] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_line_comment] = ACTIONS(3),
  },
  [171] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(201),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(202),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [172] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(422),
    [sym_line_comment] = ACTIONS(3),
  },
  [173] = {
    [aux_sym_old_rule_repeat1] = STATE(173),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_line_comment] = ACTIONS(3),
  },
  [174] = {
    [aux_sym_old_rule_repeat2] = STATE(204),
    [aux_sym_old_rule_repeat3] = STATE(200),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(405),
    [anon_sym_PERCENTpublic] = ACTIONS(405),
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_uid] = ACTIONS(405),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_postlude] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(3),
  },
  [175] = {
    [aux_sym_old_rule_repeat1] = STATE(173),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_line_comment] = ACTIONS(3),
  },
  [176] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(201),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym_old_rule_repeat1] = STATE(206),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_line_comment] = ACTIONS(3),
  },
  [178] = {
    [sym_modifier] = STATE(141),
    [anon_sym_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(266),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(429),
    [anon_sym_QMARK] = ACTIONS(266),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(429),
  },
  [179] = {
    [sym_qid] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [sym_attribute] = ACTIONS(431),
    [sym_uid] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(431),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(431),
    [sym_lid] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
  },
  [180] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym_line_comment] = ACTIONS(3),
  },
  [181] = {
    [aux_sym_strict_actual_repeat1] = STATE(208),
    [sym_modifier] = STATE(141),
    [anon_sym_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(266),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(266),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(436),
  },
  [182] = {
    [sym_header] = ACTIONS(431),
    [anon_sym_PERCENTstart] = ACTIONS(431),
    [anon_sym_PERCENTright] = ACTIONS(431),
    [sym_uid] = ACTIONS(431),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(431),
    [anon_sym_PERCENTparameter] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(431),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(431),
    [anon_sym_PERCENTtype] = ACTIONS(431),
    [anon_sym_PERCENTleft] = ACTIONS(431),
    [sym_lid] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [sym_qid] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [sym_grammar_attribute] = ACTIONS(431),
    [anon_sym_PERCENTattribute] = ACTIONS(431),
    [anon_sym_PERCENTnonassoc] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_PERCENTtoken] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(3),
  },
  [183] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(438),
    [sym_uid] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PERCENTprec] = ACTIONS(438),
    [sym_action] = ACTIONS(438),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(438),
    [sym_line_comment] = ACTIONS(3),
  },
  [184] = {
    [aux_sym_old_rule_repeat3] = STATE(209),
    [aux_sym_declaration_repeat5] = STATE(161),
    [sym_qid] = ACTIONS(438),
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PERCENTprec] = ACTIONS(438),
    [sym_action] = ACTIONS(438),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(438),
    [sym_attribute] = ACTIONS(330),
  },
  [185] = {
    [sym_symbol] = STATE(210),
    [sym_qid] = ACTIONS(151),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(151),
    [sym_line_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_COMMA2] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(307),
    [sym_line_comment] = ACTIONS(3),
  },
  [187] = {
    [sym_precedence] = STATE(211),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_COMMA2] = ACTIONS(307),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(307),
    [sym_line_comment] = ACTIONS(3),
  },
  [188] = {
    [sym_producer] = STATE(158),
    [sym_symbol] = STATE(153),
    [sym_actual] = STATE(154),
    [sym_lax_actual] = STATE(212),
    [sym_production_group] = STATE(156),
    [sym_precedence] = STATE(157),
    [aux_sym_production_group_repeat1] = STATE(158),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(152),
    [sym_qid] = ACTIONS(318),
    [sym_uid] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(320),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(320),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(3),
  },
  [189] = {
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
  [190] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(442),
    [anon_sym_PERCENTprec] = ACTIONS(332),
    [sym_action] = ACTIONS(332),
    [sym_lid] = ACTIONS(332),
    [sym_qid] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_attribute] = ACTIONS(332),
  },
  [191] = {
    [sym_producer] = STATE(158),
    [sym_symbol] = STATE(153),
    [sym_actual] = STATE(154),
    [sym_lax_actual] = STATE(213),
    [sym_production_group] = STATE(156),
    [sym_precedence] = STATE(157),
    [aux_sym_production_group_repeat1] = STATE(158),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(152),
    [sym_qid] = ACTIONS(318),
    [sym_uid] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(320),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(320),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(3),
  },
  [192] = {
    [sym_uid] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(444),
    [sym_action] = ACTIONS(444),
    [sym_lid] = ACTIONS(444),
    [sym_qid] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(444),
  },
  [193] = {
    [aux_sym_actual_repeat1] = STATE(215),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_line_comment] = ACTIONS(3),
  },
  [194] = {
    [aux_sym_old_rule_repeat2] = STATE(216),
    [sym_high_prec_bar] = STATE(195),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_line_comment] = ACTIONS(3),
  },
  [195] = {
    [sym_producer] = STATE(158),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(217),
    [sym_precedence] = STATE(157),
    [aux_sym_production_group_repeat1] = STATE(158),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(152),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(320),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(320),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [196] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(448),
    [sym_line_comment] = ACTIONS(3),
  },
  [197] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(219),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(448),
    [sym_line_comment] = ACTIONS(3),
  },
  [198] = {
    [sym_qid] = ACTIONS(450),
    [anon_sym_PERCENTpublic] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_uid] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
    [sym_postlude] = ACTIONS(450),
    [sym_new_rule] = ACTIONS(452),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(452),
    [sym_line_comment] = ACTIONS(3),
  },
  [199] = {
    [sym_precedence] = STATE(220),
    [sym_qid] = ACTIONS(450),
    [anon_sym_PERCENTpublic] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_uid] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
    [sym_postlude] = ACTIONS(450),
    [sym_new_rule] = ACTIONS(452),
    [anon_sym_PERCENTprec] = ACTIONS(214),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(452),
    [sym_line_comment] = ACTIONS(3),
  },
  [200] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(454),
    [anon_sym_PERCENTpublic] = ACTIONS(454),
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_uid] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(454),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(456),
    [sym_lid] = ACTIONS(456),
    [sym_line_comment] = ACTIONS(3),
  },
  [201] = {
    [aux_sym_old_rule_repeat2] = STATE(221),
    [aux_sym_old_rule_repeat3] = STATE(222),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(454),
    [anon_sym_PERCENTpublic] = ACTIONS(454),
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_uid] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(458),
    [sym_postlude] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(456),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(456),
    [sym_line_comment] = ACTIONS(3),
  },
  [202] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(223),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [203] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(223),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(224),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [204] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(222),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(454),
    [anon_sym_PERCENTpublic] = ACTIONS(454),
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_uid] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(458),
    [sym_postlude] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(456),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(456),
    [sym_line_comment] = ACTIONS(3),
  },
  [205] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(460),
    [sym_line_comment] = ACTIONS(3),
  },
  [206] = {
    [aux_sym_old_rule_repeat1] = STATE(173),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(462),
    [sym_line_comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(356),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(356),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(356),
  },
  [208] = {
    [aux_sym_strict_actual_repeat1] = STATE(180),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_line_comment] = ACTIONS(3),
  },
  [209] = {
    [aux_sym_old_rule_repeat3] = STATE(159),
    [sym_qid] = ACTIONS(466),
    [sym_uid] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_PERCENTprec] = ACTIONS(466),
    [sym_action] = ACTIONS(466),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(466),
    [sym_line_comment] = ACTIONS(3),
  },
  [210] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_COMMA2] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_line_comment] = ACTIONS(3),
  },
  [211] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_COMMA2] = ACTIONS(372),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_line_comment] = ACTIONS(3),
  },
  [212] = {
    [aux_sym_actual_repeat1] = STATE(229),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_line_comment] = ACTIONS(3),
  },
  [213] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_line_comment] = ACTIONS(3),
  },
  [214] = {
    [sym_uid] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(472),
    [sym_action] = ACTIONS(472),
    [sym_lid] = ACTIONS(472),
    [sym_qid] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [sym_line_comment] = ACTIONS(3),
    [sym_attribute] = ACTIONS(472),
  },
  [215] = {
    [aux_sym_actual_repeat1] = STATE(215),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_line_comment] = ACTIONS(3),
  },
  [216] = {
    [aux_sym_old_rule_repeat2] = STATE(216),
    [sym_high_prec_bar] = STATE(195),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_COMMA2] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_line_comment] = ACTIONS(3),
  },
  [217] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_COMMA2] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_line_comment] = ACTIONS(3),
  },
  [218] = {
    [sym_precedence] = STATE(230),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_COMMA2] = ACTIONS(372),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_line_comment] = ACTIONS(3),
  },
  [219] = {
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(115),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(477),
    [sym_line_comment] = ACTIONS(3),
  },
  [220] = {
    [sym_qid] = ACTIONS(479),
    [anon_sym_PERCENTpublic] = ACTIONS(479),
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_uid] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [sym_postlude] = ACTIONS(479),
    [sym_new_rule] = ACTIONS(481),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(481),
    [sym_line_comment] = ACTIONS(3),
  },
  [221] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(232),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_postlude] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(487),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(3),
  },
  [222] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(483),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(487),
    [sym_lid] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(3),
  },
  [223] = {
    [aux_sym_old_rule_repeat2] = STATE(233),
    [aux_sym_old_rule_repeat3] = STATE(232),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_postlude] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(487),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(3),
  },
  [224] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(234),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [225] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(234),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(235),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [226] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(489),
    [sym_line_comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_STAR] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(431),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(431),
  },
  [228] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(491),
    [anon_sym_PERCENTprec] = ACTIONS(444),
    [sym_action] = ACTIONS(444),
    [sym_lid] = ACTIONS(444),
    [sym_qid] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(491),
    [sym_attribute] = ACTIONS(444),
  },
  [229] = {
    [aux_sym_actual_repeat1] = STATE(215),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(386),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_line_comment] = ACTIONS(3),
  },
  [230] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_COMMA2] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_line_comment] = ACTIONS(3),
  },
  [231] = {
    [sym_precedence] = STATE(238),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_COMMA2] = ACTIONS(450),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_line_comment] = ACTIONS(3),
  },
  [232] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(495),
    [anon_sym_PERCENTpublic] = ACTIONS(495),
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_uid] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(495),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(497),
    [sym_lid] = ACTIONS(497),
    [sym_line_comment] = ACTIONS(3),
  },
  [233] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(239),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(495),
    [anon_sym_PERCENTpublic] = ACTIONS(495),
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_uid] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_postlude] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(497),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(497),
    [sym_line_comment] = ACTIONS(3),
  },
  [234] = {
    [aux_sym_old_rule_repeat2] = STATE(240),
    [aux_sym_old_rule_repeat3] = STATE(239),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(495),
    [anon_sym_PERCENTpublic] = ACTIONS(495),
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_uid] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_postlude] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(497),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(497),
    [sym_line_comment] = ACTIONS(3),
  },
  [235] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(241),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [236] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(241),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [sym_low_prec_bar] = STATE(242),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [237] = {
    [sym_line_comment] = ACTIONS(3),
    [sym_uid] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_COMMA2] = ACTIONS(501),
    [anon_sym_PERCENTprec] = ACTIONS(472),
    [sym_action] = ACTIONS(472),
    [sym_lid] = ACTIONS(472),
    [sym_qid] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(501),
    [sym_attribute] = ACTIONS(472),
  },
  [238] = {
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_COMMA2] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_line_comment] = ACTIONS(3),
  },
  [239] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(503),
    [anon_sym_PERCENTpublic] = ACTIONS(503),
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_uid] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(503),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(505),
    [sym_lid] = ACTIONS(505),
    [sym_line_comment] = ACTIONS(3),
  },
  [240] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(243),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(503),
    [anon_sym_PERCENTpublic] = ACTIONS(503),
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_uid] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_postlude] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(505),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(505),
    [sym_line_comment] = ACTIONS(3),
  },
  [241] = {
    [aux_sym_old_rule_repeat2] = STATE(244),
    [aux_sym_old_rule_repeat3] = STATE(243),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(503),
    [anon_sym_PERCENTpublic] = ACTIONS(503),
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_uid] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_postlude] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(505),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(505),
    [sym_line_comment] = ACTIONS(3),
  },
  [242] = {
    [sym_producer] = STATE(82),
    [sym_symbol] = STATE(78),
    [sym_actual] = STATE(79),
    [sym_production_group] = STATE(245),
    [sym_precedence] = STATE(81),
    [aux_sym_production_group_repeat1] = STATE(82),
    [sym_high_prec_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(77),
    [sym_qid] = ACTIONS(141),
    [sym_uid] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym_ocaml_type] = ACTIONS(143),
    [sym_ocaml_comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_action] = ACTIONS(143),
    [anon_sym_PERCENTprec] = ACTIONS(147),
    [sym_lid] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
  },
  [243] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(509),
    [anon_sym_PERCENTpublic] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_uid] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(509),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(511),
    [sym_lid] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(3),
  },
  [244] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(246),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(509),
    [anon_sym_PERCENTpublic] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_uid] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_postlude] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(511),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(3),
  },
  [245] = {
    [aux_sym_old_rule_repeat2] = STATE(247),
    [aux_sym_old_rule_repeat3] = STATE(246),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(509),
    [anon_sym_PERCENTpublic] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_uid] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_postlude] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(511),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(3),
  },
  [246] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(515),
    [anon_sym_PERCENTpublic] = ACTIONS(515),
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_uid] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(515),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(517),
    [sym_lid] = ACTIONS(517),
    [sym_line_comment] = ACTIONS(3),
  },
  [247] = {
    [aux_sym_old_rule_repeat2] = STATE(162),
    [aux_sym_old_rule_repeat3] = STATE(248),
    [sym_high_prec_bar] = STATE(123),
    [sym_qid] = ACTIONS(515),
    [anon_sym_PERCENTpublic] = ACTIONS(515),
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_uid] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym_postlude] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_new_rule] = ACTIONS(517),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_lid] = ACTIONS(517),
    [sym_line_comment] = ACTIONS(3),
  },
  [248] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_qid] = ACTIONS(521),
    [anon_sym_PERCENTpublic] = ACTIONS(521),
    [ts_builtin_sym_end] = ACTIONS(521),
    [sym_uid] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTinline] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_postlude] = ACTIONS(521),
    [sym_ocaml_comment] = ACTIONS(3),
    [sym_new_rule] = ACTIONS(523),
    [sym_lid] = ACTIONS(523),
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
  [41] = {.count = 1, .reusable = false}, SHIFT(22),
  [43] = {.count = 1, .reusable = false}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true}, SHIFT(35),
  [57] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(40),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(41),
  [75] = {.count = 1, .reusable = true}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, SHIFT(43),
  [79] = {.count = 1, .reusable = true}, SHIFT(44),
  [81] = {.count = 1, .reusable = false}, SHIFT(45),
  [83] = {.count = 1, .reusable = true}, SHIFT(47),
  [85] = {.count = 1, .reusable = true}, SHIFT(48),
  [87] = {.count = 1, .reusable = true}, SHIFT(52),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(53),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, SHIFT(56),
  [99] = {.count = 1, .reusable = true}, SHIFT(57),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, SHIFT(64),
  [107] = {.count = 1, .reusable = true}, SHIFT(66),
  [109] = {.count = 1, .reusable = false}, SHIFT(68),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, SHIFT(74),
  [145] = {.count = 1, .reusable = true}, SHIFT(73),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(76),
  [151] = {.count = 1, .reusable = true}, SHIFT(85),
  [153] = {.count = 1, .reusable = true}, SHIFT(87),
  [155] = {.count = 1, .reusable = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(18),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(45),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [178] = {.count = 1, .reusable = true}, SHIFT(90),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(93),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(94),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(98),
  [194] = {.count = 1, .reusable = true}, SHIFT(99),
  [196] = {.count = 1, .reusable = true}, SHIFT(108),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [200] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(38),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_high_prec_bar, 1),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [214] = {.count = 1, .reusable = true}, SHIFT(109),
  [216] = {.count = 1, .reusable = true}, SHIFT(111),
  [218] = {.count = 1, .reusable = true}, SHIFT(113),
  [220] = {.count = 1, .reusable = true}, SHIFT(114),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [224] = {.count = 1, .reusable = true}, SHIFT(116),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(117),
  [230] = {.count = 1, .reusable = true}, SHIFT(118),
  [232] = {.count = 1, .reusable = true}, SHIFT(119),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [236] = {.count = 1, .reusable = true}, SHIFT(122),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [242] = {.count = 1, .reusable = true}, SHIFT(130),
  [244] = {.count = 1, .reusable = true}, SHIFT(131),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(89),
  [251] = {.count = 1, .reusable = true}, SHIFT(135),
  [253] = {.count = 1, .reusable = true}, SHIFT(136),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(17),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(48),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(94),
  [266] = {.count = 1, .reusable = true}, SHIFT(137),
  [268] = {.count = 1, .reusable = true}, SHIFT(138),
  [270] = {.count = 1, .reusable = true}, SHIFT(139),
  [272] = {.count = 1, .reusable = true}, SHIFT(142),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(99),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(57),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(30),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(60),
  [293] = {.count = 1, .reusable = true}, SHIFT(143),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(30),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(66),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [305] = {.count = 1, .reusable = true}, SHIFT(145),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(73),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [318] = {.count = 1, .reusable = true}, SHIFT(149),
  [320] = {.count = 1, .reusable = true}, SHIFT(150),
  [322] = {.count = 1, .reusable = true}, SHIFT(151),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [326] = {.count = 1, .reusable = true}, SHIFT(159),
  [328] = {.count = 1, .reusable = true}, SHIFT(160),
  [330] = {.count = 1, .reusable = true}, SHIFT(161),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [336] = {.count = 1, .reusable = true}, SHIFT(163),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [340] = {.count = 1, .reusable = true}, SHIFT(164),
  [342] = {.count = 1, .reusable = true}, SHIFT(166),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(72),
  [347] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(76),
  [352] = {.count = 1, .reusable = true}, SHIFT(171),
  [354] = {.count = 1, .reusable = true}, SHIFT(172),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [358] = {.count = 1, .reusable = true}, SHIFT(179),
  [360] = {.count = 1, .reusable = true}, SHIFT(182),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [368] = {.count = 1, .reusable = true}, SHIFT(183),
  [370] = {.count = 1, .reusable = true}, SHIFT(184),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [376] = {.count = 1, .reusable = true}, SHIFT(185),
  [378] = {.count = 1, .reusable = true}, SHIFT(187),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [382] = {.count = 1, .reusable = true}, SHIFT(188),
  [384] = {.count = 1, .reusable = true}, SHIFT(189),
  [386] = {.count = 1, .reusable = true}, SHIFT(191),
  [388] = {.count = 1, .reusable = true}, SHIFT(192),
  [390] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(159),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(161),
  [398] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(73),
  [403] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(164),
  [412] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [414] = {.count = 1, .reusable = true}, SHIFT(199),
  [416] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(200),
  [420] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [422] = {.count = 1, .reusable = true}, SHIFT(203),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(130),
  [427] = {.count = 1, .reusable = true}, SHIFT(205),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(138),
  [436] = {.count = 1, .reusable = true}, SHIFT(207),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [440] = {.count = 1, .reusable = true}, SHIFT(209),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [446] = {.count = 1, .reusable = true}, SHIFT(214),
  [448] = {.count = 1, .reusable = true}, SHIFT(218),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [458] = {.count = 1, .reusable = true}, SHIFT(222),
  [460] = {.count = 1, .reusable = true}, SHIFT(225),
  [462] = {.count = 1, .reusable = true}, SHIFT(226),
  [464] = {.count = 1, .reusable = true}, SHIFT(227),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [468] = {.count = 1, .reusable = true}, SHIFT(228),
  [470] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(191),
  [477] = {.count = 1, .reusable = true}, SHIFT(231),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [485] = {.count = 1, .reusable = true}, SHIFT(232),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [489] = {.count = 1, .reusable = true}, SHIFT(236),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [493] = {.count = 1, .reusable = true}, SHIFT(237),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [499] = {.count = 1, .reusable = true}, SHIFT(239),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [507] = {.count = 1, .reusable = true}, SHIFT(243),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [513] = {.count = 1, .reusable = true}, SHIFT(246),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [519] = {.count = 1, .reusable = true}, SHIFT(248),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
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
