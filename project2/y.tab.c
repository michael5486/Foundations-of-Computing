/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include "symbol_table.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 5 "parser.y"
{
	int integer;
	double real;
	char* string;
	char character;
}
/* Line 193 of yacc.c.  */
#line 175 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 188 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     5,    18,    20,    24,    25,    32,
      34,    43,    45,    47,    48,    52,    56,    63,    68,    69,
      73,    77,    83,    87,    88,    90,    92,    96,   100,   102,
     104,   111,   116,   118,   123,   125,   130,   132,   136,   138,
     142,   144,   147,   151,   153,   157,   159,   164,   169,   171,
     173,   177,   180
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    -1,    -1,    30,     5,    37,    15,    39,
      38,    16,    13,    40,    43,    48,    11,    -1,     5,    -1,
      39,    12,     5,    -1,    -1,    40,    33,    39,    14,    41,
      13,    -1,    42,    -1,    19,    17,     3,     8,     3,    18,
      28,    42,    -1,    26,    -1,    31,    -1,    -1,    43,    44,
      13,    -1,    45,    40,    48,    -1,    24,     5,    46,    14,
      42,    13,    -1,    29,     5,    46,    13,    -1,    -1,    15,
      47,    16,    -1,    39,    14,    41,    -1,    47,    13,    39,
      14,    41,    -1,    20,    49,    23,    -1,    -1,    50,    -1,
      51,    -1,    50,    13,    51,    -1,    52,     7,    55,    -1,
      53,    -1,    48,    -1,    25,    55,    32,    51,    22,    51,
      -1,    34,    55,    21,    51,    -1,     5,    -1,     5,    17,
      55,    18,    -1,     5,    -1,     5,    15,    54,    16,    -1,
      55,    -1,    54,    12,    55,    -1,    56,    -1,    56,     6,
      56,    -1,    57,    -1,    59,    57,    -1,    56,     9,    57,
      -1,    58,    -1,    57,    10,    58,    -1,     5,    -1,     5,
      15,    54,    16,    -1,     5,    17,    55,    18,    -1,     3,
      -1,     4,    -1,    15,    55,    16,    -1,    27,    58,    -1,
       9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    32,    26,    52,    58,    66,    68,    93,
      97,   107,   110,   115,   117,   121,   132,   168,   206,   208,
     212,   222,   235,   238,   240,   244,   245,   249,   256,   257,
     258,   259,   263,   295,   335,   366,   401,   404,   415,   418,
     424,   427,   430,   451,   454,   475,   507,   540,   577,   580,
     583,   586,   592
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REALNO", "ID", "RELOP",
  "ASSIGNOP", "SEQUENCE", "ADDOP", "MULOP", "DOT", "COMMA", "SEMICOLON",
  "COLON", "OPAR", "CPAR", "OBRAC", "CBRAC", "ARRAY", "BEG", "DO", "ELSE",
  "END", "FUNCTION", "IF", "INTEGER", "NOT", "OF", "PROCEDURE", "PROGRAM",
  "REAL", "THEN", "VAR", "WHILE", "$accept", "program", "@1", "@2",
  "identifier_list", "declarations", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "arguments", "parameter_list", "compound_statement",
  "optional_statements", "statement_list", "statement", "variable",
  "procedure_statement", "expression_list", "expression",
  "simple_expression", "term", "factor", "sign", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    37,    38,    36,    39,    39,    40,    40,    41,
      41,    42,    42,    43,    43,    44,    45,    45,    46,    46,
      47,    47,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    12,     1,     3,     0,     6,     1,
       8,     1,     1,     0,     3,     3,     6,     4,     0,     3,
       3,     5,     3,     0,     1,     1,     3,     3,     1,     1,
       6,     4,     1,     4,     1,     4,     1,     3,     1,     3,
       1,     2,     3,     1,     3,     1,     4,     4,     1,     1,
       3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     5,     3,     0,
       0,     6,     0,     7,    13,     0,     0,     0,    23,     0,
       0,     0,     7,     0,     0,    34,     0,     0,    29,     0,
      24,    25,     0,    28,    18,    18,    14,     0,     4,     0,
      11,    12,     0,     9,     0,     0,    48,    49,    45,    52,
       0,     0,     0,    38,    40,    43,     0,     0,    22,     0,
       0,     0,     0,     0,    15,     0,     8,     0,    36,     0,
       0,     0,     0,    51,     0,     0,     0,     0,    41,     0,
      26,    27,     0,     0,     0,    17,     0,     0,    35,    33,
       0,     0,    50,     0,    39,    42,    44,    31,     0,     0,
      19,     0,     0,    37,    46,    47,     0,    20,     0,    16,
       0,    30,     0,     0,    21,     0,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,    10,     8,    14,    42,    43,    16,    21,
      22,    62,    83,    28,    29,    30,    31,    32,    33,    67,
      68,    53,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int8 yypact[] =
{
     -20,    10,    16,   -91,   -91,    46,    32,   -91,    59,    68,
      60,   -91,    61,   -91,    44,    32,    36,    50,     0,    70,
      73,    66,   -91,    69,    22,    42,     8,     8,   -91,    62,
      74,   -91,    75,   -91,    71,    71,   -91,    11,   -91,    64,
     -91,   -91,    76,   -91,     8,     8,   -91,   -91,    51,   -91,
       8,    25,    56,    49,    80,   -91,    25,    72,   -91,     0,
       8,    32,    77,    79,   -91,    91,   -91,    27,   -91,    65,
       8,     8,    81,   -91,     0,     8,    25,    25,    80,     0,
     -91,   -91,    55,    29,   -17,   -91,    87,     8,   -91,   -91,
      38,    78,   -91,    82,    89,    80,   -91,   -91,    22,    32,
     -91,    86,    97,   -91,   -91,   -91,     0,   -91,    58,   -91,
      83,   -91,    22,    84,   -91,   -17,   -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -15,    85,   -90,   -83,   -91,   -91,
     -91,    67,   -91,   -10,   -91,   -91,   -55,   -91,   -91,    33,
     -24,    30,   -38,   -44,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -33
static const yytype_int8 yytable[] =
{
      17,   101,    52,    57,    80,    25,    23,    73,   107,    40,
       1,    46,    47,    48,    41,     3,     4,    49,    78,    93,
      18,    69,   114,    50,    97,    26,    72,    64,    46,    47,
      48,    18,   116,    96,    27,    51,    81,     7,    95,    87,
      50,    39,    99,    88,    15,   100,    82,    91,    40,   -32,
      87,   111,    51,    41,   104,    75,    18,    44,    76,    45,
      19,     6,     9,   103,    24,    20,    70,     9,    71,    98,
       9,     9,   112,    11,    13,    34,    12,    15,    35,    36,
      38,    65,    60,    89,   108,    58,    61,    59,    74,    66,
      77,    84,    85,    79,    86,   102,   105,    92,    76,   109,
     110,   113,    63,    90,   106,    94,     0,    37,     0,     0,
       0,     0,   115
};

static const yytype_int8 yycheck[] =
{
      15,    84,    26,    27,    59,     5,    16,    51,    98,    26,
      30,     3,     4,     5,    31,     5,     0,     9,    56,    74,
      20,    45,   112,    15,    79,    25,    50,    37,     3,     4,
       5,    20,   115,    77,    34,    27,    60,     5,    76,    12,
      15,    19,    13,    16,    33,    16,    61,    71,    26,     7,
      12,   106,    27,    31,    16,     6,    20,    15,     9,    17,
      24,    15,    12,    87,    14,    29,    15,    12,    17,    14,
      12,    12,    14,     5,    13,     5,    16,    33,     5,    13,
      11,    17,     7,    18,    99,    23,    15,    13,    32,    13,
      10,    14,    13,    21,     3,     8,    18,    16,     9,    13,
       3,    18,    35,    70,    22,    75,    -1,    22,    -1,    -1,
      -1,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    36,     5,     0,    37,    15,     5,    39,    12,
      38,     5,    16,    13,    40,    33,    43,    39,    20,    24,
      29,    44,    45,    48,    14,     5,    25,    34,    48,    49,
      50,    51,    52,    53,     5,     5,    13,    40,    11,    19,
      26,    31,    41,    42,    15,    17,     3,     4,     5,     9,
      15,    27,    55,    56,    57,    58,    59,    55,    23,    13,
       7,    15,    46,    46,    48,    17,    13,    54,    55,    55,
      15,    17,    55,    58,    32,     6,     9,    10,    57,    21,
      51,    55,    39,    47,    14,    13,     3,    12,    16,    18,
      54,    55,    16,    51,    56,    57,    58,    51,    14,    13,
      16,    42,     8,    55,    16,    18,    22,    41,    39,    13,
       3,    51,    14,    18,    41,    28,    42
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "parser.y"
    { 
	/* Add ID to hash table. It cannot possibly be already here. */
	SYM *symbol = new_symbol();
	set_symbol(symbol, (yyvsp[(2) - (2)].string), 'u','f',0);
	add_symbol_to_hash(hash, symbol);
}
    break;

  case 3:
#line 32 "parser.y"
    {
	/* Pop every ID off stack, set their scope to 0 and type to 'o',
		and add them to hash table if they don't already exist */
	SYM *s;
	while (stackTop) {
		s = pop(&stackTop);
		s->type = 'o';
		s->scope = 0;
		
		if(!(add_symbol_to_hash(hash, s))) {
			printf("Error 1: redeclaration of variable within the same block./n");
		}
	}
}
    break;

  case 4:
#line 46 "parser.y"
    { 
	printf("Done parsing program.\n");
}
    break;

  case 5:
#line 52 "parser.y"
    {
   	/* Make a new struct and push it to the stack. */
	SYM *symbol = new_symbol();
	set_symbol(symbol, (yyvsp[(1) - (1)].string), 'u', 'u', -1);
	push(&stackTop, symbol);
}
    break;

  case 6:
#line 58 "parser.y"
    {
	/* Make a new struct and push it to the stack. */
	SYM *symbol = new_symbol();
	set_symbol(symbol, (yyvsp[(3) - (3)].string), 'u', 'u', -1);
	push(&stackTop, symbol);
}
    break;

  case 8:
#line 68 "parser.y"
    {
	/* Take all IDs from identifier_list stack and put them in the table, if they do not already exist. */
	SYM *symbol;
    while (stackTop) {
		symbol = pop(&stackTop);
		
		/* Set their type and scope to be the current type and scope */
		symbol->type = (yyvsp[(5) - (6)].character);
		symbol->scope = scope; 
		
		/* Set array? */
		if (arrayFlag) {
			symbol->stype = 'a';
		}
		
		if (!add_symbol_to_hash(hash, symbol)) {
			printf("Error 1: redeclaration of a variable within the same block\n");
		}
	}
	
	arrayFlag = 0;
}
    break;

  case 9:
#line 93 "parser.y"
    {
	/* Set "type" to whatever is returned from standard_type */
	(yyval.character) = (yyvsp[(1) - (1)].character);
}
    break;

  case 10:
#line 97 "parser.y"
    {
	/* Set "type" to whatever is returned from standard_type */
	(yyval.character) = (yyvsp[(8) - (8)].character);
	
	/* Set the flag to alert that we have found an array */
	arrayFlag = 1;
}
    break;

  case 11:
#line 107 "parser.y"
    {
	(yyval.character) = 'i';
}
    break;

  case 12:
#line 110 "parser.y"
    {
	(yyval.character) = 'r';
}
    break;

  case 15:
#line 121 "parser.y"
    {
	
	/* Remove all symbols from the old scope from the table */
	empty_table(hash, scope);
	
	/* Decrement the scope */
	scope--;
}
    break;

  case 16:
#line 132 "parser.y"
    {
	SYM* function_sym = new_symbol();
	SYM* argument = new_symbol();
	set_symbol(function_sym, (yyvsp[(2) - (6)].string), (yyvsp[(5) - (6)].character), 'f', scope);
	
	/* Make a SYM* for the function itself */
	if(!add_symbol_to_hash(hash, function_sym)) {
		printf("Error 1: redeclaration of a variable within the same block\n");
		free(function_sym);
		goto fail_subhead1;
	}
  
	/* All its parameters should have one higher scope than it */
	scope++;
	
	/* Add all parameters to the table in their own right */
	while (funcTop) {
		argument = pop(&funcTop);	
		argument->scope = scope;
		
		if (arrayFlag) {
			argument->stype = 'a';
		}
		
		if (!add_symbol_to_hash(hash, argument)) {
			printf("Error 1: redeclaration of a variable within the same block: %s\n", argument->name);
			goto fail_subhead1;
		} else {
			/* Add this symbol to the parameters of this function */
			add_symbol(&(function_sym->parameters), argument);
		}
	}

	fail_subhead1:
		arrayFlag = 0;
}
    break;

  case 17:
#line 168 "parser.y"
    {
	SYM* procedure_sym = new_symbol();
	SYM* argument = new_symbol();
	set_symbol(procedure_sym, (yyvsp[(2) - (4)].string), 'u', 'p', scope);
	
	/* Make a SYM* for the function itself */
	if(!add_symbol_to_hash(hash, procedure_sym)) {
		printf("Error 1: redeclaration of a variable within the same block\n");
		free(procedure_sym);
		goto fail_subhead2;
	}
  
	/* All its parameters should have one higher scope than it */
	scope++;
	
	/* Add all parameters to the table in their own right */
	while (funcTop) {
		argument = pop(&funcTop);	
		argument->scope = scope;

		if (arrayFlag) {
			argument->stype = 'a';
		}
		
		if (!add_symbol_to_hash(hash, argument)) {
			printf("Error 1: redeclaration of a variable within the same block: %s\n", argument->name);
			goto fail_subhead2;
		} else {
			/* Add this symbol to the parameters of this function */
			add_symbol(&(procedure_sym->parameters), argument);
		}
	}
	
	fail_subhead2:
		arrayFlag = 0;
}
    break;

  case 20:
#line 212 "parser.y"
    {
	/* For every ID on stack, pop it off, give it a type $3, and push it onto the new stack */		
	SYM* symbol;
		
	while (stackTop) {
		symbol = pop(&stackTop);
		symbol->type = (yyvsp[(3) - (3)].character);
		push(&funcTop, symbol);
	}
}
    break;

  case 21:
#line 222 "parser.y"
    {
	/* For every ID on stack, pop it off, give it a type $3, and push it onto the new stack */		
	SYM* symbol;
		
	while (stackTop) {
		symbol = pop(&stackTop);
		symbol->type = (yyvsp[(5) - (5)].character);
		push(&funcTop, symbol);
	}
}
    break;

  case 27:
#line 249 "parser.y"
    {
	if (!(((yyvsp[(1) - (3)].character) == 'r') || ((yyvsp[(1) - (3)].character) == 'i'))) {
		printf("Error 3: Type mismatch: cannot assign value to variable of type other than integer or real.\n");
	} else if ((((yyvsp[(1) - (3)].character) == 'i') && !((yyvsp[(3) - (3)].character) == 'i')) || (((yyvsp[(1) - (3)].character) == 'r') && !((yyvsp[(3) - (3)].character) == 'r'))) {
		printf("Error 3: Type mismatch: must assign expression to variable of the same type.\n");
	}
}
    break;

  case 32:
#line 263 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (1)].string), 'u', 'u', scope);

	/* Check if this ID exists for every scope between the current scope and 0 (global) */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_var1;
			}
		}
	}

	/* if we reach here, it does not exist */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_var1;
	
	/* Return its proper type */
	end_var1:
		this_symbol = get_sym(hash, this_symbol);
		
		if ((!(this_symbol->type == 'i') || (this_symbol->type == 'r')) || (this_symbol->stype != 'u')) {
			printf("Error 3: type mismatch: cannot use any type except integer or real as a variable.\n");
			goto fail_var1;
		}
		
		(yyval.character) = this_symbol->type;
	fail_var1:
		free(this_symbol);
}
    break;

  case 33:
