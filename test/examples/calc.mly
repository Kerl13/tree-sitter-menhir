%{
  type expr =
    | Int of int
    | Add of expr * expr
    | Mul of expr * expr

  let rec eval = function
    | Int n -> n
    | Add (e1, e2) -> eval e1 + eval e2
    | Mul (e1, e2) -> eval e1 * eval e2
%}

%token <int> INT
%token PLUS TIMES LPAREN RPAREN EOF
%start <expr> main

%%

main:
  | e = expr EOF { e }

expr:
  | e1 = expr PLUS e2 = term { Add (e1, e2) }
  | t = term { t }

term:
  | t1 = term TIMES t2 = factor { Mul (t1, t2) }
  | f = factor { f }

factor:
  | n = INT { Int n }
  | LPAREN e = expr RPAREN { e }
