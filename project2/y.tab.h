/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REALNO = 259,
     ID = 260,
     RELOP = 261,
     ASSIGNOP = 262,
     SEQUENCE = 263,
     ADDOP = 264,
     MULOP = 265,
     DOT = 266,
     COMMA = 267,
     SEMICOLON = 268,
     COLON = 269,
     OPAR = 270,
     CPAR = 271,
     OBRAC = 272,
     CBRAC = 273,
     ARRAY = 274,
     BEG = 275,
     DO = 276,
     ELSE = 277,
     END = 278,
     FUNCTION = 279,
     IF = 280,
     INTEGER = 281,
     NOT = 282,
     OF = 283,
     PROCEDURE = 284,
     PROGRAM = 285,
     REAL = 286,
     THEN = 287,
     VAR = 288,
     WHILE = 289
   };
#endif
/* Tokens.  */
#define INT 258
#define REALNO 259
#define ID 260
#define RELOP 261
#define ASSIGNOP 262
#define SEQUENCE 263
#define ADDOP 264
#define MULOP 265
#define DOT 266
#define COMMA 267
#define SEMICOLON 268
#define COLON 269
#define OPAR 270
#define CPAR 271
#define OBRAC 272
#define CBRAC 273
#define ARRAY 274
#define BEG 275
#define DO 276
#define ELSE 277
#define END 278
#define FUNCTION 279
#define IF 280
#define INTEGER 281
#define NOT 282
#define OF 283
#define PROCEDURE 284
#define PROGRAM 285
#define REAL 286
#define THEN 287
#define VAR 288
#define WHILE 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 5 "parser.y"
{
	int integer;
	double real;
	char* string;
	char character;
}
/* Line 1529 of yacc.c.  */
#line 124 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