#line 295 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (4)].string), 'u', 'u', scope);
	
	/* 'expression' MUST evaluate to an integer, since it is an index. */
	if (!((yyvsp[(3) - (4)].character) == 'i')) {
		printf("Error 3: type mismatch: cannot access non-integer index in an array.\n");
		goto fail_var2;
	}

	/* Look for the symbol in every scope from here to global */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_var2;
			}
		}
	}

	/* If we do not find it, error. */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_var2;
	
	end_var2:
		this_symbol = get_sym(hash, this_symbol);
		
		if (!(this_symbol->stype == 'a')) {
			printf("Error 3: type mismatch: cannot access element of non-array variable.\n");
			goto fail_var2;
		}
		
		(yyval.character) = this_symbol->type;
	fail_var2:
		free(this_symbol);
}
    break;

  case 34:
#line 335 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (1)].string), 'u', 'u', scope);
	
	/* Look for the symbol in every scope from here to global */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_proc1;
			}
		}
	}

	/* If we do not find it, error. */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_proc1;
	
	end_proc1:
		this_symbol = get_sym(hash, this_symbol);
		
		if (!((this_symbol->stype == 'f') || (this_symbol->stype == 'p'))) {
			printf("Error 3: type mismatch: must be accessing procedure.\n");
			goto fail_proc1;
		}
		
		(yyval.character) = this_symbol->type;
	fail_proc1:
		free(this_symbol);
}
    break;

  case 35:
