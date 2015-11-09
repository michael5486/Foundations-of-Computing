
%{
    #include<stdio.h>
    #include<stdlib.h>
%}


/* declare tokens */
%token INTEGER REAL
%token ID
%token ADDOP
%token MULOP
%token ASSIGNOP
%token RELOP
%token NUM
%token BEGIN END
%token FUNCTION
%token ARRAY
%token OF
%token VAR
%token PROGRAM
%token LPAR RPAR SEMICOLON COLON COMMA PERIOD LBRACK RBRACK
%token IF THEN ELSE WHILE DO PROCEDURE
%token NOT


/*%type <a> identifier_list declarations subprogram_declarations subprogram_declaration
%type compound_statement procedure_statement statement
%type type standard_type
%type subprogram_head arguments parameter_list optional_statements
%type statement_list statement variable expression_list expression
%type simple_expression term factor sign*/

%start program
%%

program: PROGRAM ID LPAR identifier_list RPAR SEMICOLON declarations subprogram_declarations compound_statement PERIOD { printf("reducing to program\n"); }
;

identifier_list: ID                 { printf("shifting ID\n"); }
| identifier_list COMMA ID          { printf("shifting ID\n"); }
;

declarations: /* nothing */          { printf("shifting declarations EPSILON\n")}
| declarations VAR identifier_list COLON type SEMICOLON  { printf("shifting declarations\n"); }
;

type: standard_type           { printf("shifting standard type\n"); }
;

standard_type: INTEGER        { printf("shifting standard type -> INTEGER"); }
| REAL                        { printf("shifting standard type -> INTEGER"); }
;

subprogram_declarations: /* nothing */                      { printf("subprogram_declarations EPSILON"); }
| subprogram_declarations subprogram_declaration SEMICOLON  { printf("subprogram_declarations"); }
;

subprogram_declaration: subprogram_head declarations compound_statement  { printf("subprogram_declaration"); }
;

subprogram_head: FUNCTION ID arguments COLON standard_type SEMICOLON   { printf("subprogram_head #1"); }
| PROCEDURE ID arguments SEMICOLON                                     { printf("subprogram_head #2"); }
;

arguments: /* nothing */        { printf("arguments EPSILON"); }
| LPAR parameter_list RPAR      { printf(" arguments"); }
;

parameter_list: identifier_list COLON type            { printf("parameter_list #1"); }
| parameter_list SEMICOLON identifier_list COLON type { printf("parameter_list #2"); }
;

compound_statement: BEGIN optional_statements END     { printf("compound_statements"); }
;

optional_statements: /* nothing */      { printf(" optional_statements EPSILON"); }
| statement_list                        { printf("optional_statements"); }
;

statement_list: statement                   { printf("statement_list #1"); }
| statement_list SEMICOLON statement        { printf("statement_list #2"); }
;

statement: variable ASSIGNOP expression         { printf("statement #1"); }
| procedure_statement                           { printf("statement #2"); }
| compound_statement                            { printf("statement #3"); }
| IF expression THEN statement ELSE statement   { printf("statement #4"); }
| WHILE expression DO statement                 { printf("statement #5"); }
;

variable: ID                      { printf("variable"); }
;

procedure_statement: ID                 { printf("procedure #1"); }
| ID LPAR expression_list RPAR          { printf("procedure #2"); }
;

expression_list: expression             { printf("expression_list #1"); }
| expression_list COMMA expression      { printf("expression_list #2"); }
;

expression: simple_expression               { printf("expression #1"); }
| simple_expression RELOP simple_expression { printf("expression #2"); }
;

simple_expression: term               { printf("simple_expression #1"); }
| sign term                           { printf("simple_expression #2"); }
| simple_expression ADDOP term        { printf("simple_expression #3"); }
;

term: factor            { printf("term #1"); }
| term MULOP factor     { printf("term #2"); }
;

factor: ID                        { printf("factor #1"); }
| ID LPAR expression_list RPAR    { printf("factor #2"); }
| NUM                             { printf("factor #3"); }
| LPAR expression RPAR            { printf("factor #4"); }
| NOT factor                      { printf("factor #5"); }
;

sign: ADDOP               { printf("sign"); }
;


%%

Extern FILE *yyin;

main(int argc, char **argv)
{
	if(argc > 1) {
		FILE *file;
		file = fopen(argv[1], “r”);
		if(!file) 
    {
			printf(“Cound not open file.\n”);
			exit(1);
    }
    yyin = file;
  }
  yyparse();
}

















