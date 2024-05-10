
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 6 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"




#include "main.h"
#include "yacc.tab.h"

#include <stdio.h>





extern "C"
{
	void yyerror(const char *s);
	extern int yylex();
	
}

void yyerror(const char *s, YYLTYPE *loc);
void yyerror(const char *s, int line, int col);
void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol);

extern int yylineno;
extern char* yytext;
extern char lineBuffer[500];
extern int yyleng;
extern int yycolumn;
extern ParseNode* ParseTreeHead;
extern string itos(int num);
extern bool haveSemanticError;
int rec_line,rec_pos;

vector<string> syntaxErrorInformation; //存放语法错误信息



/* Line 189 of yacc.c  */
#line 112 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.tab.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     CONST = 259,
     TYPE = 260,
     RECORD = 261,
     END = 262,
     ARRAY = 263,
     OF = 264,
     INTEGER = 265,
     REAL = 266,
     BOLLEAN = 267,
     CHAR = 268,
     VAR = 269,
     FUNCTION = 270,
     PROCEDURE = 271,
     _BEGIN = 272,
     IF = 273,
     THEN = 274,
     ELSE = 275,
     CASE = 276,
     WHILE = 277,
     DO = 278,
     REPEAT = 279,
     UNTIL = 280,
     FOR = 281,
     TO = 282,
     DOWNTO = 283,
     NOT = 284,
     DOT = 285,
     RANGE_DOT = 286,
     COMMA = 287,
     LEFT_PARENTHESES = 288,
     RIGHT_PARENTHESES = 289,
     LEFT_MEDIUM_PARENTHESES = 290,
     RIGHT_MEDIUM_PARENTHESES = 291,
     SEMICOLON = 292,
     ASSIGNOP = 293,
     COLON = 294,
     RELOP = 295,
     ADDOP = 296,
     MULOP = 297,
     ID = 298,
     NUM = 299,
     INT_NUM = 300,
     FLOAT_NUM = 301,
     LETTER = 302,
     _WRITE = 303,
     _READ = 304,
     UMINUS = 305,
     LOWER_THAN_ELSE = 306,
     ONE = 307,
     TWO = 308,
     THREE = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.tab.cc"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    15,    19,    24,    30,    35,
      40,    47,    51,    58,    65,    72,    79,    86,    89,    93,
      98,   103,   107,   109,   113,   114,   118,   122,   128,   134,
     138,   142,   148,   154,   158,   161,   163,   166,   168,   170,
     172,   177,   184,   191,   198,   205,   208,   212,   217,   219,
     221,   223,   225,   229,   233,   235,   239,   243,   247,   248,
     252,   256,   262,   266,   272,   278,   284,   288,   292,   296,
     300,   301,   304,   311,   316,   320,   326,   332,   338,   343,
     346,   349,   353,   356,   357,   360,   364,   368,   372,   374,
     376,   378,   381,   384,   388,   392,   396,   399,   403,   407,
     411,   415,   417,   421,   423,   425,   431,   437,   442,   447,
     452,   457,   463,   468,   473,   482,   483,   485,   489,   492,
     495,   496,   500,   503,   506,   510,   513,   514,   516,   517,
     521,   523,   527,   531,   533,   535,   537,   539,   544,   549,
     553,   557,   559,   563,   567,   569,   571,   575,   580,   584,
     586,   591,   593,   596,   598,   603,   607,   611,   614,   619,
     623,   627,   629
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    58,    30,    -1,    57,    58,     1,
      -1,     1,    58,    30,    -1,    57,     1,    30,    -1,     1,
      57,    58,    30,    -1,     1,    57,     1,    58,    30,    -1,
       1,    57,    58,     1,    -1,     1,    57,     1,    30,    -1,
       3,    43,    33,    59,    34,    37,    -1,     3,    43,    37,
      -1,     3,    43,    33,    59,    34,     1,    -1,     3,     1,
      33,    59,    34,    37,    -1,     3,    43,     1,    59,    34,
      37,    -1,     3,    43,    33,     1,    34,    37,    -1,     3,
      43,    33,    59,     1,    37,    -1,     3,     1,    -1,     3,
      43,     1,    -1,     3,    43,    33,     1,    -1,    60,    67,
      69,    77,    -1,    59,    32,    43,    -1,    43,    -1,     4,
      61,    37,    -1,    -1,     4,     1,    37,    -1,     4,    61,
       1,    -1,    61,    37,    43,    40,    62,    -1,    61,    37,
      43,    40,     1,    -1,    43,    40,    62,    -1,    43,    40,
       1,    -1,    61,     1,    43,    40,    62,    -1,    61,    37,
      43,     1,    62,    -1,    43,     1,    62,    -1,    41,    43,
      -1,    43,    -1,    41,    44,    -1,    44,    -1,    47,    -1,
      64,    -1,     6,    68,    37,     7,    -1,     8,    35,    65,
      36,     9,    64,    -1,     8,     1,    65,    36,     9,    63,
      -1,     8,    35,    65,    36,     1,    63,    -1,     8,    35,
      65,    36,     9,     1,    -1,     8,     1,    -1,     8,    35,
       1,    -1,     8,    35,    65,     1,    -1,    10,    -1,    11,
      -1,    13,    -1,    12,    -1,    65,    32,    66,    -1,    65,
       1,    66,    -1,    66,    -1,    62,    31,    62,    -1,    62,
       1,    62,    -1,    14,    68,    37,    -1,    -1,    14,     1,
      37,    -1,    14,    68,     1,    -1,    68,    37,    59,    39,
      63,    -1,    59,    39,    63,    -1,    68,     1,    59,    39,
      63,    -1,    68,    37,    59,     1,    63,    -1,    68,    37,
      59,    39,     1,    -1,    59,    39,     1,    -1,    59,     1,
      63,    -1,    69,    70,    37,    -1,    69,    70,     1,    -1,
      -1,    71,    58,    -1,    15,    43,    72,    39,    64,    37,
      -1,    16,    43,    72,    37,    -1,    16,    43,    37,    -1,
      15,     1,    72,    39,    63,    -1,    15,    43,    72,     1,
      63,    -1,    15,    43,    72,    39,     1,    -1,    15,    43,
      72,     1,    -1,    15,     1,    -1,    16,     1,    -1,    33,
      73,    34,    -1,    33,    34,    -1,    -1,    33,     1,    -1,
      33,    73,     1,    -1,    73,    37,    74,    -1,    73,     1,
      74,    -1,    74,    -1,    75,    -1,    76,    -1,    14,    76,
      -1,    14,     1,    -1,    59,    39,    64,    -1,    59,     1,
      64,    -1,    59,    39,     1,    -1,    59,     1,    -1,    17,
      78,     7,    -1,    17,    78,     1,    -1,    78,    37,    79,
      -1,    78,     1,    79,    -1,    79,    -1,    81,    38,    92,
      -1,    90,    -1,    77,    -1,    18,    92,    19,    79,    84,
      -1,    21,    92,     9,    85,     7,    -1,    22,    92,    23,
      79,    -1,    24,    78,    25,    92,    -1,    49,    33,    80,
      34,    -1,    48,    33,    91,    34,    -1,    18,    92,     1,
      79,    84,    -1,    22,    92,     1,    79,    -1,    24,    78,
       1,    92,    -1,    26,    43,    38,    92,    89,    92,    23,
      79,    -1,    -1,    81,    -1,    80,    32,    81,    -1,    43,
      82,    -1,    82,    83,    -1,    -1,    35,    91,    36,    -1,
      30,    43,    -1,    35,     1,    -1,    35,    91,     1,    -1,
      20,    79,    -1,    -1,    86,    -1,    -1,    86,    37,    87,
      -1,    87,    -1,    88,    39,    79,    -1,    88,    32,    62,
      -1,    62,    -1,    27,    -1,    28,    -1,    43,    -1,    43,
      33,    91,    34,    -1,    43,    33,    91,     1,    -1,    43,
      33,    34,    -1,    91,    32,    92,    -1,    92,    -1,    91,
       1,    92,    -1,    93,    40,    93,    -1,    93,    -1,    94,
      -1,    93,    41,    94,    -1,    93,    41,     1,    94,    -1,
      94,    42,    95,    -1,    95,    -1,    94,    42,     1,    95,
      -1,    96,    -1,    41,    95,    -1,    81,    -1,    43,    33,
      91,    34,    -1,    43,    33,    34,    -1,    33,    92,    34,
      -1,    29,    95,    -1,    43,    33,    91,     1,    -1,    43,
      33,     1,    -1,    33,    92,     1,    -1,    44,    -1,    47,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   130,   130,   142,   147,   152,   157,   162,   168,   174,
     182,   191,   199,   204,   209,   214,   219,   224,   229,   234,
     241,   251,   258,   267,   274,   280,   285,   292,   300,   305,
     312,   317,   322,   327,   334,   351,   358,   374,   381,   391,
     398,   406,   415,   420,   425,   430,   435,   440,   447,   454,
     461,   468,   477,   485,   490,   499,   507,   516,   523,   529,
     534,   541,   549,   556,   561,   566,   571,   576,   583,   590,
     595,   603,   612,   621,   629,   637,   642,   647,   652,   657,
     662,   669,   676,   683,   689,   694,   701,   708,   713,   722,
     729,   738,   745,   752,   760,   765,   770,   778,   785,   792,
     799,   805,   814,   823,   830,   837,   846,   855,   863,   871,
     878,   886,   891,   896,   901,   911,   917,   923,   932,   940,
     947,   954,   962,   969,   974,   980,   987,   994,  1001,  1008,
    1016,  1024,  1033,  1041,  1049,  1056,  1064,  1071,  1079,  1084,
    1092,  1100,  1107,  1113,  1121,  1129,  1136,  1144,  1150,  1158,
    1165,  1171,  1178,  1192,  1199,  1207,  1214,  1222,  1229,  1234,
    1239,  1245,  1252
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "CONST", "TYPE", "RECORD",
  "END", "ARRAY", "OF", "INTEGER", "REAL", "BOLLEAN", "CHAR", "VAR",
  "FUNCTION", "PROCEDURE", "_BEGIN", "IF", "THEN", "ELSE", "CASE", "WHILE",
  "DO", "REPEAT", "UNTIL", "FOR", "TO", "DOWNTO", "NOT", "DOT",
  "RANGE_DOT", "COMMA", "LEFT_PARENTHESES", "RIGHT_PARENTHESES",
  "LEFT_MEDIUM_PARENTHESES", "RIGHT_MEDIUM_PARENTHESES", "SEMICOLON",
  "ASSIGNOP", "COLON", "RELOP", "ADDOP", "MULOP", "ID", "NUM", "INT_NUM",
  "FLOAT_NUM", "LETTER", "_WRITE", "_READ", "UMINUS", "LOWER_THAN_ELSE",
  "ONE", "TWO", "THREE", "$accept", "programstruct", "PROGRAM_HEAD_",
  "PROGTAM_BODY_", "IDENTIFIER_LIST_", "CONST_DECLARATIONS_",
  "CONST_DECLARATION_", "CONST_VARIABLE_", "TYPE_", "STANDRAD_TYPE_",
  "PERIODS_", "PERIOD_", "VAR_DECLARATIONS_", "VAR_DECLARATION_",
  "SUBPROGRAM_DECLARATIONS_", "SUBPROGRAM_DECLARATION_",
  "SUBPROGRAM_HEAD_", "FORMAL_PARAMETER_", "PARAMETER_LISTS_",
  "PARAMETER_LIST_", "VAR_PARAMETER_", "VALUE_PARAMETER_",
  "COMPOUND_STATEMENT_", "STATEMENT_LIST_", "STATEMENT_", "VARIABLE_LIST_",
  "VARIABLE_", "ID_VARPARTS_", "ID_VARPART_", "ELSE_PART_", "CASE_BODY_",
  "BRANCH_LIST_", "BRANCH_", "CONST_LIST_", "UPDOWN_",
  "CALL_PROCEDURE_STATEMENT_", "EXPRESSION_LIST_", "EXPRESSION_",
  "SIMPLE_EXPRESSION_", "TERM_", "FACTOR_", "UNSIGN_CONST_VARIABLE_", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    65,    66,    66,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      91,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     4,     5,     4,     4,
       6,     3,     6,     6,     6,     6,     6,     2,     3,     4,
       4,     3,     1,     3,     0,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     2,     1,     2,     1,     1,     1,
       4,     6,     6,     6,     6,     2,     3,     4,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     0,     3,
       3,     5,     3,     5,     5,     5,     3,     3,     3,     3,
       0,     2,     6,     4,     3,     5,     5,     5,     4,     2,
       2,     3,     2,     0,     2,     3,     3,     3,     1,     1,
       1,     2,     2,     3,     3,     3,     2,     3,     3,     3,
       3,     1,     3,     1,     1,     5,     5,     4,     4,     4,
       4,     5,     4,     4,     8,     0,     1,     3,     2,     2,
       0,     3,     2,     2,     3,     2,     0,     1,     0,     3,
       1,     3,     3,     1,     1,     1,     1,     4,     4,     3,
       3,     1,     3,     3,     1,     1,     3,     4,     3,     1,
       4,     1,     2,     1,     4,     3,     3,     2,     4,     3,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,     0,     0,     0,     0,     0,     0,    58,    17,
       0,     1,     0,     0,     0,     0,     0,    24,     0,     4,
       0,    70,     0,    18,     0,    11,     5,     3,     2,    25,
       0,     0,    26,    23,     9,     0,     8,     6,     0,    22,
       0,     0,     0,     0,     0,    19,     0,     0,    35,    37,
      38,    33,    30,    29,     0,     0,     7,    59,     0,     0,
       0,    60,    57,     0,     0,   115,     0,    24,    20,     0,
       0,     0,     0,     0,    34,    36,     0,     0,     0,     0,
       0,    48,    49,    51,    50,    67,    39,    21,    66,    62,
       0,     0,    79,    83,    80,     0,     0,     0,     0,   115,
       0,   136,     0,     0,   104,     0,   101,     0,   103,    69,
      68,    71,    13,    14,    15,    16,    12,    10,    31,    32,
      28,    27,     0,    45,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,   120,   161,   162,   153,
       0,   144,   145,   149,   151,     0,     0,     0,     0,     0,
     118,     0,     0,    98,    97,   115,     0,     0,     0,     0,
       0,    54,    46,     0,    63,    64,    65,    61,    84,     0,
      82,     0,     0,    88,    89,    90,     0,    78,     0,    73,
     157,     0,   152,     0,   115,   115,     0,     0,     0,   128,
     115,   115,   115,     0,     0,   139,     0,   141,     0,     0,
     119,     0,   120,     0,   116,   100,    99,   102,    40,     0,
       0,     0,     0,     0,    47,     0,    92,    91,    96,     0,
      85,    81,     0,    75,    76,    77,     0,   160,   156,   159,
     155,     0,   126,   126,   143,     0,   146,     0,   148,   133,
       0,   127,   130,     0,   112,   107,   120,   153,   113,   108,
       0,   138,     0,   137,   122,   123,     0,     0,   110,     0,
     109,    56,    55,    53,    52,     0,     0,     0,    94,    95,
      93,    87,    86,    72,   158,   154,   115,   111,   105,   147,
     150,   106,     0,     0,   115,     0,   134,   135,     0,   142,
     140,   124,   121,   117,    42,    43,    44,    41,   125,   129,
     132,   131,   155,     0,     0,   158,   154,   115,   114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     7,   171,     8,    16,   159,    85,    86,
     160,   161,    21,    41,    42,    66,    67,   129,   172,   173,
     174,   175,   104,   105,   106,   203,   139,   150,   200,   277,
     240,   241,   242,   243,   288,   108,   196,   197,   141,   142,
     143,   144
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -165
static const yytype_int16 yypact[] =
{
     378,   296,    11,   171,   316,    29,   320,    79,   181,   190,
     153,  -165,   185,   112,   205,    38,   103,   244,   210,  -165,
      36,  -165,   196,   196,    39,  -165,  -165,  -165,  -165,  -165,
     346,    90,   215,   230,  -165,   266,  -165,  -165,   225,  -165,
       3,   157,   276,   354,   363,   280,   227,   -16,  -165,  -165,
    -165,  -165,  -165,  -165,   270,    74,  -165,  -165,   372,   301,
     337,   196,   196,    57,    63,   264,   162,   350,  -165,   323,
     330,   335,   336,   164,  -165,  -165,   346,   346,   131,   196,
     122,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
     123,    86,    -1,   333,  -165,    78,   282,   282,   282,   264,
     353,    -9,   370,   373,  -165,    24,  -165,   367,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,   201,   346,   163,   372,   372,   345,    83,   368,
      10,  -165,   371,   282,   282,   282,   376,  -165,  -165,  -165,
      97,   265,   369,  -165,  -165,   401,   256,   145,   374,   275,
     259,   282,   375,   264,  -165,   264,   282,   196,   198,    93,
     218,  -165,  -165,   219,  -165,  -165,  -165,  -165,  -165,    87,
    -165,   109,   155,  -165,  -165,  -165,   372,   372,   351,  -165,
    -165,   104,  -165,    33,   264,   264,   282,   106,   183,   346,
     264,   264,   254,   282,   282,  -165,   231,  -165,   377,   202,
    -165,   232,  -165,   366,  -165,  -165,  -165,  -165,  -165,   346,
     346,   346,   346,   404,   346,   167,  -165,  -165,   329,   358,
     204,  -165,   204,  -165,  -165,  -165,   379,  -165,  -165,  -165,
    -165,   235,   394,   394,   380,   282,   369,   282,  -165,  -165,
     408,   382,  -165,   245,  -165,  -165,   384,   367,  -165,  -165,
     300,   282,   282,  -165,  -165,  -165,   224,   282,  -165,   375,
    -165,  -165,  -165,  -165,  -165,   372,   372,   364,  -165,  -165,
    -165,  -165,  -165,  -165,   282,  -165,   264,  -165,  -165,   369,
    -165,  -165,   346,   346,   264,    52,  -165,  -165,   282,  -165,
    -165,   282,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,   192,   236,   399,   144,   197,   264,  -165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,   422,    16,    -6,  -165,  -165,   -30,   -57,  -159,
     302,   180,  -165,   348,  -165,  -165,  -165,   306,  -165,   182,
    -165,   255,   383,   331,  -140,  -165,   -63,  -165,  -165,   195,
    -165,  -165,   147,  -165,  -165,  -165,  -142,   -91,   246,  -164,
    -125,  -165
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -140
static const yytype_int16 yytable[] =
{
      51,    53,   107,    89,    58,   140,   145,   146,   180,   201,
     182,   177,     9,   205,    40,   206,    43,    44,    46,   226,
      13,  -120,    18,   236,   149,   153,  -120,    74,    75,  -120,
      14,   154,   128,    35,   229,    59,   107,    38,   -83,    30,
      45,   231,    60,   181,   232,   233,   118,   119,   121,   178,
     244,   245,   205,   229,    10,    90,    91,   256,    92,   268,
     270,   155,   133,   238,    94,   207,   134,   230,   164,   165,
     167,   279,    15,    40,   135,    77,   136,   137,    31,    39,
     138,   133,    39,   111,   168,   134,   302,   126,   216,   204,
     107,    52,   107,   135,   209,   136,   137,   169,   184,   138,
      93,   248,   249,   250,    32,   227,    95,   235,   297,    19,
     218,   128,   280,    27,    78,   131,   185,   170,    59,   223,
     224,   107,   107,   123,   210,   127,    39,   107,   107,   247,
      39,    47,   120,    48,    49,   133,   298,    50,   228,   134,
      33,    59,    28,   303,   301,  -138,   192,   135,   219,   136,
     137,    90,    91,   138,    23,    59,   220,   124,    61,   239,
     289,   290,   125,   109,   162,   116,   289,   308,   266,  -138,
     193,    11,    47,   133,    48,    49,   267,   134,    50,   261,
     262,  -138,   155,   289,   237,   135,    24,   136,   137,   221,
      25,   138,   222,  -139,    62,    20,   293,   304,  -137,   110,
     289,   117,   157,   255,    47,   208,    48,    49,   294,   295,
      50,    36,   133,   107,   289,    26,   134,  -139,   169,   211,
     214,   107,  -137,    22,   135,   291,   136,   137,    72,  -139,
     138,   133,   251,   257,  -137,   134,   274,   305,   158,    39,
      37,    39,    29,   135,   107,   136,   137,    39,     5,   138,
     212,   212,   239,   300,   213,   215,   252,   190,    54,    59,
     292,    73,    57,   252,   252,   253,   258,   252,   252,   275,
     306,    65,    96,    55,    34,    97,    98,   283,    99,   191,
     100,    65,    96,   133,   284,    97,    98,   134,    99,   198,
     100,    63,    64,    65,   199,   135,    56,   246,   137,     2,
       5,   138,   102,   103,   133,   186,   187,   101,   134,   195,
      76,   133,   102,   103,    71,   134,   135,    12,   136,   137,
       5,    17,   138,   135,     5,   136,   137,   286,   287,   138,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,    88,    81,
      82,    83,    84,    79,    87,    80,   166,    81,    82,    83,
      84,    79,   225,    80,     5,    81,    82,    83,    84,   269,
     112,    81,    82,    83,    84,   296,   128,   113,    81,    82,
      83,    84,   114,   115,    81,    82,    83,    84,    79,     1,
      80,     2,    81,    82,    83,    84,    59,    47,    69,    48,
      49,   263,   264,    50,   263,    59,   148,    70,   259,   130,
     260,   132,   271,   151,   272,   156,   152,   176,   179,   183,
     189,   188,   194,   265,   276,   281,   273,   285,   202,   282,
     254,   187,   307,     6,   217,    68,   163,   122,   278,   299,
     147,     0,   234
};

static const yytype_int16 yycheck[] =
{
      30,    31,    65,    60,     1,    96,    97,    98,   133,   151,
     135,     1,     1,   153,    20,   155,    22,    23,    24,   178,
       4,    30,     6,   187,    33,     1,    35,    43,    44,    38,
       1,     7,    33,    17,     1,    32,    99,     1,    39,     1,
       1,   183,    39,   134,   184,   185,    76,    77,    78,    39,
     190,   191,   192,     1,    43,    61,    62,   199,     1,   218,
     219,    37,    29,   188,     1,   156,    33,    34,   125,   126,
     127,   235,    43,    79,    41,     1,    43,    44,    40,    43,
      47,    29,    43,    67,     1,    33,    34,     1,     1,   152,
     153,     1,   155,    41,     1,    43,    44,    14,     1,    47,
      43,   192,   193,   194,     1,     1,    43,     1,   267,    30,
       1,    33,   237,     1,    40,    37,    19,    34,    32,   176,
     177,   184,   185,     1,    31,    39,    43,   190,   191,   192,
      43,    41,     1,    43,    44,    29,   276,    47,    34,    33,
      37,    32,    30,   285,   284,     1,     1,    41,    39,    43,
      44,   157,   158,    47,     1,    32,     1,    35,     1,   189,
     251,   252,    39,     1,     1,     1,   257,   307,     1,    25,
      25,     0,    41,    29,    43,    44,     9,    33,    47,   209,
     210,    37,    37,   274,     1,    41,    33,    43,    44,    34,
      37,    47,    37,     1,    37,    14,   259,   288,     1,    37,
     291,    37,     1,     1,    41,     7,    43,    44,   265,   266,
      47,     1,    29,   276,   305,    30,    33,    25,    14,     1,
       1,   284,    25,    33,    41,     1,    43,    44,     1,    37,
      47,    29,     1,     1,    37,    33,     1,     1,    37,    43,
      30,    43,    37,    41,   307,    43,    44,    43,     4,    47,
      32,    32,   282,   283,    36,    36,    32,     1,    43,    32,
      36,    34,    37,    32,    32,    34,    34,    32,    32,    34,
      34,    17,    18,    43,    30,    21,    22,    32,    24,    23,
      26,    17,    18,    29,    39,    21,    22,    33,    24,    30,
      26,    15,    16,    17,    35,    41,    30,    43,    44,     3,
       4,    47,    48,    49,    29,    40,    41,    43,    33,    34,
      40,    29,    48,    49,    34,    33,    41,     1,    43,    44,
       4,     1,    47,    41,     4,    43,    44,    27,    28,    47,
      14,    15,    16,    17,    14,    15,    16,    17,     1,    10,
      11,    12,    13,     6,    43,     8,     1,    10,    11,    12,
      13,     6,     1,     8,     4,    10,    11,    12,    13,     1,
      37,    10,    11,    12,    13,     1,    33,    37,    10,    11,
      12,    13,    37,    37,    10,    11,    12,    13,     6,     1,
       8,     3,    10,    11,    12,    13,    32,    41,    34,    43,
      44,   211,   212,    47,   214,    32,    43,    34,    32,    93,
      34,    95,   220,    33,   222,    38,    33,    39,    37,    33,
       9,    42,    38,     9,    20,     7,    37,    33,    43,    37,
      43,    41,    23,     1,   169,    42,   124,    79,   233,   282,
      99,    -1,   186
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    56,    57,     4,    57,    58,    60,     1,
      43,     0,     1,    58,     1,    43,    61,     1,    58,    30,
      14,    67,    33,     1,    33,    37,    30,     1,    30,    37,
       1,    40,     1,    37,    30,    58,     1,    30,     1,    43,
      59,    68,    69,    59,    59,     1,    59,    41,    43,    44,
      47,    62,     1,    62,    43,    43,    30,    37,     1,    32,
      39,     1,    37,    15,    16,    17,    70,    71,    77,    34,
      34,    34,     1,    34,    43,    44,    40,     1,    40,     6,
       8,    10,    11,    12,    13,    63,    64,    43,     1,    63,
      59,    59,     1,    43,     1,    43,    18,    21,    22,    24,
      26,    43,    48,    49,    77,    78,    79,    81,    90,     1,
      37,    58,    37,    37,    37,    37,     1,    37,    62,    62,
       1,    62,    68,     1,    35,    39,     1,    39,    33,    72,
      72,    37,    72,    29,    33,    41,    43,    44,    47,    81,
      92,    93,    94,    95,    96,    92,    92,    78,    43,    33,
      82,    33,    33,     1,     7,    37,    38,     1,    37,    62,
      65,    66,     1,    65,    63,    63,     1,    63,     1,    14,
      34,    59,    73,    74,    75,    76,    39,     1,    39,    37,
      95,    92,    95,    33,     1,    19,    40,    41,    42,     9,
       1,    23,     1,    25,    38,    34,    91,    92,    30,    35,
      83,    91,    43,    80,    81,    79,    79,    92,     7,     1,
      31,     1,    32,    36,     1,    36,     1,    76,     1,    39,
       1,    34,    37,    63,    63,     1,    64,     1,    34,     1,
      34,    91,    79,    79,    93,     1,    94,     1,    95,    62,
      85,    86,    87,    88,    79,    79,    43,    81,    92,    92,
      92,     1,    32,    34,    43,     1,    91,     1,    34,    32,
      34,    62,    62,    66,    66,     9,     1,     9,    64,     1,
      64,    74,    74,    37,     1,    34,    20,    84,    84,    94,
      95,     7,    37,    32,    39,    33,    27,    28,    89,    92,
      92,     1,    36,    81,    63,    63,     1,    64,    79,    87,
      62,    79,    34,    91,    92,     1,    34,    23,    79
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 130 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					
					//printf("programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT\n");
			   		ParseTreeHead=(yyval)=new ParseNode;
			   		(yyval)->token =Token::PROGRAM_;
			   		(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[(3) - (3)]).last_line, (yylsp[(3) - (3)]).last_column+1);
					reduceNode.Clear();
					YYACCEPT;
					
			   	;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 142 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少点号 checked
			   		ParseTreeHead=(yyval)=new ParseNode;
			   		(yyval)->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
					reduceNode.Delete();
			   	;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 147 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=(yyval)=new ParseNode;
			   		(yyval)->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column);
			   		reduceNode.Delete();
				;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 152 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=(yyval)=new ParseNode;
			   		(yyval)->token =Token::PROGRAM_;
					yyerror("fatal error in program body\n");
					reduceNode.Delete();
			   	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 157 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[(2) - (4)]).first_line, (yylsp[(2) - (4)]).first_column-1);
					reduceNode.Delete();
				;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 162 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[(2) - (5)]).first_line, (yylsp[(2) - (5)]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[(2) - (5)]).last_line, (yylsp[(2) - (5)]).last_column+1);
					reduceNode.Delete();
				;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 168 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[(2) - (4)]).first_line, (yylsp[(2) - (4)]).first_column-1);
					yyerror("missing a dot here", (yylsp[(4) - (4)]).last_line, (yylsp[(4) - (4)]).last_column+1);
					reduceNode.Delete();
				;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 174 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[(2) - (4)]).first_line, (yylsp[(2) - (4)]).first_column-1);
					yyerror("fatal error in program body", (yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column+1, (yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).first_column-1);
					reduceNode.Delete();
				;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 182 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					
					//printf("PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					(yyval)->children.push_back((yyvsp[(1) - (6)])); (yyval)->children.push_back((yyvsp[(2) - (6)]));
					(yyval)->children.push_back((yyvsp[(3) - (6)])); (yyval)->children.push_back((yyvsp[(4) - (6)])); 
					(yyval)->children.push_back((yyvsp[(5) - (6)]));	(yyval)->children.push_back((yyvsp[(6) - (6)]));
					reduceNode.Clear();
				;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 191 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
	
					//printf("PROGRAM_HEAD_: 	PROGRAM ID \n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					reduceNode.Clear();
				;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 199 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少; checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[(5) - (6)]).last_line, (yylsp[(5) - (6)]).last_column+1);
					reduceNode.Delete();
				;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 204 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少主程序名 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[(1) - (6)]).last_line, (yylsp[(1) - (6)]).last_column+1);
					reduceNode.Delete();
				;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 209 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少左括号 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[(4) - (6)]).first_line, (yylsp[(4) - (6)]).first_column-1);
					reduceNode.Delete();
				;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 214 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR  IDENTIFIER_LIST_识别失败 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[(4) - (6)]).first_line, (yylsp[(4) - (6)]).first_column, (yylsp[(4) - (6)]).last_line, (yylsp[(4) - (6)]).last_column);
					reduceNode.Delete();
				;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 219 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少右括号 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[(4) - (6)]).last_line, (yylsp[(4) - (6)]).last_column+1);
					reduceNode.Delete();
				;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 224 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR program head checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_line, (yylsp[(1) - (2)]).last_column);
					reduceNode.Delete();
				;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 229 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR  IDENTIFIER_LIST_缺失 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column);
					reduceNode.Delete();
				;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 234 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR  IDENTIFIER_LIST_缺失 checked
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column);
					reduceNode.Delete();
				;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 241 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					
					//printf("PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::PROGTAM_BODY_;
					(yyval)->children.push_back((yyvsp[(1) - (4)])); (yyval)->children.push_back((yyvsp[(2) - (4)]));
					(yyval)->children.push_back((yyvsp[(3) - (4)])); (yyval)->children.push_back((yyvsp[(4) - (4)]));
					reduceNode.Clear();
				;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 251 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			
						//printf("IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID\n");
			(yyval)=new ParseNode;
			(yyval)->token =Token::IDENTIFIER_LIST_;
			(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
			reduceNode.Clear();
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 258 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
			
						//printf("IDENTIFIER_LIST_:  ID\n");
			(yyval)=new ParseNode;
		   	(yyval)->token =Token::IDENTIFIER_LIST_;
			(yyval)->children.push_back((yyvsp[(1) - (1)]));
			reduceNode.Clear();
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 267 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATIONS_;
						(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 274 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("CONST_DECLARATIONS_: null\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATIONS_;
						reduceNode.Clear();
					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 280 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 常量定义出现错误 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[(2) - (3)]).first_line, (yylsp[(2) - (3)]).first_column, (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 285 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[(2) - (3)]).first_line, (yylsp[(2) - (3)]).first_column, (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 292 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						(yyval)->children.push_back((yyvsp[(1) - (5)])); (yyval)->children.push_back((yyvsp[(2) - (5)]));
						(yyval)->children.push_back((yyvsp[(3) - (5)])); (yyval)->children.push_back((yyvsp[(4) - (5)])); (yyval)->children.push_back((yyvsp[(5) - (5)]));
						reduceNode.Clear();
					;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 300 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //常数初始化右值缺失 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[(4) - (5)]).first_line, (yylsp[(4) - (5)]).first_column, (yylsp[(4) - (5)]).last_line, (yylsp[(4) - (5)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 305 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("CONST_DECLARATION_:     ID RELOP CONST_VARIABLE_\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 312 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //常数初始化右值缺失 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[(3) - (3)]).first_line, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_line, (yylsp[(3) - (3)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 317 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, (yylsp[(1) - (5)]).last_line, (yylsp[(1) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 322 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[(3) - (5)]).first_line, (yylsp[(3) - (5)]).first_column, (yylsp[(3) - (5)]).last_line, (yylsp[(3) - (5)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 327 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[(2) - (3)]).first_line, (yylsp[(2) - (3)]).first_column, (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 334 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					if((yyval)->val != "+" && (yyval)->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_line, (yylsp[(1) - (2)]).last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_VARIABLE_;
						(yyval)->children.push_back((yyvsp[(1) - (2)])); (yyval)->children.push_back((yyvsp[(2) - (2)]));
						reduceNode.Clear();
					}
					
				;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 351 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
				    
						//printf("CONST_VARIABLE_: 	ID\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::CONST_VARIABLE_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
				;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 358 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					if((yyval)->val != "+" && (yyval)->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_line, (yylsp[(1) - (2)]).last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::CONST_VARIABLE_;
						(yyval)->children.push_back((yyvsp[(1) - (2)])); (yyval)->children.push_back((yyvsp[(2) - (2)]));
						reduceNode.Clear();
					}
				;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 374 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
				    
						//printf("CONST_VARIABLE_: 	NUM\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::CONST_VARIABLE_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
				;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 381 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
				    
						//printf("CONST_VARIABLE_: 	LETTER\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::CONST_VARIABLE_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
				;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 391 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
            
						//printf("TYPE_: 	STANDRAD_TYPE_\n");
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			(yyval)->children.push_back((yyvsp[(1) - (1)]));
			reduceNode.Clear();
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 398 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
		    
						//printf("TYPE_: 	RECORD VAR_DECLARATION_ SEMICOLON END\n");
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
            (yyval)->children.push_back((yyvsp[(1) - (4)])); (yyval)->children.push_back((yyvsp[(2) - (4)])); 
			(yyval)->children.push_back((yyvsp[(3) - (4)])); (yyval)->children.push_back((yyvsp[(4) - (4)]));
			reduceNode.Clear();
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 406 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
			
			//printf("TYPE_: 	ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_\n");
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			(yyval)->children.push_back((yyvsp[(1) - (6)]));(yyval)->children.push_back((yyvsp[(2) - (6)]));
			(yyval)->children.push_back((yyvsp[(3) - (6)]));(yyval)->children.push_back((yyvsp[(4) - (6)]));
			(yyval)->children.push_back((yyvsp[(5) - (6)]));(yyval)->children.push_back((yyvsp[(6) - (6)]));
			reduceNode.Clear();
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 415 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少左中括号 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[(1) - (6)]).last_line, (yylsp[(1) - (6)]).last_column+1);
			reduceNode.Delete();
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 420 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少OF关键字 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[(4) - (6)]).last_line, (yylsp[(4) - (6)]).last_column+1, (yylsp[(6) - (6)]).first_line, (yylsp[(6) - (6)]).first_column-1);
			reduceNode.Delete();
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 425 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 数组元素类型识别失败 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[(5) - (6)]).last_line, (yylsp[(5) - (6)]).last_column+1);
			reduceNode.Delete();
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 430 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的数组类型 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 435 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的数组类型 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 440 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的数组类型 checked
			(yyval)=new ParseNode;
			(yyval)->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 447 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("STANDRAD_TYPE_:     INTEGER\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STANDRAD_TYPE_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 454 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("STANDRAD_TYPE_:     REAL\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STANDRAD_TYPE_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
					;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 461 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					    
						//printf("STANDRAD_TYPE_:     CHAR\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STANDRAD_TYPE_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
					;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 468 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					    
						//printf("STANDRAD_TYPE_:     BOLLEAN\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::STANDRAD_TYPE_;
                        (yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
					;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 477 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
            
						//printf("PERIODS_: PERIODS_ COMMA PERIOD_\n");
			(yyval)=new ParseNode;
			(yyval)->token=Token::PERIODS_;
			(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
			(yyval)->children.push_back((yyvsp[(3) - (3)]));
			reduceNode.Clear();
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 485 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少逗号 checked
			(yyval)=new ParseNode;
			(yyval)->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
			reduceNode.Delete();
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 490 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
		    
						//printf("PERIODS_: PERIOD_\n");
			(yyval)=new ParseNode;
			(yyval)->token=Token::PERIODS_;
			(yyval)->children.push_back((yyvsp[(1) - (1)]));
			reduceNode.Clear();
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 499 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
            
						//printf("PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_\n");
			(yyval)=new ParseNode;
			(yyval)->token=Token::PERIOD_;
			(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
			(yyval)->children.push_back((yyvsp[(3) - (3)]));
			reduceNode.Clear();
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 507 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少.. checked
			(yyval)=new ParseNode;
			(yyval)->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
			reduceNode.Delete();
		;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 516 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON\n");
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATIONS_;
						(yyval)->children.push_back((yyvsp[(1) - (3)])); (yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 523 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("VAR_DECLARATIONS_: 	null\n");
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATIONS_;
						reduceNode.Clear();
					;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 529 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 变量定义出现错误 checked
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 534 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 541 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
						
						//printf("VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_\n");
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATION_;
						(yyval)->children.push_back((yyvsp[(1) - (5)]));(yyval)->children.push_back((yyvsp[(2) - (5)]));
						(yyval)->children.push_back((yyvsp[(3) - (5)])); (yyval)->children.push_back((yyvsp[(4) - (5)])); (yyval)->children.push_back((yyvsp[(5) - (5)]));
						reduceNode.Clear();
					;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 549 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					    
						//printf("VAR_DECLARATION_: 	IDENTIFIER_LIST_ COLON TYPE_\n");
						(yyval)=new ParseNode;
						(yyval)->token =Token::VAR_DECLARATION_;
						(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 556 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[(1) - (5)]).last_line, (yylsp[(1) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 561 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少冒号 checked
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[(3) - (5)]).last_line, (yylsp[(3) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 566 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR TYPE_识别失败 checked
						(yyval)=new ParseNode;
						(yyval)->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[(4) - (5)]).last_line, (yylsp[(4) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 571 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR TYPE_识别失败 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[(3) - (3)]).last_line, (yylsp[(3) - (3)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 576 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
						(yyval)=new ParseNode;
						(yyval)->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 583 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
								
						//printf("SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON\n");
								(yyval)=new ParseNode;
								(yyval)->token=Token::SUBPROGRAM_DECLARATIONS_;
								(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));(yyval)->children.push_back((yyvsp[(3) - (3)]));
								reduceNode.Clear();
							;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 590 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
								(yyval)=new ParseNode;
								(yyval)->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
								reduceNode.Delete();
							;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 595 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
							    
						//printf("SUBPROGRAM_DECLARATIONS_: 	null\n");
								(yyval)=new ParseNode;
								(yyval)->token =Token::SUBPROGRAM_DECLARATIONS_;
								reduceNode.Clear();
							;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 603 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                
						//printf("SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_\n");
				(yyval)=new ParseNode;
				(yyval)->token=Token::SUBPROGRAM_DECLARATION_;
				(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
				reduceNode.Clear();
			;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 612 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					    
						//printf("SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						(yyval)->children.push_back((yyvsp[(1) - (6)]));(yyval)->children.push_back((yyvsp[(2) - (6)]));
						(yyval)->children.push_back((yyvsp[(3) - (6)]));(yyval)->children.push_back((yyvsp[(4) - (6)]));
						(yyval)->children.push_back((yyvsp[(5) - (6)]));(yyval)->children.push_back((yyvsp[(6) - (6)]));
						reduceNode.Clear();
					;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 621 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						(yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
						(yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
						reduceNode.Clear();
					;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 629 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID SEMICOLON\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
						(yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 637 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 函数名缺失 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[(1) - (5)]).last_line, (yylsp[(1) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 642 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少冒号 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[(3) - (5)]).last_line, (yylsp[(3) - (5)]).last_column);
						reduceNode.Delete();
					;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 647 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少基本类型关键字 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[(4) - (5)]).last_line, (yylsp[(4) - (5)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 652 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少基本类型关键字 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[(3) - (4)]).last_line, (yylsp[(3) - (4)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 657 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的函数头 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
						reduceNode.Delete();
					;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 662 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的过程头 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
						reduceNode.Delete();
					;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 669 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::FORMAL_PARAMETER_;
						(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));(yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
					;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 676 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                        
						//printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES RIGHT_PARENTHESES\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::FORMAL_PARAMETER_;
						(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
						reduceNode.Clear();
					;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 683 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
					    
						//printf("FORMAL_PARAMETER_: 	null\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::FORMAL_PARAMETER_;
						reduceNode.Clear();
					;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 689 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的形参列表
						(yyval)=new ParseNode;
						(yyval)->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
						reduceNode.Delete();
					;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 694 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 右括号缺失
						(yyval)=new ParseNode;
						(yyval)->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 701 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_\n");
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::PARAMETER_LISTS_;
                                        (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));(yyval)->children.push_back((yyvsp[(3) - (3)]));
										reduceNode.Clear();
                                ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 708 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::PARAMETER_LISTS_;
                                        yyerror("missing a semicolon here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
										reduceNode.Delete();
                                ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 713 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LIST_\n");
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::PARAMETER_LISTS_;
                                        (yyval)->children.push_back((yyvsp[(1) - (1)]));
										reduceNode.Clear();
                                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 722 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
                                
						//printf("PARAMETER_LIST_:         VAR_PARAMETER_ \n");
								(yyval)=new ParseNode;
                                (yyval)->token=Token::PARAMETER_LIST_;
                                (yyval)->children.push_back((yyvsp[(1) - (1)]));
								reduceNode.Clear();
                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 729 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
								
						//printf("PARAMETER_LIST_:         VALUE_PARAMETER_ \n");
                                (yyval)=new ParseNode;
                                (yyval)->token=Token::PARAMETER_LIST_;
                                (yyval)->children.push_back((yyvsp[(1) - (1)]));
								reduceNode.Clear();
                        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 738 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
										
						//printf("VAR_PARAMETER_:         VAR VALUE_PARAMETER_\n");
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::VAR_PARAMETER_;
                                        (yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
										reduceNode.Clear();
                                ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 745 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的引用参数列表 checked
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::VAR_PARAMETER_;
                                        yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
										reduceNode.Delete();
                                ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 752 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                                                
						//printf("VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_\n");
												(yyval)=new ParseNode;
                                                (yyval)->token=Token::VALUE_PARAMETER_;
                                                (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
												(yyval)->children.push_back((yyvsp[(3) - (3)]));
												reduceNode.Clear();
                                        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 760 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少分号 checked
                                                (yyval)=new ParseNode;
                                                (yyval)->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a colon here", (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).last_column+1);
												reduceNode.Delete();
                                        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 765 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少基本类型关键字 checked
                                                (yyval)=new ParseNode;
                                                (yyval)->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
												reduceNode.Delete();
                                        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 770 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少基本类型关键字 checked
                                                (yyval)=new ParseNode;
                                                (yyval)->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[(1) - (2)]).last_line, (yylsp[(1) - (2)]).last_column+1);
												reduceNode.Delete();
                                        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 778 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                                                
						//printf("COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST END\n");
												(yyval)=new ParseNode;
                                                (yyval)->token=Token::COMPOUND_STATEMENT_;
                                                (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));(yyval)->children.push_back((yyvsp[(3) - (3)]));
												reduceNode.Clear();
                                        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 785 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少END关键字 checked
                                                (yyval)=new ParseNode;
                                                (yyval)->token=Token::COMPOUND_STATEMENT_;
                                                yyerror("missing keyword \"end\"", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
												reduceNode.Delete();
                                        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 792 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
										
						//printf("STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_\n");
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::STATEMENT_LIST_;
                                        (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)])); (yyval)->children.push_back((yyvsp[(3) - (3)]));
										reduceNode.Clear();
                                ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 799 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
										
                                        (yyval)=new ParseNode;
                                        (yyval)->token=Token::STATEMENT_LIST_;
                                        yyerror("missing a semicolon here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
										reduceNode.Delete();
                                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 805 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //正常
                                        
						//printf("STATEMENT_LIST_: STATEMENT_\n");
										(yyval)=new ParseNode;
                                        (yyval)->token=Token::STATEMENT_LIST_;
                                        (yyval)->children.push_back((yyvsp[(1) - (1)]));
										reduceNode.Clear();
                                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 814 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						
						
						//printf("STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STATEMENT_;
						(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
						(yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
            ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 823 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						
						//printf("STATEMENT_: CALL_PROCEDURE_STATEMENT_\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STATEMENT_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
            ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 830 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						
						//printf("STATEMENT_:COMPOUND_STATEMENT_\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STATEMENT_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
            ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 837 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						
						//printf("STATEMENT_:IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STATEMENT_;
						(yyval)->children.push_back((yyvsp[(1) - (5)]));(yyval)->children.push_back((yyvsp[(2) - (5)]));
						(yyval)->children.push_back((yyvsp[(3) - (5)]));(yyval)->children.push_back((yyvsp[(4) - (5)]));
						(yyval)->children.push_back((yyvsp[(5) - (5)]));
						reduceNode.Clear();
            ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 846 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						
						//printf("STATEMENT_:CASE EXPRESSION_ OF CASE_BODY_ END\n");
						(yyval)=new ParseNode;
						(yyval)->token=Token::STATEMENT_;
						(yyval)->children.push_back((yyvsp[(1) - (5)]));(yyval)->children.push_back((yyvsp[(2) - (5)]));
						(yyval)->children.push_back((yyvsp[(3) - (5)]));(yyval)->children.push_back((yyvsp[(4) - (5)]));
						(yyval)->children.push_back((yyvsp[(5) - (5)]));
						reduceNode.Clear();
            ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 855 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
								
						//printf("STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_\n");
								(yyval)=new ParseNode;
                                 (yyval)->token=Token::STATEMENT_;
                                 (yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
                                 (yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
								 reduceNode.Clear();
            ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 863 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
                 
						//printf("STATEMENT_:REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_\n");
				 (yyval)=new ParseNode;
                                 (yyval)->token=Token::STATEMENT_;
                                 (yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
                                 (yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
								 reduceNode.Clear();
            ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 871 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
						//printf("STATEMENT_:_READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
				 				(yyval)=new ParseNode;
                                 (yyval)->token=Token::STATEMENT_;
                                 (yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
                                 (yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
								 reduceNode.Clear();
            ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 878 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
                 
						//printf("STATEMENT_:_WRITE LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
								(yyval)=new ParseNode;
                                 (yyval)->token=Token::STATEMENT_;
                                 (yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
                                 (yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
								 reduceNode.Clear();
            ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 886 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少then关键字 checked
                                (yyval)=new ParseNode;
                                (yyval)->token=Token::STATEMENT_;
                                yyerror("missing keyword \"then\"", (yylsp[(2) - (5)]).last_line, (yylsp[(2) - (5)]).last_column+1);
								reduceNode.Delete();
                        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 891 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少关键字do checked
                                (yyval)=new ParseNode;
                                (yyval)->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"do\"", (yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column+1);
								reduceNode.Delete();
                        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 896 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少关键字until checked
                                (yyval)=new ParseNode;
                                (yyval)->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"until\"", (yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).first_column);
								reduceNode.Delete();
                        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 901 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
								
						//printf("STATEMENT_:FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_\n");
                                (yyval)=new ParseNode;
                                (yyval)->token=Token::STATEMENT_;
                                (yyval)->children.push_back((yyvsp[(1) - (8)]));(yyval)->children.push_back((yyvsp[(2) - (8)]));
                                (yyval)->children.push_back((yyvsp[(3) - (8)]));(yyval)->children.push_back((yyvsp[(4) - (8)]));
                                (yyval)->children.push_back((yyvsp[(5) - (8)]));(yyval)->children.push_back((yyvsp[(6) - (8)]));
                                (yyval)->children.push_back((yyvsp[(7) - (8)]));(yyval)->children.push_back((yyvsp[(8) - (8)]));
								reduceNode.Clear();
                        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 911 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {  
								//printf("STATEMENT_:_NULL\n");
								(yyval)=new ParseNode;
                                (yyval)->token=Token::STATEMENT_;
								reduceNode.Clear();
                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 917 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
					//printf("VARIABLE_LIST_:  VARIABLE_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::VARIABLE_LIST_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
           ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 923 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {   
						//printf("VARIABLE_LIST_:VARIABLE_LIST_ COMMA VARIABLE_\n");
								(yyval)=new ParseNode;
                                (yyval)->token=Token::VARIABLE_LIST_;
								(yyval)->children.push_back((yyvsp[(1) - (3)]));
								(yyval)->children.push_back((yyvsp[(2) - (3)]));
								(yyval)->children.push_back((yyvsp[(3) - (3)]));
								reduceNode.Clear();
                        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 932 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
					
						//printf("VARIABLE_:  ID ID_VARPARTS_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::VARIABLE_;
					(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
					reduceNode.Clear();
           ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 940 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
					
						//printf("ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::ID_VARPARTS_;
					(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
					reduceNode.Clear();
               ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 947 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("ID_VARPARTS_:_NULL\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::ID_VARPARTS_;
					reduceNode.Clear();
                ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 954 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::ID_VARPART_;
					(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					reduceNode.Clear();
               ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 962 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("ID_VARPART_: DOT ID\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::ID_VARPART_;
					(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
					reduceNode.Clear();
               ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 969 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 不完整的数组下标列表 checked
                                 (yyval)=new ParseNode;
                                 (yyval)->token=Token::ID_VARPART_;
                                 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
								 reduceNode.Delete();
                           ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 974 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺失右中括号 checked
                                 (yyval)=new ParseNode;
                                 (yyval)->token=Token::ID_VARPART_;
                                 yyerror("missing a right square bracket here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
								 reduceNode.Delete();
                           ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 980 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
				
						//printf("ELSE_PART_:  ELSE STATEMENT_\n");
				(yyval)=new ParseNode;
				(yyval)->token=Token::ELSE_PART_;
				(yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
				reduceNode.Clear();
            ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 987 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
				
						//printf("ELSE_PART_: _NULL\n");
                (yyval)=new ParseNode;
				(yyval)->token=Token::ELSE_PART_;
				reduceNode.Clear();
            ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 994 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
				
						//printf("CASE_BODY_:  BRANCH_LIST_\n");
				(yyval)=new ParseNode;
				(yyval)->token=Token::CASE_BODY_;
				(yyval)->children.push_back((yyvsp[(1) - (1)]));
				reduceNode.Clear();
            ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1001 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
				
				//printf("CASE_BODY_:  _NULL\n");
				(yyval)=new ParseNode;
				(yyval)->token=Token::CASE_BODY_;
				reduceNode.Clear();
            ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1008 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::BRANCH_LIST_;
					(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					reduceNode.Clear();
                ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1016 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("BRANCH_LIST_: BRANCH_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::BRANCH_LIST_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
                ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1024 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
					
						//printf("BRANCH_:  CONST_LIST_ COLON STATEMENT_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::BRANCH_;
					(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					reduceNode.Clear();
;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1033 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::CONST_LIST_;
					(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
					(yyval)->children.push_back((yyvsp[(3) - (3)]));
					reduceNode.Clear();
            ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1041 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
					
						//printf("CONST_LIST_:  CONST_VARIABLE_\n");
					(yyval)=new ParseNode;
					(yyval)->token=Token::CONST_LIST_;
					(yyval)->children.push_back((yyvsp[(1) - (1)]));
					reduceNode.Clear();
            ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1049 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			
						//printf("UPDOWN_: TO\n");
			(yyval)=new ParseNode;
			(yyval)->token=Token::UPDOWN_;
			(yyval)->children.push_back((yyvsp[(1) - (1)]));
			reduceNode.Clear();
        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1056 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			
						//printf("UPDOWN_: DOWNTO\n");
			(yyval)=new ParseNode;
			(yyval)->token=Token::UPDOWN_;
			(yyval)->children.push_back((yyvsp[(1) - (1)]));
			reduceNode.Clear();
        ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1064 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
								
						//printf("CALL_PROCEDURE_STATEMENT_:  ID\n");
								(yyval)=new ParseNode;
								(yyval)->token=Token::CALL_PROCEDURE_STATEMENT_;
								(yyval)->children.push_back((yyvsp[(1) - (1)]));
								reduceNode.Clear();
                            ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1071 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
                                
						//printf("CALL_PROCEDURE_STATEMENT_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
								(yyval)=new ParseNode;
								(yyval)->token=Token::CALL_PROCEDURE_STATEMENT_;
								(yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
								(yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
								reduceNode.Clear();
                            ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1079 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少右括号 checked
								(yyval)=new ParseNode;
								(yyval)->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[(3) - (4)]).last_line, (yylsp[(3) - (4)]).last_column+1);
								reduceNode.Delete();
							;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1084 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//正常
                                
								(yyval)=new ParseNode;
								(yyval)->token=Token::CALL_PROCEDURE_STATEMENT_;
								(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
								(yyval)->children.push_back((yyvsp[(3) - (3)]));
								reduceNode.Clear();
                            ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1092 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	                  
						//printf("EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_\n");
                      (yyval)=new ParseNode;
					  (yyval)->token=Token::EXPRESSION_LIST_;
					  (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
					  (yyval)->children.push_back((yyvsp[(3) - (3)]));
					  reduceNode.Clear();
                    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1100 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
						
						//printf("EXPRESSION_LIST_:  EXPRESSION_\n");
                        (yyval)=new ParseNode;
						(yyval)->token=Token::EXPRESSION_LIST_;
						(yyval)->children.push_back((yyvsp[(1) - (1)]));
						reduceNode.Clear();
                    ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1107 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						(yyval)=new ParseNode;
						(yyval)->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1113 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	             
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_\n");
                 (yyval)=new ParseNode;
				 (yyval)->token=Token::EXPRESSION_;
				 (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
				 (yyval)->children.push_back((yyvsp[(3) - (3)]));
				 reduceNode.Clear();
               ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1121 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
				   
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_\n");
                   (yyval)=new ParseNode;
				   (yyval)->token=Token::EXPRESSION_;
				   (yyval)->children.push_back((yyvsp[(1) - (1)]));
				   reduceNode.Clear();
               ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1129 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	                   
						//printf("SIMPLE_EXPRESSION_:  TERM_\n");
                       (yyval)=new ParseNode;
					   (yyval)->token=Token::SIMPLE_EXPRESSION_;
					   (yyval)->children.push_back((yyvsp[(1) - (1)]));
					   reduceNode.Clear();
                    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1136 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
						
						//printf("SIMPLE_EXPRESSION_:  SIMPLE_EXPRESSION_ ADDOP TERM_\n");
                        (yyval)=new ParseNode;
						(yyval)->token=Token::SIMPLE_EXPRESSION_;
						(yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
						(yyval)->children.push_back((yyvsp[(3) - (3)]));
						reduceNode.Clear();
                    ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1144 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {//error，缺少操作数
						(yyval)=new ParseNode;
						(yyval)->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column+1);
						reduceNode.Delete();
					;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1150 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	      
						//printf("TERM_:  TERM_ MULOP FACTOR_\n");
          (yyval)=new ParseNode;
		  (yyval)->token=Token::TERM_;
		  (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
		  (yyval)->children.push_back((yyvsp[(3) - (3)]));
		  reduceNode.Clear();
        ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1158 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
		  
						//printf("TERM_:  FACTOR_\n");
          (yyval)=new ParseNode;
		  (yyval)->token=Token::TERM_;
		  (yyval)->children.push_back((yyvsp[(1) - (1)]));
		  reduceNode.Clear();
        ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1165 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //error,缺少操作数
			(yyval)=new ParseNode;
			(yyval)->token=Token::TERM_;
			yyerror("missing operand",(yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column+1);
			reduceNode.Delete();
		;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1171 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	         
						//printf("FACTOR_:  UNSIGN_CONST_VARIABLE_\n");
             (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (1)]));
			 reduceNode.Clear();
          ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1178 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
				if((yyval)->val != "+" && (yyval)->val != "-"){
					(yyval)=new ParseNode;
					(yyval)->token =Token::FACTOR_;
					yyerror("fatal error in const variable", (yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_line, (yylsp[(1) - (2)]).last_column);
					reduceNode.Delete();
				}else{
					
					//printf("SIMPLE_EXPRESSION_:  ADDOP TERM_\n");
					(yyval)=new ParseNode;
					(yyval)->token =Token::FACTOR_;
					(yyval)->children.push_back((yyvsp[(1) - (2)])); (yyval)->children.push_back((yyvsp[(2) - (2)]));
					reduceNode.Clear();
				}
                    ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1192 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			 
						//printf("FACTOR_:  VARIABLE_\n");
             (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (1)]));
			 reduceNode.Clear();
          ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1199 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			 
						//printf("FACTOR_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
             (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (4)]));(yyval)->children.push_back((yyvsp[(2) - (4)]));
			 (yyval)->children.push_back((yyvsp[(3) - (4)]));(yyval)->children.push_back((yyvsp[(4) - (4)]));
			 reduceNode.Clear();
          ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1207 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			 
			 (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
			 (yyval)->children.push_back((yyvsp[(3) - (3)]));
			 reduceNode.Clear();
          ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1214 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			 
						//printf("FACTOR_:  LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES\n");
             (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (3)]));(yyval)->children.push_back((yyvsp[(2) - (3)]));
			 (yyval)->children.push_back((yyvsp[(3) - (3)]));
			 reduceNode.Clear();
          ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1222 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
			 
						//printf("FACTOR_:  NOT FACTOR_\n");
             (yyval)=new ParseNode;
			 (yyval)->token=Token::FACTOR_;
			 (yyval)->children.push_back((yyvsp[(1) - (2)]));(yyval)->children.push_back((yyvsp[(2) - (2)]));
			 reduceNode.Clear();
          ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1229 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			(yyval)=new ParseNode;
			(yyval)->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[(3) - (4)]).last_line, (yylsp[(3) - (4)]).last_column+1);
			reduceNode.Delete();
		  ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1234 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 函数调用的表达式列表缺失
			(yyval)=new ParseNode;
			(yyval)->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
			reduceNode.Delete();
		  ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1239 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    { //ERROR 缺少右括号
			(yyval)=new ParseNode;
			(yyval)->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[(2) - (3)]).last_line, (yylsp[(2) - (3)]).last_column+1);
			reduceNode.Delete();
		  ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1245 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
	                         
						//printf("UNSIGN_CONST_VARIABLE_:  NUM\n");
                             (yyval)=new ParseNode;
							 (yyval)->token=Token::UNSIGN_CONST_VARIABLE_;
							 (yyval)->children.push_back((yyvsp[(1) - (1)]));
							 reduceNode.Clear();
                         ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1252 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"
    {
							 
						//printf("UNSIGN_CONST_VARIABLE_:  LETTER\n");
                             (yyval)=new ParseNode;
							 (yyval)->token=Token::UNSIGN_CONST_VARIABLE_;
							 (yyval)->children.push_back((yyvsp[(1) - (1)]));
							 reduceNode.Clear();
                         ;}
    break;



/* Line 1455 of yacc.c  */
#line 3963 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 1675 of yacc.c  */
#line 1262 "D:/Work/Program/Course/Compilation principle/Pascal2C/build/../src/yacc.y"

// 函数定义


void yyerror(const char *s){
	ERROR_NUM++;
    haveSemanticError = true;//错误标志，含有语法错误
    string errorInformation;//定义错误信息
    errorInformation += string(s);//添加错误信息
    errorInformation += ", location: " + itos(yylineno) + "." + itos(yycolumn-yyleng);//添加错误位置
    syntaxErrorInformation.push_back(errorInformation);//存放错误信息
    // cout << errorInformation << endl;
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) + "-" + itos(loc->last_line) + "." + itos(loc->last_column);
    syntaxErrorInformation.push_back(errorInformation);
    // cout << errorInformation << endl;
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
	
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
    syntaxErrorInformation.push_back(errorInformation);
    // cout << errorInformation << endl;
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" + itos(endLine) + "." + itos(endCol);
    
    syntaxErrorInformation.push_back(errorInformation);
    // cout << errorInformation << endl;
}