#line 366 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (4)].string), 'x', 'x', scope);
	
	/* Look for the symbol in every scope from here to global */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_proc2;
			}
		}
	}

	/* If we do not find it, error. */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_proc2;
	
	/* Return its proper type */
	end_proc2:
		this_symbol = get_sym(hash, this_symbol);
		
		if (!((this_symbol->stype == 'f') || (this_symbol->stype == 'p'))) {
			printf("Error 3: type mismatch: cannot send parameters to non-function identifier.\n");
			goto fail_proc2;
		}
		
		(yyval.character) = this_symbol->type;
	fail_proc2:
		free(this_symbol);
}
    break;

  case 36:
#line 401 "parser.y"
    {
	(yyval.character) = (yyvsp[(1) - (1)].character);
}
    break;

  case 37:
#line 404 "parser.y"
    {
	/* Return the "lowest common denominator" for the type of this expression, integer or real */
	if (((yyvsp[(1) - (3)].character) == 'r') || ((yyvsp[(3) - (3)].character) == 'r')) {
		(yyval.character) = 'r';
	} else {
		(yyval.character) = 'i';
	}
}
    break;

  case 38:
#line 415 "parser.y"
    {
	(yyval.character) = (yyvsp[(1) - (1)].character);
}
    break;

  case 39:
