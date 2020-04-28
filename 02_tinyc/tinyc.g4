grammar tinyc;

start     : program EOF ;
program   : statement | statement program ;
          
statement : decl ';' | assign ';' | loop | out ';' | branch | expr;

decl      : 'int' ID ;
assign    : ID '=' robj ;
robj      : in | relation;
out       : 'write' '(' wobj ')' ; 
wobj      : expr | str ;
str       : '"' .*? '"';
in        : 'read' '(' ')' ;
branch    : 'if' '(' relation ')' '{' program '}' | 'if' '(' relation ')' '{' program '}' 'else' '{' program '}' ; 
loop      : 'while' '(' relation ')' '{' program '}';
expr      : expr PLUS term | expr MINUS term | term ;
term      : term MULT factor | term DIV factor | term MOD factor | factor ;
factor    : '(' expr ')' | NUMBER | ID ;
relation  : relation AND comp | relation OR comp | comp ;
comp      : NOT eq | comp LT eq | comp LEQ eq | comp EQ eq | comp NEQ eq | comp GEQ eq | comp GT eq | eq ;
eq        : '(' relation ')' | factor | expr ;

EQ        : '==' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
NEQ       : '!=' ;
PLUS      : '+' ;
MINUS     : '-' ;
MULT      : '*' ;
DIV       : '/' ;
MOD       : '%' ;
AND       : '&&' ;
OR        : '||' ;
NOT       : '!' ;
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
COMMENT   : '/*' .*? '*/' -> skip ;     // .*? matches anything until the first */
LINE_COMMENT : '//' ~[\r\n]* -> skip ;  // ~[\r\n]* matches anything but \r and \n
WS        : [ \n\t\r]+ -> skip;
ErrorChar : . ;

