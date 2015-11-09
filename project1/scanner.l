%option noyywrap nodefault yylineno
%{
    #include "y.tab.h"
%}

%%

"program"               { return PROGRAM; }  
"("                     { return LPAR; }
")"                     { return RPAR; }
"var"                   { return VAR; }
"function"              { return FUNCTION; }
"procedure"             { return PROCEDURE; }
"begin"                 { return BEG; }
"end"                   { return END; }
"not"                   { return NOT; }
":="                    { return ASSIGNOP; }
"if"                    { return IF; }
"then"                  { return THEN; }
"else"                  { return ELSE; }
"while"                 { return WHILE; }
"do"                    { return DO; }
";"                     { return SEMICOLON; }
","                     { return COMMA; }
":"                     { return COLON; }
"."                     { return PERIOD; }
"real"					{ return REAL; 	}
"integer"				{ return INTEGER; }

">"                     { return RELOP; }
"<"                     { return RELOP; }
"<="                    { return RELOP; }
">="                    { return RELOP; }
"="                     { return RELOP; }
"<>"                    { return RELOP; }

"+"                     { return yytext[0]; }
"-"                     { return yytext[0]; }

"*"                     { return MULOP; }
"/"                     { return MULOP; }


[a-zA-Z][a-zA-Z0-9]*    { return ID; }
[0-9]+"."?[0-9]*         { return NUM; }


[ \t]

.       { yyerror("Mystery character %c\n", *yytext); }

%%









