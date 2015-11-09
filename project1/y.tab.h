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
     INTEGER = 258,
     REAL = 259,
     ID = 260,
     ADDOP = 261,
     MULOP = 262,
     ASSIGNOP = 263,
     RELOP = 264,
     NUM = 265,
     BEGIN = 266,
     END = 267,
     FUNCTION = 268,
     ARRAY = 269,
     OF = 270,
     VAR = 271,
     PROGRAM = 272,
     LPAR = 273,
     RPAR = 274,
     SEMICOLON = 275,
     COLON = 276,
     COMMA = 277,
     PERIOD = 278,
     LBRACK = 279,
     RBRACK = 280,
     IF = 281,
     THEN = 282,
     ELSE = 283,
     WHILE = 284,
     DO = 285,
     PROCEDURE = 286,
     NOT = 287
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define ID 260
#define ADDOP 261
#define MULOP 262
#define ASSIGNOP 263
#define RELOP 264
#define NUM 265
#define BEGIN 266
#define END 267
#define FUNCTION 268
#define ARRAY 269
#define OF 270
#define VAR 271
#define PROGRAM 272
#define LPAR 273
#define RPAR 274
#define SEMICOLON 275
#define COLON 276
#define COMMA 277
#define PERIOD 278
#define LBRACK 279
#define RBRACK 280
#define IF 281
#define THEN 282
#define ELSE 283
#define WHILE 284
#define DO 285
#define PROCEDURE 286
#define NOT 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