#line 418 "parser.y"
    {
	(yyval.character) = 'i';
}
    break;

  case 40:
#line 424 "parser.y"
    {
	(yyval.character) = (yyvsp[(1) - (1)].character);
}
    break;

  case 41:
#line 427 "parser.y"
    {
	(yyval.character) = (yyvsp[(2) - (2)].character);
}
    break;

  case 42:
#line 430 "parser.y"
    {
	/* Make sure $1 is a number */
	if (((yyvsp[(1) - (3)].character) != 'i') && ((yyvsp[(1) - (3)].character) != 'r')) {
		printf("Error 3: type mismatch: operand 1 in add expression must be of type integer or real.\n");
	}
	
	/* Make sure $3 is a number */
	if (((yyvsp[(3) - (3)].character) != 'i') && ((yyvsp[(3) - (3)].character) != 'r')) {
		printf("Error 3: type mismatch: operand 2 in add expression must be of types integer or real.\n");
	}
	
	/* Return the "lowest common denominator" between the two types of $1 and $3 */
	if (((yyvsp[(1) - (3)].character) == 'i') && ((yyvsp[(3) - (3)].character) == 'i')) {
		(yyval.character) = 'i';
	} else {
		(yyval.character) = 'r';
	}
}
    break;

  case 43:
#line 451 "parser.y"
    {
	(yyval.character) = (yyvsp[(1) - (1)].character);
}
    break;

  case 44:
