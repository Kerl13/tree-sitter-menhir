(* An ambiguous expression grammar for Menhir's GLR back-end
   (menhir --GLR). It shows the syntax that tree-sitter-menhir 0.6.0
   learnt to parse. *)

%{
  (* A type variable just before a closing brace. *)
  type 'a located = { value : 'a; loc : Lexing.position * Lexing.position}

  type expr =
    | Int of int
    | Add of expr located * expr located
    | Neg of expr located
    | Amb of expr located * expr located

  let rec eval e =
    match e.value with
    | Int i -> i
    | Add (e1, e2) -> eval e1 + eval e2
    | Neg e -> - eval e
    | Amb (e1, _) -> eval e1
%}

%token <int> INT
%token PLUS MINUS EOF

%start <int> main

(* The default merge function, for every symbol without its own. It
   receives the symbol's name, then the two semantic values. *)
%merge { fun _symbol v1 _v2 -> v1 }

%%

main:
| e = sum EOF { eval e }

(* Old-style rule, with its own merge function after the productions. *)
expr:
| i = INT
    { { value = Int i; loc = $loc } } [@name int]
| e1 = expr PLUS e2 = expr
    { { value = Add (e1, e2); loc = $loc } } [@name add]
| MINUS e = expr
    { { value = Neg e; loc = $loc } } [@name neg]
%merge
    { fun e1 e2 -> { e1 with value = Amb (e1, e2) } }

(* New-style rule, with a merge function after the expression. *)
let sum :=
  | ~ = expr; <>
  | x = sum; PLUS; y = expr; { { value = Add (x, y); loc = $loc } }
%merge
  { fun x _ -> x }

%%

(* The postlude runs to the end of the file, braces and all. *)
let show = function
  | { value = Int i; _ } -> string_of_int i
  | _ -> "{ ... }"
