%token <int> INT
// <- keyword
//           ^ type
%start <int> main
// <- keyword
//           ^ variable
%merge { fun _ _ -> assert false }
// <- keyword
%%

main:
// <- function
| e = expr INT
//^ variable
//    ^ function
//         ^ type
    { e } [@name main]
(* comment *)
// <- comment.block