#line 454 "parser.y"
    {
	/* Make sure $1 is a number */
	if (((yyvsp[(1) - (3)].character) != 'i') && ((yyvsp[(1) - (3)].character) != 'r')) {
		printf("Error 3: type mismatch: operand 1 in mulop expression must be of type integer or real.\n");
	}
	
	/* Make sure $3 is a number */
	if (((yyvsp[(3) - (3)].character) != 'i') && ((yyvsp[(3) - (3)].character) != 'r')) {
		printf("Error 3: type mismatch: operand 2 in mulop expression must be of type integer or real.\n");
	}
	
	/* Return the "lowest common denominator" between the two types of $1 and $3 */
	if (((yyvsp[(1) - (3)].character) == 'i') && ((yyvsp[(3) - (3)].character) == 'i')) {
		(yyval.character) = 'i';
	} else {
		(yyval.character) = 'r';
	}
}
    break;

  case 45:
#line 475 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (1)].string), 'u', 'u', scope);

	/* Check every scope from here to global to see if ID exists */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_fac1;
			}
		}
	}

	/* Return error if it does not */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_fac1;
	
	end_fac1:
		this_symbol = get_sym(hash, this_symbol);
		
		if ((!(this_symbol->stype == 'i') || (this_symbol->stype == 'r'))) {
			printf("Error 3: type mismatch: cannot use any type except integer or real as a variable.\n");
			goto fail_fac1;
		}
		
		(yyval.character) = this_symbol->type;
		free(this_symbol);
	fail_fac1:
		printf("Ended checking validity of ID.");
}
    break;

  case 46:
