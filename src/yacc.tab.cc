/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "/data/workspace/pc/build/../src/yacc.y"




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
extern string itos(int num);

bool haveSemanticError=false;
int rec_line,rec_pos;

ParseNode* ParseTreeHead=NULL;

vector<string> syntaxErrorInformation; //存放语法错误信息


#line 110 "/data/workspace/pc/build/../src/yacc.tab.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_DATA_WORKSPACE_PC_BUILD_INCLUDE_YACC_TAB_H_INCLUDED
# define YY_YY_DATA_WORKSPACE_PC_BUILD_INCLUDE_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_DATA_WORKSPACE_PC_BUILD_INCLUDE_YACC_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  308

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   132,   132,   144,   149,   154,   159,   164,   170,   176,
     184,   193,   201,   206,   211,   216,   221,   226,   231,   236,
     243,   253,   260,   269,   276,   282,   287,   294,   302,   307,
     314,   319,   324,   329,   336,   353,   360,   376,   383,   393,
     400,   408,   417,   422,   427,   432,   437,   442,   449,   456,
     463,   470,   479,   487,   492,   501,   509,   518,   525,   531,
     536,   543,   551,   558,   563,   568,   573,   578,   585,   592,
     597,   605,   614,   623,   631,   639,   644,   649,   654,   659,
     664,   671,   678,   684,   689,   696,   703,   708,   717,   724,
     733,   740,   747,   755,   760,   765,   773,   780,   787,   794,
     800,   809,   818,   825,   832,   841,   850,   858,   866,   873,
     881,   886,   891,   896,   906,   912,   918,   927,   935,   942,
     949,   957,   964,   969,   975,   982,   989,   996,  1003,  1011,
    1019,  1028,  1036,  1044,  1051,  1059,  1066,  1074,  1079,  1087,
    1095,  1102,  1108,  1116,  1124,  1131,  1145,  1153,  1159,  1167,
    1174,  1180,  1187,  1194,  1202,  1209,  1217,  1224,  1229,  1234,
    1240,  1247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "SIMPLE_EXPRESSION_", "TERM_", "FACTOR_", "UNSIGN_CONST_VARIABLE_", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-139)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     359,   109,    21,    38,   337,    29,   341,    58,   143,   209,
     105,  -157,   134,   255,   187,    84,   113,   260,   258,  -157,
      33,  -157,   203,   203,    41,  -157,  -157,  -157,  -157,  -157,
     128,    39,   206,   220,  -157,   230,  -157,  -157,   237,  -157,
     122,   200,   331,   329,   368,   246,   238,   225,  -157,  -157,
    -157,  -157,  -157,  -157,   271,    93,  -157,  -157,   393,   241,
     358,   203,   203,    48,   104,   275,   201,   296,  -157,   279,
     291,   302,   312,   213,  -157,  -157,   128,   128,    52,   203,
      19,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
      -7,   154,   208,   292,  -157,   140,   293,   293,   293,   275,
     307,   272,   332,   342,  -157,    97,  -157,   343,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,   217,   128,   162,   393,   393,   366,    23,   348,
      40,  -157,   351,   288,   293,   288,   360,  -157,  -157,  -157,
      12,   263,   352,  -157,  -157,   403,    10,   131,   376,   286,
      81,   293,   373,   275,  -157,   275,   293,   203,   212,    86,
     221,  -157,  -157,   226,  -157,  -157,  -157,  -157,  -157,   108,
     165,   199,  -157,  -157,  -157,   393,   393,   372,  -157,  -157,
     233,   352,    96,   275,   275,   293,   102,   188,   128,   275,
     275,   265,   293,   293,  -157,   239,  -157,   374,   182,  -157,
     243,  -157,   375,  -157,  -157,  -157,  -157,  -157,   128,   128,
     128,   128,   406,   128,   161,  -157,  -157,    16,   379,   252,
    -157,   252,  -157,  -157,  -157,   381,  -157,  -157,  -157,  -157,
     244,   399,   399,   380,   288,   352,   288,  -157,  -157,   413,
     386,  -157,    83,  -157,  -157,   389,   343,  -157,  -157,   316,
     293,   293,  -157,  -157,  -157,   229,   293,  -157,   373,  -157,
    -157,  -157,  -157,  -157,   393,   393,   385,  -157,  -157,  -157,
    -157,  -157,  -157,   293,  -157,   275,  -157,  -157,   352,  -157,
    -157,   128,   128,   275,   147,  -157,  -157,   293,  -157,  -157,
     293,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,   173,   247,   401,    34,   191,   275,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,     0,     0,     0,     0,     0,     0,    58,    17,
       0,     1,     0,     0,     0,     0,     0,    24,     0,     4,
       0,    70,     0,    18,     0,    11,     5,     3,     2,    25,
       0,     0,    26,    23,     9,     0,     8,     6,     0,    22,
       0,     0,     0,     0,     0,    19,     0,     0,    35,    37,
      38,    33,    30,    29,     0,     0,     7,    59,     0,     0,
       0,    60,    57,     0,     0,   114,     0,    24,    20,     0,
       0,     0,     0,     0,    34,    36,     0,     0,     0,     0,
       0,    48,    49,    51,    50,    67,    39,    21,    66,    62,
       0,     0,    79,    82,    80,     0,     0,     0,     0,   114,
       0,   135,     0,     0,   103,     0,   100,     0,   102,    69,
      68,    71,    13,    14,    15,    16,    12,    10,    31,    32,
      28,    27,     0,    45,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,   119,   160,   161,   152,
       0,   143,   144,   149,   151,     0,     0,     0,     0,     0,
     117,     0,     0,    97,    96,   114,     0,     0,     0,     0,
       0,    54,    46,     0,    63,    64,    65,    61,    83,     0,
       0,     0,    87,    88,    89,     0,    78,     0,    73,   156,
       0,   145,     0,   114,   114,     0,     0,     0,   127,   114,
     114,   114,     0,     0,   138,     0,   140,     0,     0,   118,
       0,   119,     0,   115,    99,    98,   101,    40,     0,     0,
       0,     0,     0,    47,     0,    91,    90,    95,     0,    84,
      81,     0,    75,    76,    77,     0,   159,   155,   158,   154,
       0,   125,   125,   142,     0,   146,     0,   148,   132,     0,
     126,   129,     0,   111,   106,   119,   152,   112,   107,     0,
     137,     0,   136,   121,   122,     0,     0,   109,     0,   108,
      56,    55,    53,    52,     0,     0,     0,    93,    94,    92,
      86,    85,    72,   157,   153,   114,   110,   104,   147,   150,
     105,     0,     0,   114,     0,   133,   134,     0,   141,   139,
     123,   120,   116,    42,    43,    44,    41,   124,   128,   131,
     130,   154,     0,     0,   157,   153,   114,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   424,     6,    -5,  -157,  -157,   -30,   -57,  -156,
     303,   -26,  -157,   347,  -157,  -157,  -157,   315,  -157,   192,
    -157,   259,   387,   333,  -139,  -157,   -63,  -157,  -157,   198,
    -157,  -157,   150,  -157,  -157,  -157,  -143,   -91,   248,  -126,
    -129,  -157
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     7,   170,     8,    16,   159,    85,    86,
     160,   161,    21,    41,    42,    66,    67,   129,   171,   172,
     173,   174,   104,   105,   106,   202,   139,   150,   199,   276,
     239,   240,   241,   242,   287,   108,   195,   196,   141,   142,
     143,   144
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    53,   107,    89,   179,   140,   145,   146,   200,   181,
      13,   189,    18,   183,   204,    40,   205,    43,    44,    46,
     123,   225,     9,    35,   168,    59,    81,    82,    83,    84,
      14,   184,   125,   190,    38,  -137,   107,   169,    11,   230,
      52,   176,    45,   180,   231,   232,   118,   119,   121,    92,
     243,   244,   204,   120,   124,   255,    90,    91,   237,  -137,
     235,   267,   269,   133,    10,   206,    39,   134,   164,   165,
     167,  -137,    15,   111,    40,   135,    39,   136,   137,   177,
      47,   138,    48,    49,    39,    30,    50,   208,    19,   203,
     107,    93,   107,    47,    77,    48,    49,   228,   153,    50,
     247,   248,   249,   234,   154,    94,    23,   279,   278,   215,
     296,   197,     2,     5,    32,   282,   198,   209,   222,   223,
     107,   107,   283,    58,    31,   133,   107,   107,   246,   134,
     229,   133,   191,    78,   155,   134,   297,   135,    24,   136,
     137,   302,    25,   138,   300,   136,   137,    95,   228,   138,
      33,    39,    90,    91,    59,   126,   192,    20,   238,   288,
     289,    60,   265,   162,    26,   288,   217,   307,   155,    47,
     266,    48,    49,   128,  -138,    50,   133,   131,   260,   261,
     134,   301,   288,   254,   262,   263,    59,   262,   135,   236,
     136,   137,  -136,   127,   138,   292,   303,    59,  -138,   288,
     219,    61,   109,    47,   218,    48,    49,   293,   294,    50,
    -138,   133,   107,   288,   116,   134,  -136,   133,   157,   207,
     107,   134,   210,   135,    29,   136,   137,   213,  -136,   138,
     290,   136,   137,   220,   226,   138,   221,    62,   110,    72,
     250,   128,    22,   107,   256,   273,    39,   -82,   304,    54,
     117,   238,   299,   211,   158,    39,    27,   212,   211,    36,
      56,   251,   214,    55,     5,   291,   169,   227,    74,    75,
      59,   251,    73,   252,    57,   251,   251,   257,   274,   251,
      71,   305,    65,    96,    87,    28,    97,    98,    37,    99,
      34,   100,    65,    96,   133,    39,    97,    98,   134,    99,
       5,   100,  -119,   185,   186,   149,   135,  -119,   245,   137,
    -119,    76,   138,   102,   103,   133,   112,   133,   101,   134,
     194,   134,   133,   102,   103,   128,   134,   135,   113,   136,
     137,   136,   137,   138,   135,   138,   136,   137,    12,   114,
     138,     5,    17,   285,   286,     5,    63,    64,    65,   115,
     148,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,    88,
       1,    59,     2,    69,    79,   151,    80,   166,    81,    82,
      83,    84,    79,   224,    80,   152,    81,    82,    83,    84,
     268,   156,    81,    82,    83,    84,   295,   175,   178,    81,
      82,    83,    84,   182,   187,    81,    82,    83,    84,    79,
      59,    80,    70,    81,    82,    83,    84,   258,   130,   259,
     132,   270,   188,   271,   193,   264,   201,   253,   272,   275,
     280,   186,   284,   281,   306,     6,   122,   163,   216,    68,
     277,   298,   147,   233
};