#line 507 "parser.y"
    {
	/* TODO: ARGUMENTSSSSS */

	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (4)].string), 'u', 'u', scope);
	
	/* Look for the symbol in every scope from here to global */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_fac2;
			}
		}
	}

	/* If we do not find it, error. */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_fac2;
	
	end_fac2:
		this_symbol = get_sym(hash, this_symbol);
		
		if (!(this_symbol->stype == 'f')) {
			printf("Error 3: type mismatch: cannot send parameters to non-function identifier.\n");
			goto fail_fac2;
		}
		
		(yyval.character) = this_symbol->type;
	fail_fac2:
		free(this_symbol);
}
    break;

  case 47:
#line 540 "parser.y"
    {
	SYM *this_symbol = new_symbol();
	set_symbol(this_symbol, (yyvsp[(1) - (4)].string), 'u', 'u', scope);
	
	/* 'expression' MUST evaluate to an integer, since it is an index. */
	if (!((yyvsp[(3) - (4)].character) == 'i')) {
		printf("Error 3: type mismatch: cannot access non-integer index in an array.\n");
		goto fail_fac3;
	}

	/* Look for the symbol in every scope from here to global */
	if (!check_find_sym(hash, this_symbol)) {
		while (this_symbol->scope > 0) {
			(this_symbol->scope)--;
			
			if (check_find_sym(hash, this_symbol)) {
				goto end_fac3;
			}
		}
	}

	/* If we do not find it, error. */
	printf("Error 2: usage of undeclared variable\n");
	goto fail_fac3;
	
	end_fac3:
		this_symbol = get_sym(hash, this_symbol);
		
		if (!(this_symbol->stype == 'a')) {
			printf("Error 3: type mismatch: cannot access element of non-array variable.\n");
			goto fail_fac3;
		}
		
		(yyval.character) = this_symbol->type;
	fail_fac3:
		free(this_symbol);
}
    break;

  case 48:
#line 577 "parser.y"
    {
	(yyval.character) = 'i';
}
    break;

  case 49:
#line 580 "parser.y"
    {
	(yyval.character) = 'r';
}
    break;

  case 50:
#line 583 "parser.y"
    {
	(yyval.character) = (yyvsp[(2) - (3)].character);
}
    break;

  case 51:
#line 586 "parser.y"
    {
	(yyval.character) = (yyvsp[(2) - (2)].character);
}
    break;


/* Line 1267 of yacc.c.  */
#line 2112 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 595 "parser.y"


yyerror(char *s)
{
  fprintf(stderr, "error: %s\n", s);
}

main(int argc, char *argv[]) 
{
  extern FILE *yyin;
  ++argv; --argc;
  yyin = fopen(argv[0], "r");
    
	/* Initialize the hash table */
	init_table(hash);
	yyparse();
  print_hash(hash);

}