static const yytype_int16 yycheck[] =
{
      30,    31,    65,    60,   133,    96,    97,    98,   151,   135,
       4,     1,     6,     1,   153,    20,   155,    22,    23,    24,
       1,   177,     1,    17,     1,    32,    10,    11,    12,    13,
       1,    19,    39,    23,     1,     1,    99,    14,     0,   182,
       1,     1,     1,   134,   183,   184,    76,    77,    78,     1,
     189,   190,   191,     1,    35,   198,    61,    62,   187,    25,
     186,   217,   218,    29,    43,   156,    43,    33,   125,   126,
     127,    37,    43,    67,    79,    41,    43,    43,    44,    39,
      41,    47,    43,    44,    43,     1,    47,     1,    30,   152,
     153,    43,   155,    41,     1,    43,    44,     1,     1,    47,
     191,   192,   193,     1,     7,     1,     1,   236,   234,     1,
     266,    30,     3,     4,     1,    32,    35,    31,   175,   176,
     183,   184,    39,     1,    40,    29,   189,   190,   191,    33,
      34,    29,     1,    40,    37,    33,   275,    41,    33,    43,
      44,   284,    37,    47,   283,    43,    44,    43,     1,    47,
      37,    43,   157,   158,    32,     1,    25,    14,   188,   250,
     251,    39,     1,     1,    30,   256,     1,   306,    37,    41,
       9,    43,    44,    33,     1,    47,    29,    37,   208,   209,
      33,    34,   273,     1,   210,   211,    32,   213,    41,     1,
      43,    44,     1,    39,    47,   258,   287,    32,    25,   290,
       1,     1,     1,    41,    39,    43,    44,   264,   265,    47,
      37,    29,   275,   304,     1,    33,    25,    29,     1,     7,
     283,    33,     1,    41,    37,    43,    44,     1,    37,    47,
       1,    43,    44,    34,     1,    47,    37,    37,    37,     1,
       1,    33,    33,   306,     1,     1,    43,    39,     1,    43,
      37,   281,   282,    32,    37,    43,     1,    36,    32,     1,
      30,    32,    36,    43,     4,    36,    14,    34,    43,    44,
      32,    32,    34,    34,    37,    32,    32,    34,    34,    32,
      34,    34,    17,    18,    43,    30,    21,    22,    30,    24,
      30,    26,    17,    18,    29,    43,    21,    22,    33,    24,
       4,    26,    30,    40,    41,    33,    41,    35,    43,    44,
      38,    40,    47,    48,    49,    29,    37,    29,    43,    33,
      34,    33,    29,    48,    49,    33,    33,    41,    37,    43,
      44,    43,    44,    47,    41,    47,    43,    44,     1,    37,
      47,     4,     1,    27,    28,     4,    15,    16,    17,    37,
      43,    14,    15,    16,    17,    14,    15,    16,    17,     1,
       1,    32,     3,    34,     6,    33,     8,     1,    10,    11,
      12,    13,     6,     1,     8,    33,    10,    11,    12,    13,
       1,    38,    10,    11,    12,    13,     1,    39,    37,    10,
      11,    12,    13,    33,    42,    10,    11,    12,    13,     6,
      32,     8,    34,    10,    11,    12,    13,    32,    93,    34,
      95,   219,     9,   221,    38,     9,    43,    43,    37,    20,
       7,    41,    33,    37,    23,     1,    79,   124,   169,    42,
     232,   281,    99,   185
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      59,    73,    74,    75,    76,    39,     1,    39,    37,    95,
      92,    94,    33,     1,    19,    40,    41,    42,     9,     1,
      23,     1,    25,    38,    34,    91,    92,    30,    35,    83,
      91,    43,    80,    81,    79,    79,    92,     7,     1,    31,
       1,    32,    36,     1,    36,     1,    76,     1,    39,     1,
      34,    37,    63,    63,     1,    64,     1,    34,     1,    34,
      91,    79,    79,    93,     1,    94,     1,    95,    62,    85,
      86,    87,    88,    79,    79,    43,    81,    92,    92,    92,
       1,    32,    34,    43,     1,    91,     1,    34,    32,    34,
      62,    62,    66,    66,     9,     1,     9,    64,     1,    64,
      74,    74,    37,     1,    34,    20,    84,    84,    94,    95,
       7,    37,    32,    39,    33,    27,    28,    89,    92,    92,
       1,    36,    81,    63,    63,     1,    64,    79,    87,    62,
      79,    34,    91,    92,     1,    34,    23,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    65,    66,    66,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    73,    73,    73,    74,    74,
      75,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     4,     5,     4,     4,
       6,     3,     6,     6,     6,     6,     6,     2,     3,     4,
       4,     3,     1,     3,     0,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     2,     1,     2,     1,     1,     1,
       4,     6,     6,     6,     6,     2,     3,     4,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     0,     3,
       3,     5,     3,     5,     5,     5,     3,     3,     3,     3,
       0,     2,     6,     4,     3,     5,     5,     5,     4,     2,
       2,     3,     0,     2,     3,     3,     3,     1,     1,     1,
       2,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       1,     3,     1,     1,     5,     5,     4,     4,     4,     4,
       5,     4,     4,     8,     0,     1,     3,     2,     2,     0,
       3,     2,     2,     3,     2,     0,     1,     0,     3,     1,
       3,     3,     1,     1,     1,     1,     4,     4,     3,     3,
       1,     3,     3,     1,     1,     2,     3,     4,     3,     1,
       4,     1,     1,     4,     3,     3,     2,     4,     3,     3,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 132 "/data/workspace/pc/build/../src/yacc.y"
                                               { //正常
					
					//printf("programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT\n");
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
			   		yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					reduceNode.Clear();
					YYACCEPT;
					
			   	}
#line 1758 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 3:
#line 144 "/data/workspace/pc/build/../src/yacc.y"
                                                                   { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					reduceNode.Delete();
			   	}
#line 1769 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 4:
#line 149 "/data/workspace/pc/build/../src/yacc.y"
                                                         { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
			   		reduceNode.Delete();
				}
#line 1780 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 5:
#line 154 "/data/workspace/pc/build/../src/yacc.y"
                                                         { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program body\n");
					reduceNode.Delete();
			   	}
#line 1791 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 6:
#line 159 "/data/workspace/pc/build/../src/yacc.y"
                                                                       { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					reduceNode.Delete();
				}
#line 1802 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 7:
#line 164 "/data/workspace/pc/build/../src/yacc.y"
                                                                             { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
					reduceNode.Delete();
				}
#line 1814 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 8:
#line 170 "/data/workspace/pc/build/../src/yacc.y"
                                                                         { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("missing a dot here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					reduceNode.Delete();
				}
#line 1826 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 9:
#line 176 "/data/workspace/pc/build/../src/yacc.y"
                                                               { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
					reduceNode.Delete();
				}
#line 1838 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 10:
#line 184 "/data/workspace/pc/build/../src/yacc.y"
                                                                                        { //正常
					
					//printf("PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-5]); yyval->children.push_back(yyvsp[-4]);
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
					yyval->children.push_back(yyvsp[-1]);	yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 1853 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 11:
#line 193 "/data/workspace/pc/build/../src/yacc.y"
                                                      { //正常
	
					//printf("PROGRAM_HEAD_: 	PROGRAM ID \n");
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 1867 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 12:
#line 201 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                      { //ERROR 缺少; checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					reduceNode.Delete();
				}
#line 1878 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 13:
#line 206 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                              { //ERROR 缺少主程序名 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
					reduceNode.Delete();
				}
#line 1889 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 14:
#line 211 "/data/workspace/pc/build/../src/yacc.y"
                                                                                               { //ERROR 缺少左括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					reduceNode.Delete();
				}
#line 1900 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 15:
#line 216 "/data/workspace/pc/build/../src/yacc.y"
                                                                                               { //ERROR  IDENTIFIER_LIST_识别失败 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					reduceNode.Delete();
				}
#line 1911 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 16:
#line 221 "/data/workspace/pc/build/../src/yacc.y"
                                                                                               { //ERROR 缺少右括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					reduceNode.Delete();
				}
#line 1922 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 17:
#line 226 "/data/workspace/pc/build/../src/yacc.y"
                                               { //ERROR program head checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					reduceNode.Delete();
				}
#line 1933 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 18:
#line 231 "/data/workspace/pc/build/../src/yacc.y"
                                                  { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					reduceNode.Delete();
				}
#line 1944 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 19:
#line 236 "/data/workspace/pc/build/../src/yacc.y"
                                                                   { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					reduceNode.Delete();
				}
#line 1955 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 20:
#line 243 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                  { //正常
					
					//printf("PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGTAM_BODY_;
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 1969 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 21:
#line 253 "/data/workspace/pc/build/../src/yacc.y"
                                             { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			
						//printf("IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID\n");
			yyval=new ParseNode;
			yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 1982 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 22:
#line 260 "/data/workspace/pc/build/../src/yacc.y"
                    { //正常
			
						//printf("IDENTIFIER_LIST_:  ID\n");
			yyval=new ParseNode;
		   	yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 1995 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 23:
#line 269 "/data/workspace/pc/build/../src/yacc.y"
                                                        { //正常
						
						//printf("CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2008 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 24:
#line 276 "/data/workspace/pc/build/../src/yacc.y"
                                          { //正常
						
						//printf("CONST_DECLARATIONS_: null\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						reduceNode.Clear();
					}
#line 2020 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 25:
#line 282 "/data/workspace/pc/build/../src/yacc.y"
                                                                { //ERROR 常量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}
#line 2031 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 26:
#line 287 "/data/workspace/pc/build/../src/yacc.y"
                                                                         { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}
#line 2042 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 27:
#line 294 "/data/workspace/pc/build/../src/yacc.y"
                                                                             { //正常
						
						//printf("CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2056 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 28:
#line 302 "/data/workspace/pc/build/../src/yacc.y"
                                                                                     { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}
#line 2067 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 29:
#line 307 "/data/workspace/pc/build/../src/yacc.y"
                                                                  { //正常
						
						//printf("CONST_DECLARATION_:     ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2080 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 30:
#line 314 "/data/workspace/pc/build/../src/yacc.y"
                                                        { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
						reduceNode.Delete();
					}
#line 2091 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 31:
#line 319 "/data/workspace/pc/build/../src/yacc.y"
                                                                                           { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
						reduceNode.Delete();
					}
#line 2102 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 32:
#line 324 "/data/workspace/pc/build/../src/yacc.y"
                                                                                               { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
						reduceNode.Delete();
					}
#line 2113 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 33:
#line 329 "/data/workspace/pc/build/../src/yacc.y"
                                                                  { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}
#line 2124 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 34:
#line 336 "/data/workspace/pc/build/../src/yacc.y"
                                 { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
					
				}
#line 2147 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 35:
#line 353 "/data/workspace/pc/build/../src/yacc.y"
                                     { //正常
				    
						//printf("CONST_VARIABLE_: 	ID\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 2160 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 36:
#line 360 "/data/workspace/pc/build/../src/yacc.y"
                                            { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
				}
#line 2182 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 37:
#line 376 "/data/workspace/pc/build/../src/yacc.y"
                                      { //正常
				    
						//printf("CONST_VARIABLE_: 	NUM\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 2195 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 38:
#line 383 "/data/workspace/pc/build/../src/yacc.y"
                                        { //正常
				    
						//printf("CONST_VARIABLE_: 	LETTER\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
				}
#line 2208 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 39:
#line 393 "/data/workspace/pc/build/../src/yacc.y"
                      { //正常
            
						//printf("TYPE_: 	STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2221 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 40:
#line 400 "/data/workspace/pc/build/../src/yacc.y"
                                                       { //正常
		    
						//printf("TYPE_: 	RECORD VAR_DECLARATION_ SEMICOLON END\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
            yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
			yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2235 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 41:
#line 408 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                   { //正常
			
			//printf("TYPE_: 	ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2250 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 42:
#line 417 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //ERROR 缺少左中括号 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
			reduceNode.Delete();
		}
#line 2261 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 43:
#line 422 "/data/workspace/pc/build/../src/yacc.y"
                                                                                             { //ERROR 缺少OF关键字 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
			reduceNode.Delete();
		}
#line 2272 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 44:
#line 427 "/data/workspace/pc/build/../src/yacc.y"
                                                                                          { //ERROR 数组元素类型识别失败 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			reduceNode.Delete();
		}
#line 2283 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 45:
#line 432 "/data/workspace/pc/build/../src/yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		}
#line 2294 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 46:
#line 437 "/data/workspace/pc/build/../src/yacc.y"
                                                     { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		}
#line 2305 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 47:
#line 442 "/data/workspace/pc/build/../src/yacc.y"
                                                              { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
			reduceNode.Delete();
		}
#line 2316 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 48:
#line 449 "/data/workspace/pc/build/../src/yacc.y"
                           { //正常
                        
						//printf("STANDRAD_TYPE_:     INTEGER\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2329 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 49:
#line 456 "/data/workspace/pc/build/../src/yacc.y"
                                              { //正常
						
						//printf("STANDRAD_TYPE_:     REAL\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2342 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 50:
#line 463 "/data/workspace/pc/build/../src/yacc.y"
                                              { //正常
					    
						//printf("STANDRAD_TYPE_:     CHAR\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2355 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 51:
#line 470 "/data/workspace/pc/build/../src/yacc.y"
                                                 { //正常
					    
						//printf("STANDRAD_TYPE_:     BOLLEAN\n");
						yyval=new ParseNode;
						yyval->token =Token::STANDRAD_TYPE_;
                        yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2368 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 52:
#line 479 "/data/workspace/pc/build/../src/yacc.y"
                                { //正常
            
						//printf("PERIODS_: PERIODS_ COMMA PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2382 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 53:
#line 487 "/data/workspace/pc/build/../src/yacc.y"
                                        { //ERROR 缺少逗号 checked
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			reduceNode.Delete();
		}
#line 2393 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 54:
#line 492 "/data/workspace/pc/build/../src/yacc.y"
                         { //正常
		    
						//printf("PERIODS_: PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2406 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 55:
#line 501 "/data/workspace/pc/build/../src/yacc.y"
                                                  { //正常
            
						//printf("PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
		}
#line 2420 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 56:
#line 509 "/data/workspace/pc/build/../src/yacc.y"
                                                       { //ERROR 缺少.. checked
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			reduceNode.Delete();
		}
#line 2431 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 57:
#line 518 "/data/workspace/pc/build/../src/yacc.y"
                                                      { //正常
                        
						//printf("VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2444 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 58:
#line 525 "/data/workspace/pc/build/../src/yacc.y"
                                          { //正常
						
						//printf("VAR_DECLARATIONS_: 	null\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						reduceNode.Clear();
					}
#line 2456 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 59:
#line 531 "/data/workspace/pc/build/../src/yacc.y"
                                                             { //ERROR 变量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
						reduceNode.Delete();
					}
#line 2467 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 60:
#line 536 "/data/workspace/pc/build/../src/yacc.y"
                                                                    { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
						reduceNode.Delete();
					}
#line 2478 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 61:
#line 543 "/data/workspace/pc/build/../src/yacc.y"
                                                                                { //正常
						
						//printf("VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2492 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 62:
#line 551 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //正常
					    
						//printf("VAR_DECLARATION_: 	IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2505 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 63:
#line 558 "/data/workspace/pc/build/../src/yacc.y"
                                                                                              { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
						reduceNode.Delete();
					}
#line 2516 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 64:
#line 563 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                  { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
						reduceNode.Delete();
					}
#line 2527 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 65:
#line 568 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                  { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
						reduceNode.Delete();
					}
#line 2538 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 66:
#line 573 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
						reduceNode.Delete();
					}
#line 2549 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 67:
#line 578 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
						reduceNode.Delete();
					}
#line 2560 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 68:
#line 585 "/data/workspace/pc/build/../src/yacc.y"
                                                                                          { //正常
								
						//printf("SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON\n");
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
							}
#line 2573 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 69:
#line 592 "/data/workspace/pc/build/../src/yacc.y"
                                                                                                                { //ERROR 缺少分号 checked
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
								reduceNode.Delete();
							}
#line 2584 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 70:
#line 597 "/data/workspace/pc/build/../src/yacc.y"
                                                          { //正常
							    
						//printf("SUBPROGRAM_DECLARATIONS_: 	null\n");
								yyval=new ParseNode;
								yyval->token =Token::SUBPROGRAM_DECLARATIONS_;
								reduceNode.Clear();
							}
#line 2596 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 71:
#line 605 "/data/workspace/pc/build/../src/yacc.y"
                                                       { //正常
                
						//printf("SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_\n");
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				reduceNode.Clear();
			}
#line 2609 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 72:
#line 614 "/data/workspace/pc/build/../src/yacc.y"
                                                                                    { //正常
					    
						//printf("SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
						yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2624 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 73:
#line 623 "/data/workspace/pc/build/../src/yacc.y"
                                                                                   { //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
						yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2638 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 74:
#line 631 "/data/workspace/pc/build/../src/yacc.y"
                                                                 { //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2652 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 75:
#line 639 "/data/workspace/pc/build/../src/yacc.y"
                                                                                      { //ERROR 函数名缺失 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
						reduceNode.Delete();
					}
#line 2663 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 76:
#line 644 "/data/workspace/pc/build/../src/yacc.y"
                                                                                   { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
						reduceNode.Delete();
					}
#line 2674 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 77:
#line 649 "/data/workspace/pc/build/../src/yacc.y"
                                                                                   { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
						reduceNode.Delete();
					}
#line 2685 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 78:
#line 654 "/data/workspace/pc/build/../src/yacc.y"
                                                                             { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
						reduceNode.Delete();
					}
#line 2696 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 79:
#line 659 "/data/workspace/pc/build/../src/yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
						reduceNode.Delete();
					}
#line 2707 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 80:
#line 664 "/data/workspace/pc/build/../src/yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
						reduceNode.Delete();
					}
#line 2718 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 81:
#line 671 "/data/workspace/pc/build/../src/yacc.y"
                                                                           { //正常
                        
						//printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
#line 2731 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 82:
#line 678 "/data/workspace/pc/build/../src/yacc.y"
                                          { //正常
					    
						//printf("FORMAL_PARAMETER_: 	null\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						reduceNode.Clear();
					}
#line 2743 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 83:
#line 684 "/data/workspace/pc/build/../src/yacc.y"
                                                                { //ERROR 不完整的形参列表
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
						reduceNode.Delete();
					}
#line 2754 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 84:
#line 689 "/data/workspace/pc/build/../src/yacc.y"
                                                                                 { //ERROR 右括号缺失
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
						reduceNode.Delete();
					}
#line 2765 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 85:
#line 696 "/data/workspace/pc/build/../src/yacc.y"
                                                            { //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
										reduceNode.Clear();
                                }
#line 2778 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 86:
#line 703 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
										reduceNode.Delete();
                                }
#line 2789 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 87:
#line 708 "/data/workspace/pc/build/../src/yacc.y"
                                                 { //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[0]);
										reduceNode.Clear();
                                }
#line 2802 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 88:
#line 717 "/data/workspace/pc/build/../src/yacc.y"
                                        { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
                                
						//printf("PARAMETER_LIST_:         VAR_PARAMETER_ \n");
								yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                        }
#line 2815 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 89:
#line 724 "/data/workspace/pc/build/../src/yacc.y"
                                          { //正常
								
						//printf("PARAMETER_LIST_:         VALUE_PARAMETER_ \n");
                                yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                        }
#line 2828 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 90:
#line 733 "/data/workspace/pc/build/../src/yacc.y"
                                            { //正常
										
						//printf("VAR_PARAMETER_:         VAR VALUE_PARAMETER_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
										reduceNode.Clear();
                                }
#line 2841 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 91:
#line 740 "/data/workspace/pc/build/../src/yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
										reduceNode.Delete();
                                }
#line 2852 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 92:
#line 747 "/data/workspace/pc/build/../src/yacc.y"
                                                                { //正常
                                                
						//printf("VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_\n");
												yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
												yyval->children.push_back(yyvsp[0]);
												reduceNode.Clear();
                                        }
#line 2866 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 93:
#line 755 "/data/workspace/pc/build/../src/yacc.y"
                                                                                { //ERROR 缺少分号 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
												reduceNode.Delete();
                                        }
#line 2877 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 94:
#line 760 "/data/workspace/pc/build/../src/yacc.y"
                                                                       { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
												reduceNode.Delete();
                                        }
#line 2888 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 95:
#line 765 "/data/workspace/pc/build/../src/yacc.y"
                                                                 { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
												reduceNode.Delete();
                                        }
#line 2899 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 96:
#line 773 "/data/workspace/pc/build/../src/yacc.y"
                                               { //正常
                                                
						//printf("COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST END\n");
												yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
												reduceNode.Clear();
                                        }
#line 2912 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 97:
#line 780 "/data/workspace/pc/build/../src/yacc.y"
                                                                      { //ERROR 缺少END关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
												reduceNode.Delete();
                                        }
#line 2923 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 98:
#line 787 "/data/workspace/pc/build/../src/yacc.y"
                                                     { //正常
										
						//printf("STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
										reduceNode.Clear();
                                }
#line 2936 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 99:
#line 794 "/data/workspace/pc/build/../src/yacc.y"
                                                                  { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
										
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
										reduceNode.Delete();
                                }
#line 2948 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 100:
#line 800 "/data/workspace/pc/build/../src/yacc.y"
                                            { //正常
                                        
						//printf("STATEMENT_LIST_: STATEMENT_\n");
										yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[0]);
										reduceNode.Clear();
                                }
#line 2961 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 101:
#line 809 "/data/workspace/pc/build/../src/yacc.y"
                                           {//正常
						
						
						//printf("STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
            }
#line 2976 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 102:
#line 818 "/data/workspace/pc/build/../src/yacc.y"
                                       {//正常
						
						//printf("STATEMENT_: CALL_PROCEDURE_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
            }
#line 2989 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 103:
#line 825 "/data/workspace/pc/build/../src/yacc.y"
                                 {//正常
						
						//printf("STATEMENT_:COMPOUND_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
            }
#line 3002 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 104:
#line 832 "/data/workspace/pc/build/../src/yacc.y"
                                                       {//正常
						
						//printf("STATEMENT_:IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
            }
#line 3017 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 105:
#line 841 "/data/workspace/pc/build/../src/yacc.y"
                                                {//正常
						
						//printf("STATEMENT_:CASE EXPRESSION_ OF CASE_BODY_ END\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
            }
#line 3032 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 106:
#line 850 "/data/workspace/pc/build/../src/yacc.y"
                                             {//正常
								
						//printf("STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_\n");
								yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								 reduceNode.Clear();
            }
#line 3046 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 107:
#line 858 "/data/workspace/pc/build/../src/yacc.y"
                                                      {//正常
                 
						//printf("STATEMENT_:REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_\n");
				 yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								 reduceNode.Clear();
            }
#line 3060 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 108:
#line 866 "/data/workspace/pc/build/../src/yacc.y"
                                                                     {//正常
						//printf("STATEMENT_:_READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
				 				yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								 reduceNode.Clear();
            }
#line 3073 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 109:
#line 873 "/data/workspace/pc/build/../src/yacc.y"
                                                                        {//正常
                 
						//printf("STATEMENT_:_WRITE LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
								yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								 reduceNode.Clear();
            }
#line 3087 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 110:
#line 881 "/data/workspace/pc/build/../src/yacc.y"
                                                        { //ERROR 缺少then关键字 checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
								reduceNode.Delete();
                        }
#line 3098 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 111:
#line 886 "/data/workspace/pc/build/../src/yacc.y"
                                                            { //ERROR 缺少关键字do checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
								reduceNode.Delete();
                        }
#line 3109 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 112:
#line 891 "/data/workspace/pc/build/../src/yacc.y"
                                                                  { //ERROR 缺少关键字until checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
								reduceNode.Delete();
                        }
#line 3120 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 113:
#line 896 "/data/workspace/pc/build/../src/yacc.y"
                                                                                       {//正常
								
						//printf("STATEMENT_:FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_\n");
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
                                yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
                                yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                        }
#line 3136 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 114:
#line 906 "/data/workspace/pc/build/../src/yacc.y"
                          {  
								//printf("STATEMENT_:_NULL\n");
								yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
								reduceNode.Clear();
                        }
#line 3147 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 115:
#line 912 "/data/workspace/pc/build/../src/yacc.y"
                          {//正常
					//printf("VARIABLE_LIST_:  VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::VARIABLE_LIST_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
           }
#line 3159 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 116:
#line 918 "/data/workspace/pc/build/../src/yacc.y"
                                           {   
						//printf("VARIABLE_LIST_:VARIABLE_LIST_ COMMA VARIABLE_\n");
								yyval=new ParseNode;
                                yyval->token=Token::VARIABLE_LIST_;
								yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);
								yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                        }
#line 3173 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 117:
#line 927 "/data/workspace/pc/build/../src/yacc.y"
                           {//正常
					
						//printf("VARIABLE_:  ID ID_VARPARTS_\n");
					yyval=new ParseNode;
					yyval->token=Token::VARIABLE_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
           }
#line 3186 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 118:
#line 935 "/data/workspace/pc/build/../src/yacc.y"
                                       {//正常
					
						//printf("ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
               }
#line 3199 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 119:
#line 942 "/data/workspace/pc/build/../src/yacc.y"
                 {
					
						//printf("ID_VARPARTS_:_NULL\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
					reduceNode.Clear();
                }
#line 3211 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 120:
#line 949 "/data/workspace/pc/build/../src/yacc.y"
                                                                               {
					
						//printf("ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
               }
#line 3225 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 121:
#line 957 "/data/workspace/pc/build/../src/yacc.y"
                       {
					
						//printf("ID_VARPART_: DOT ID\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
               }
#line 3238 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 122:
#line 964 "/data/workspace/pc/build/../src/yacc.y"
                                              { //ERROR 不完整的数组下标列表 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
								 reduceNode.Delete();
                           }
#line 3249 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 123:
#line 969 "/data/workspace/pc/build/../src/yacc.y"
                                                                           { //ERROR 缺失右中括号 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
								 reduceNode.Delete();
                           }
#line 3260 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 124:
#line 975 "/data/workspace/pc/build/../src/yacc.y"
                            {//正常
				
						//printf("ELSE_PART_:  ELSE STATEMENT_\n");
				yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				reduceNode.Clear();
            }
#line 3273 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 125:
#line 982 "/data/workspace/pc/build/../src/yacc.y"
              {//正常
				
						//printf("ELSE_PART_: _NULL\n");
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				reduceNode.Clear();
            }
#line 3285 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 126:
#line 989 "/data/workspace/pc/build/../src/yacc.y"
                         {
				
						//printf("CASE_BODY_:  BRANCH_LIST_\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				yyval->children.push_back(yyvsp[0]);
				reduceNode.Clear();
            }
#line 3298 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 127:
#line 996 "/data/workspace/pc/build/../src/yacc.y"
              {
				
				//printf("CASE_BODY_:  _NULL\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				reduceNode.Clear();
            }
#line 3310 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 128:
#line 1003 "/data/workspace/pc/build/../src/yacc.y"
                                             {
					
						//printf("BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
                }
#line 3324 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 129:
#line 1011 "/data/workspace/pc/build/../src/yacc.y"
                         {
					
						//printf("BRANCH_LIST_: BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
                }
#line 3337 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 130:
#line 1019 "/data/workspace/pc/build/../src/yacc.y"
                                      {//正常
					
						//printf("BRANCH_:  CONST_LIST_ COLON STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
}
#line 3351 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 131:
#line 1028 "/data/workspace/pc/build/../src/yacc.y"
                                               {
					
						//printf("CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
            }
#line 3365 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 132:
#line 1036 "/data/workspace/pc/build/../src/yacc.y"
                             {
					
						//printf("CONST_LIST_:  CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[0]);
					reduceNode.Clear();
            }
#line 3378 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 133:
#line 1044 "/data/workspace/pc/build/../src/yacc.y"
           {
			
						//printf("UPDOWN_: TO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
        }
#line 3391 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 134:
#line 1051 "/data/workspace/pc/build/../src/yacc.y"
                {
			
						//printf("UPDOWN_: DOWNTO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
			reduceNode.Clear();
        }
#line 3404 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 135:
#line 1059 "/data/workspace/pc/build/../src/yacc.y"
                              {//正常
								
						//printf("CALL_PROCEDURE_STATEMENT_:  ID\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                            }
#line 3417 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 136:
#line 1066 "/data/workspace/pc/build/../src/yacc.y"
                                                                                    {//正常
                                
						//printf("CALL_PROCEDURE_STATEMENT_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                            }
#line 3431 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 137:
#line 1074 "/data/workspace/pc/build/../src/yacc.y"
                                                                        { //ERROR 缺少右括号 checked
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
								reduceNode.Delete();
							}
#line 3442 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 138:
#line 1079 "/data/workspace/pc/build/../src/yacc.y"
                                                                                               {//正常
                                
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
								yyval->children.push_back(yyvsp[0]);
								reduceNode.Clear();
                            }
#line 3455 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 139:
#line 1087 "/data/workspace/pc/build/../src/yacc.y"
                                                     {
	                  
						//printf("EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_\n");
                      yyval=new ParseNode;
					  yyval->token=Token::EXPRESSION_LIST_;
					  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					  yyval->children.push_back(yyvsp[0]);
					  reduceNode.Clear();
                    }
#line 3469 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 140:
#line 1095 "/data/workspace/pc/build/../src/yacc.y"
                                 {
						
						//printf("EXPRESSION_LIST_:  EXPRESSION_\n");
                        yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
                    }
#line 3482 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 141:
#line 1102 "/data/workspace/pc/build/../src/yacc.y"
                                                        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
						reduceNode.Delete();
					}
#line 3493 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 142:
#line 1108 "/data/workspace/pc/build/../src/yacc.y"
                                                         {
	             
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_\n");
                 yyval=new ParseNode;
				 yyval->token=Token::EXPRESSION_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
				 reduceNode.Clear();
               }
#line 3507 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 143:
#line 1116 "/data/workspace/pc/build/../src/yacc.y"
                                   {
				   
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_\n");
                   yyval=new ParseNode;
				   yyval->token=Token::EXPRESSION_;
				   yyval->children.push_back(yyvsp[0]);
				   reduceNode.Clear();
               }
#line 3520 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 144:
#line 1124 "/data/workspace/pc/build/../src/yacc.y"
                          {
	                   
						//printf("SIMPLE_EXPRESSION_:  TERM_\n");
                       yyval=new ParseNode;
					   yyval->token=Token::SIMPLE_EXPRESSION_;
					   yyval->children.push_back(yyvsp[0]);
					   reduceNode.Clear();
                    }
#line 3533 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 145:
#line 1131 "/data/workspace/pc/build/../src/yacc.y"
                                 {
						if(yyval->val != "+" && yyval->val != "-"){
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
						reduceNode.Delete();
					}else{
						
						//printf("SIMPLE_EXPRESSION_:  ADDOP TERM_\n");
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
					}
                    }
#line 3553 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 146:
#line 1145 "/data/workspace/pc/build/../src/yacc.y"
                                                    {
						
						//printf("SIMPLE_EXPRESSION_:  SIMPLE_EXPRESSION_ ADDOP TERM_\n");
                        yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
						reduceNode.Clear();
                    }
#line 3567 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 147:
#line 1153 "/data/workspace/pc/build/../src/yacc.y"
                                                                      {//error，缺少操作数
						yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
						reduceNode.Delete();
					}
#line 3578 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 148:
#line 1159 "/data/workspace/pc/build/../src/yacc.y"
                           {
	      
						//printf("TERM_:  TERM_ MULOP FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
		  yyval->children.push_back(yyvsp[0]);
		  reduceNode.Clear();
        }
#line 3592 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 149:
#line 1167 "/data/workspace/pc/build/../src/yacc.y"
                 {
		  
						//printf("TERM_:  FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[0]);
		  reduceNode.Clear();
        }
#line 3605 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 150:
#line 1174 "/data/workspace/pc/build/../src/yacc.y"
                                               { //error,缺少操作数
			yyval=new ParseNode;
			yyval->token=Token::TERM_;
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			reduceNode.Delete();
		}
#line 3616 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 151:
#line 1180 "/data/workspace/pc/build/../src/yacc.y"
                                {
	         
						//printf("FACTOR_:  UNSIGN_CONST_VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3629 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 152:
#line 1187 "/data/workspace/pc/build/../src/yacc.y"
                     {
			 
						//printf("FACTOR_:  VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3642 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 153:
#line 1194 "/data/workspace/pc/build/../src/yacc.y"
                                                                  {
			 
						//printf("FACTOR_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3656 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 154:
#line 1202 "/data/workspace/pc/build/../src/yacc.y"
                                                 {
			 
			 yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3669 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 155:
#line 1209 "/data/workspace/pc/build/../src/yacc.y"
                                                          {
			 
						//printf("FACTOR_:  LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3683 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 156:
#line 1217 "/data/workspace/pc/build/../src/yacc.y"
                       {
			 
						//printf("FACTOR_:  NOT FACTOR_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			 reduceNode.Clear();
          }
#line 3696 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 157:
#line 1224 "/data/workspace/pc/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			reduceNode.Delete();
		  }
#line 3707 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 158:
#line 1229 "/data/workspace/pc/build/../src/yacc.y"
                                             { //ERROR 函数调用的表达式列表缺失
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			reduceNode.Delete();
		  }
#line 3718 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 159:
#line 1234 "/data/workspace/pc/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			reduceNode.Delete();
		  }
#line 3729 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 160:
#line 1240 "/data/workspace/pc/build/../src/yacc.y"
                            {
	                         
						//printf("UNSIGN_CONST_VARIABLE_:  NUM\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
							 reduceNode.Clear();
                         }
#line 3742 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;

  case 161:
#line 1247 "/data/workspace/pc/build/../src/yacc.y"
                                 {
							 
						//printf("UNSIGN_CONST_VARIABLE_:  LETTER\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
							 reduceNode.Clear();
                         }
#line 3755 "/data/workspace/pc/build/../src/yacc.tab.cc"
    break;


#line 3759 "/data/workspace/pc/build/../src/yacc.tab.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 1257 "/data/workspace/pc/build/../src/yacc.y"

// 函数定义


void yyerror(const char *s){
	ERROR_NUM++;
    haveSemanticError = true;//错误标志，含有语法错误
    string errorInformation;//定义错误信息
    errorInformation += string(s);//添加错误信息
    errorInformation += ", location: " + itos(yylineno) + "." + itos(yycolumn-yyleng);//添加错误位置
    syntaxErrorInformation.push_back(errorInformation);//存放错误信息
    cout << errorInformation << endl;
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) + "-" + itos(loc->last_line) + "." + itos(loc->last_column);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
	
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" + itos(endLine) + "." + itos(endCol);
    
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}
