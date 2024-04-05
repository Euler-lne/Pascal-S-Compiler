/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"




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


#line 111 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"

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

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_RECORD = 6,                     /* RECORD  */
  YYSYMBOL_END = 7,                        /* END  */
  YYSYMBOL_ARRAY = 8,                      /* ARRAY  */
  YYSYMBOL_OF = 9,                         /* OF  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_REAL = 11,                      /* REAL  */
  YYSYMBOL_BOLLEAN = 12,                   /* BOLLEAN  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_FUNCTION = 15,                  /* FUNCTION  */
  YYSYMBOL_PROCEDURE = 16,                 /* PROCEDURE  */
  YYSYMBOL__BEGIN = 17,                    /* _BEGIN  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_THEN = 19,                      /* THEN  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_REPEAT = 24,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 25,                     /* UNTIL  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_TO = 27,                        /* TO  */
  YYSYMBOL_DOWNTO = 28,                    /* DOWNTO  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_DOT = 30,                       /* DOT  */
  YYSYMBOL_RANGE_DOT = 31,                 /* RANGE_DOT  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_LEFT_PARENTHESES = 33,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 34,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_LEFT_MEDIUM_PARENTHESES = 35,   /* LEFT_MEDIUM_PARENTHESES  */
  YYSYMBOL_RIGHT_MEDIUM_PARENTHESES = 36,  /* RIGHT_MEDIUM_PARENTHESES  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGNOP = 38,                  /* ASSIGNOP  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_RELOP = 40,                     /* RELOP  */
  YYSYMBOL_ADDOP = 41,                     /* ADDOP  */
  YYSYMBOL_MULOP = 42,                     /* MULOP  */
  YYSYMBOL_ID = 43,                        /* ID  */
  YYSYMBOL_NUM = 44,                       /* NUM  */
  YYSYMBOL_INT_NUM = 45,                   /* INT_NUM  */
  YYSYMBOL_FLOAT_NUM = 46,                 /* FLOAT_NUM  */
  YYSYMBOL_LETTER = 47,                    /* LETTER  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_49_ = 49,                       /* '-'  */
  YYSYMBOL_ADD = 50,                       /* ADD  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_MUL = 53,                       /* MUL  */
  YYSYMBOL_UMINUS = 54,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 55,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ONE = 56,                       /* ONE  */
  YYSYMBOL_TWO = 57,                       /* TWO  */
  YYSYMBOL_THREE = 58,                     /* THREE  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_programstruct = 60,             /* programstruct  */
  YYSYMBOL_PROGRAM_HEAD_ = 61,             /* PROGRAM_HEAD_  */
  YYSYMBOL_PROGTAM_BODY_ = 62,             /* PROGTAM_BODY_  */
  YYSYMBOL_IDENTIFIER_LIST_ = 63,          /* IDENTIFIER_LIST_  */
  YYSYMBOL_CONST_DECLARATIONS_ = 64,       /* CONST_DECLARATIONS_  */
  YYSYMBOL_CONST_DECLARATION_ = 65,        /* CONST_DECLARATION_  */
  YYSYMBOL_CONST_VARIABLE_ = 66,           /* CONST_VARIABLE_  */
  YYSYMBOL_TYPE_ = 67,                     /* TYPE_  */
  YYSYMBOL_STANDRAD_TYPE_ = 68,            /* STANDRAD_TYPE_  */
  YYSYMBOL_PERIODS_ = 69,                  /* PERIODS_  */
  YYSYMBOL_PERIOD_ = 70,                   /* PERIOD_  */
  YYSYMBOL_VAR_DECLARATIONS_ = 71,         /* VAR_DECLARATIONS_  */
  YYSYMBOL_VAR_DECLARATION_ = 72,          /* VAR_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_DECLARATIONS_ = 73,  /* SUBPROGRAM_DECLARATIONS_  */
  YYSYMBOL_SUBPROGRAM_DECLARATION_ = 74,   /* SUBPROGRAM_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_HEAD_ = 75,          /* SUBPROGRAM_HEAD_  */
  YYSYMBOL_FORMAL_PARAMETER_ = 76,         /* FORMAL_PARAMETER_  */
  YYSYMBOL_PARAMETER_LISTS_ = 77,          /* PARAMETER_LISTS_  */
  YYSYMBOL_PARAMETER_LIST_ = 78,           /* PARAMETER_LIST_  */
  YYSYMBOL_VAR_PARAMETER_ = 79,            /* VAR_PARAMETER_  */
  YYSYMBOL_VALUE_PARAMETER_ = 80,          /* VALUE_PARAMETER_  */
  YYSYMBOL_COMPOUND_STATEMENT_ = 81,       /* COMPOUND_STATEMENT_  */
  YYSYMBOL_STATEMENT_LIST_ = 82,           /* STATEMENT_LIST_  */
  YYSYMBOL_STATEMENT_ = 83,                /* STATEMENT_  */
  YYSYMBOL_VARIABLE_ = 84,                 /* VARIABLE_  */
  YYSYMBOL_ID_VARPARTS_ = 85,              /* ID_VARPARTS_  */
  YYSYMBOL_ID_VARPART_ = 86,               /* ID_VARPART_  */
  YYSYMBOL_ELSE_PART_ = 87,                /* ELSE_PART_  */
  YYSYMBOL_CASE_BODY_ = 88,                /* CASE_BODY_  */
  YYSYMBOL_BRANCH_LIST_ = 89,              /* BRANCH_LIST_  */
  YYSYMBOL_BRANCH_ = 90,                   /* BRANCH_  */
  YYSYMBOL_CONST_LIST_ = 91,               /* CONST_LIST_  */
  YYSYMBOL_UPDOWN_ = 92,                   /* UPDOWN_  */
  YYSYMBOL_CALL_PROCEDURE_STATEMENT_ = 93, /* CALL_PROCEDURE_STATEMENT_  */
  YYSYMBOL_EXPRESSION_LIST_ = 94,          /* EXPRESSION_LIST_  */
  YYSYMBOL_EXPRESSION_ = 95,               /* EXPRESSION_  */
  YYSYMBOL_SIMPLE_EXPRESSION_ = 96,        /* SIMPLE_EXPRESSION_  */
  YYSYMBOL_TERM_ = 97,                     /* TERM_  */
  YYSYMBOL_FACTOR_ = 98,                   /* FACTOR_  */
  YYSYMBOL_UNSIGN_CONST_VARIABLE_ = 99     /* UNSIGN_CONST_VARIABLE_  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    51,    48,     2,    49,     2,    52,     2,     2,
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
      45,    46,    47,    50,    53,    54,    55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   132,   132,   142,   146,   150,   154,   158,   163,   168,
     175,   183,   187,   191,   195,   199,   203,   207,   211,   217,
     226,   232,   240,   246,   251,   255,   261,   268,   272,   278,
     282,   286,   290,   296,   311,   317,   331,   337,   346,   352,
     358,   366,   370,   374,   378,   382,   386,   392,   398,   404,
     410,   418,   425,   429,   437,   444,   452,   458,   463,   467,
     473,   480,   486,   490,   494,   498,   502,   508,   514,   518,
     525,   533,   539,   546,   550,   554,   558,   562,   566,   572,
     578,   583,   587,   593,   599,   603,   611,   617,   625,   631,
     637,   643,   647,   651,   658,   664,   670,   676,   681,   689,
     697,   703,   709,   717,   725,   732,   739,   743,   747,   751,
     760,   767,   774,   780,   786,   793,   799,   803,   808,   814,
     820,   826,   832,   839,   846,   854,   861,   868,   874,   881,
     887,   894,   899,   906,   912,   917,   924,   931,   937,   949,
     956,   961,   968,   974,   979,   985,   991,   998,  1005,  1011,
    1015,  1019,  1024,  1030
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM", "CONST",
  "TYPE", "RECORD", "END", "ARRAY", "OF", "INTEGER", "REAL", "BOLLEAN",
  "CHAR", "VAR", "FUNCTION", "PROCEDURE", "_BEGIN", "IF", "THEN", "ELSE",
  "CASE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR", "TO", "DOWNTO", "NOT",
  "DOT", "RANGE_DOT", "COMMA", "LEFT_PARENTHESES", "RIGHT_PARENTHESES",
  "LEFT_MEDIUM_PARENTHESES", "RIGHT_MEDIUM_PARENTHESES", "SEMICOLON",
  "ASSIGNOP", "COLON", "RELOP", "ADDOP", "MULOP", "ID", "NUM", "INT_NUM",
  "FLOAT_NUM", "LETTER", "'+'", "'-'", "ADD", "'*'", "'/'", "MUL",
  "UMINUS", "LOWER_THAN_ELSE", "ONE", "TWO", "THREE", "$accept",
  "programstruct", "PROGRAM_HEAD_", "PROGTAM_BODY_", "IDENTIFIER_LIST_",
  "CONST_DECLARATIONS_", "CONST_DECLARATION_", "CONST_VARIABLE_", "TYPE_",
  "STANDRAD_TYPE_", "PERIODS_", "PERIOD_", "VAR_DECLARATIONS_",
  "VAR_DECLARATION_", "SUBPROGRAM_DECLARATIONS_",
  "SUBPROGRAM_DECLARATION_", "SUBPROGRAM_HEAD_", "FORMAL_PARAMETER_",
  "PARAMETER_LISTS_", "PARAMETER_LIST_", "VAR_PARAMETER_",
  "VALUE_PARAMETER_", "COMPOUND_STATEMENT_", "STATEMENT_LIST_",
  "STATEMENT_", "VARIABLE_", "ID_VARPARTS_", "ID_VARPART_", "ELSE_PART_",
  "CASE_BODY_", "BRANCH_LIST_", "BRANCH_", "CONST_LIST_", "UPDOWN_",
  "CALL_PROCEDURE_STATEMENT_", "EXPRESSION_LIST_", "EXPRESSION_",
  "SIMPLE_EXPRESSION_", "TERM_", "FACTOR_", "UNSIGN_CONST_VARIABLE_", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-171)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-132)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     363,   236,    25,    90,   279,    27,   285,   -14,    85,    82,
     205,  -171,   174,     9,   183,    24,    43,   217,   218,  -171,
      28,  -171,   182,   182,    33,  -171,  -171,  -171,  -171,   312,
      88,   187,   208,  -171,   184,  -171,  -171,   229,  -171,    22,
     111,    16,   197,   333,   247,   200,   283,  -171,  -171,  -171,
    -171,  -171,  -171,   215,    44,  -171,  -171,   339,   227,   297,
     182,   182,    39,    40,   241,   166,   281,  -171,   253,   260,
     267,   277,   171,  -171,  -171,   312,   312,   142,   182,   172,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,   185,
      87,   -12,   287,  -171,   287,   235,   235,   235,   241,   301,
     308,  -171,    99,  -171,   310,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,   103,
     312,   149,   339,   339,   305,    23,   315,    52,   335,   244,
     235,   244,   340,  -171,  -171,  -171,   273,   292,   332,  -171,
    -171,   366,    91,   138,   338,   235,    83,   241,  -171,   241,
     235,   182,  -171,   182,   126,   177,  -171,  -171,   180,  -171,
    -171,  -171,  -171,  -171,    59,   152,   124,  -171,  -171,  -171,
     339,   339,   311,  -171,  -171,   194,   332,    34,   241,   241,
     235,   127,   133,   312,   241,   241,   228,   235,   235,   201,
    -171,   334,    64,  -171,  -171,  -171,  -171,   312,   312,   312,
     312,   369,   312,   214,  -171,  -171,   350,   318,   213,  -171,
     213,  -171,  -171,  -171,   342,  -171,  -171,  -171,   209,   360,
     360,   341,   244,   332,   244,  -171,  -171,   374,   346,  -171,
     221,  -171,  -171,   351,   310,  -171,  -171,   330,   235,   235,
    -171,  -171,  -171,   186,  -171,  -171,  -171,  -171,   339,   339,
     324,  -171,  -171,  -171,  -171,  -171,  -171,   235,  -171,   241,
    -171,  -171,   332,  -171,  -171,   312,   312,   241,    34,  -171,
    -171,   235,  -171,  -171,   235,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,   210,   362,   108,   163,   241,  -171
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,     0,     0,     0,     0,     0,     0,    57,    16,
       0,     1,     0,     0,     0,     0,     0,    23,     0,     4,
       0,    69,     0,    17,     0,     5,     3,     2,    24,     0,
       0,    25,    22,     9,     0,     8,     6,     0,    21,     0,
       0,     0,     0,     0,    18,     0,     0,    34,    36,    37,
      32,    29,    28,     0,     0,     7,    58,     0,     0,     0,
      59,    56,     0,     0,   110,     0,    23,    19,     0,     0,
       0,     0,     0,    33,    35,     0,     0,     0,     0,     0,
      47,    48,    50,    49,    66,    38,    20,    65,    61,     0,
       0,    77,    80,    78,    80,     0,     0,     0,   110,     0,
     129,   101,     0,    98,     0,   100,    68,    67,    70,    12,
      13,    14,    15,    11,    10,    30,    31,    27,    26,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   152,   153,   145,     0,   136,   137,   142,
     144,     0,     0,     0,     0,     0,   111,    95,    94,   110,
       0,     0,    39,     0,     0,     0,    53,    45,     0,    62,
      63,    64,    60,    81,     0,     0,     0,    85,    86,    87,
       0,    76,     0,    71,   148,     0,   138,     0,   110,   110,
       0,     0,     0,   121,   110,   110,   110,     0,     0,     0,
     133,     0,     0,   112,    97,    96,    99,     0,     0,     0,
       0,     0,    46,     0,    89,    88,    93,     0,    82,    79,
       0,    73,    74,    75,     0,   151,   147,   150,     0,   119,
     119,   135,     0,   139,     0,   141,   126,     0,   120,   123,
       0,   107,   104,   113,   145,   108,   105,     0,   131,     0,
     130,   115,   116,     0,    55,    54,    52,    51,     0,     0,
       0,    91,    92,    90,    84,    83,    72,   149,   146,   110,
     106,   102,   140,   143,   103,     0,     0,   110,     0,   127,
     128,     0,   134,   132,   117,   114,    41,    42,    43,    40,
     118,   122,   125,   124,     0,     0,   149,   146,   110,   109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,   385,    13,    -9,  -171,  -171,   -29,   -50,  -164,
     266,   140,  -171,   313,  -171,  -171,  -171,   276,  -171,   161,
    -171,   224,   348,   294,  -129,   -62,  -171,  -171,   170,  -171,
    -171,   128,  -171,  -171,  -171,  -170,   -92,   216,  -119,  -123,
    -171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     7,   165,     8,    16,   154,    84,    85,
     155,   156,    21,    40,    41,    65,    66,   126,   166,   167,
     168,   169,   101,   102,   103,   135,   146,   193,   260,   227,
     228,   229,   230,   271,   105,   189,   190,   137,   138,   139,
     140
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    52,   104,   136,   141,   142,   174,   218,   214,    88,
      26,    39,   176,    42,    43,    45,    19,    13,   194,    18,
     195,   125,   243,    57,   163,    29,     9,   -80,    14,    37,
      34,    62,    63,    64,    44,   217,   104,   164,   175,    27,
      91,    93,   251,   253,    31,    76,   115,   116,   118,   219,
     220,    89,    90,   171,    58,   231,   232,   194,   196,   225,
     204,    59,   223,   129,    30,   242,    38,   130,    10,    39,
      15,    38,   159,   160,   162,   131,    38,   132,   133,   108,
      32,   134,    92,    94,    77,   104,   279,   104,   123,    51,
      11,   172,   184,   129,   235,   236,   237,   130,   284,    20,
     147,   263,    38,   262,   151,   131,   148,   132,   133,  -131,
     152,   134,    60,   191,   185,    22,   104,   104,   192,    58,
     211,   212,   104,   104,   234,   208,   124,   197,   222,    46,
     280,    47,    48,  -131,   224,    49,   149,   129,   283,   186,
     153,   130,    89,   117,    90,  -131,   272,   273,    61,   131,
     157,   132,   133,   206,   226,   134,   129,   198,   209,   289,
     130,   210,   129,   187,  -130,   272,   130,   106,   244,   245,
     132,   133,   113,   120,   134,   149,   132,   133,   199,   285,
     134,   202,   272,    46,    58,    47,    48,   274,  -130,    49,
      46,   207,    47,    48,   272,   215,    49,   104,   276,   277,
    -130,    71,   238,   107,    25,   104,    23,   121,   114,   200,
     257,   286,   200,   201,    55,   249,   203,    58,   239,    35,
      28,     5,   275,   250,   122,    38,   104,   164,   216,    58,
      53,    68,    58,   239,    72,   240,   226,   282,    24,     2,
       5,   239,   239,   258,   287,    64,    95,    33,    36,    96,
      97,    54,    98,   266,    99,    75,    38,   129,    64,    95,
     267,   130,    96,    97,   129,    98,    56,    99,   130,   131,
      86,   233,   133,   129,   178,   134,   131,   130,   132,   133,
      12,    70,   134,     5,   100,     5,    17,   132,   133,     5,
     109,   134,   179,   -23,   -23,   -23,   -23,   110,    87,   -23,
     -23,   -23,   -23,    78,   111,    79,   161,    80,    81,    82,
      83,    78,   213,    79,   112,    80,    81,    82,    83,   252,
     125,    80,    81,    82,    83,   278,    73,    74,    80,    81,
      82,    83,   180,   181,    80,    81,    82,    83,  -113,   246,
     247,   145,   246,  -113,   144,    78,  -113,    79,   150,    80,
      81,    82,    83,    46,   170,    47,    48,   269,   270,    49,
      80,    81,    82,    83,     1,    58,     2,    69,   127,   254,
     128,   255,   173,   177,   182,   183,   188,   241,   248,   256,
     259,   264,   181,   265,   268,   288,     6,   158,   205,    67,
     261,   119,   143,   281,     0,     0,   221
};

static const yytype_int16 yycheck[] =
{
      29,    30,    64,    95,    96,    97,   129,   177,   172,    59,
       1,    20,   131,    22,    23,    24,    30,     4,   147,     6,
     149,    33,   192,     1,     1,     1,     1,    39,     1,     1,
      17,    15,    16,    17,     1,     1,    98,    14,   130,    30,
       1,     1,   206,   207,     1,     1,    75,    76,    77,   178,
     179,    60,    61,     1,    32,   184,   185,   186,   150,   182,
       1,    39,   181,    29,    40,     1,    43,    33,    43,    78,
      43,    43,   122,   123,   124,    41,    43,    43,    44,    66,
      37,    47,    43,    43,    40,   147,   250,   149,     1,     1,
       0,    39,     1,    29,   186,   187,   188,    33,   268,    14,
       1,   224,    43,   222,     1,    41,     7,    43,    44,     1,
       7,    47,     1,    30,    23,    33,   178,   179,    35,    32,
     170,   171,   184,   185,   186,     1,    39,     1,     1,    41,
     259,    43,    44,    25,     1,    47,    37,    29,   267,     1,
      37,    33,   151,     1,   153,    37,   238,   239,    37,    41,
       1,    43,    44,     1,   183,    47,    29,    31,    34,   288,
      33,    37,    29,    25,     1,   257,    33,     1,   197,   198,
      43,    44,     1,     1,    47,    37,    43,    44,     1,   271,
      47,     1,   274,    41,    32,    43,    44,     1,    25,    47,
      41,    39,    43,    44,   286,     1,    47,   259,   248,   249,
      37,     1,     1,    37,    30,   267,     1,    35,    37,    32,
       1,     1,    32,    36,    30,     1,    36,    32,    32,     1,
      37,     4,    36,     9,    39,    43,   288,    14,    34,    32,
      43,    34,    32,    32,    34,    34,   265,   266,    33,     3,
       4,    32,    32,    34,    34,    17,    18,    30,    30,    21,
      22,    43,    24,    32,    26,    40,    43,    29,    17,    18,
      39,    33,    21,    22,    29,    24,    37,    26,    33,    41,
      43,    43,    44,    29,     1,    47,    41,    33,    43,    44,
       1,    34,    47,     4,    43,     4,     1,    43,    44,     4,
      37,    47,    19,    14,    15,    16,    17,    37,     1,    14,
      15,    16,    17,     6,    37,     8,     1,    10,    11,    12,
      13,     6,     1,     8,    37,    10,    11,    12,    13,     1,
      33,    10,    11,    12,    13,     1,    43,    44,    10,    11,
      12,    13,    40,    41,    10,    11,    12,    13,    30,   199,
     200,    33,   202,    35,    43,     6,    38,     8,    38,    10,
      11,    12,    13,    41,    39,    43,    44,    27,    28,    47,
      10,    11,    12,    13,     1,    32,     3,    34,    92,   208,
      94,   210,    37,    33,    42,     9,    38,    43,     9,    37,
      20,     7,    41,    37,    33,    23,     1,   121,   164,    41,
     220,    78,    98,   265,    -1,    -1,   180
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    60,    61,     4,    61,    62,    64,     1,
      43,     0,     1,    62,     1,    43,    65,     1,    62,    30,
      14,    71,    33,     1,    33,    30,     1,    30,    37,     1,
      40,     1,    37,    30,    62,     1,    30,     1,    43,    63,
      72,    73,    63,    63,     1,    63,    41,    43,    44,    47,
      66,     1,    66,    43,    43,    30,    37,     1,    32,    39,
       1,    37,    15,    16,    17,    74,    75,    81,    34,    34,
      34,     1,    34,    43,    44,    40,     1,    40,     6,     8,
      10,    11,    12,    13,    67,    68,    43,     1,    67,    63,
      63,     1,    43,     1,    43,    18,    21,    22,    24,    26,
      43,    81,    82,    83,    84,    93,     1,    37,    62,    37,
      37,    37,    37,     1,    37,    66,    66,     1,    66,    72,
       1,    35,    39,     1,    39,    33,    76,    76,    76,    29,
      33,    41,    43,    44,    47,    84,    95,    96,    97,    98,
      99,    95,    95,    82,    43,    33,    85,     1,     7,    37,
      38,     1,     7,    37,    66,    69,    70,     1,    69,    67,
      67,     1,    67,     1,    14,    63,    77,    78,    79,    80,
      39,     1,    39,    37,    98,    95,    97,    33,     1,    19,
      40,    41,    42,     9,     1,    23,     1,    25,    38,    94,
      95,    30,    35,    86,    83,    83,    95,     1,    31,     1,
      32,    36,     1,    36,     1,    80,     1,    39,     1,    34,
      37,    67,    67,     1,    68,     1,    34,     1,    94,    83,
      83,    96,     1,    97,     1,    98,    66,    88,    89,    90,
      91,    83,    83,    43,    84,    95,    95,    95,     1,    32,
      34,    43,     1,    94,    66,    66,    70,    70,     9,     1,
       9,    68,     1,    68,    78,    78,    37,     1,    34,    20,
      87,    87,    97,    98,     7,    37,    32,    39,    33,    27,
      28,    92,    95,    95,     1,    36,    67,    67,     1,    68,
      83,    90,    66,    83,    94,    95,     1,    34,    23,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      63,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    85,    85,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    91,    91,    92,    92,    93,
      93,    93,    94,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     4,     5,     4,     4,
       6,     6,     6,     6,     6,     6,     2,     3,     4,     4,
       3,     1,     3,     0,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     2,     1,     2,     1,     1,     1,     3,
       6,     6,     6,     6,     2,     3,     4,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     3,     0,     3,     3,
       5,     3,     5,     5,     5,     3,     3,     3,     3,     0,
       2,     4,     6,     5,     5,     5,     4,     2,     2,     3,
       0,     2,     3,     3,     3,     1,     1,     1,     2,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     1,     3,
       1,     1,     5,     5,     4,     4,     5,     4,     4,     8,
       0,     2,     2,     0,     3,     2,     2,     3,     2,     0,
       1,     0,     3,     1,     3,     3,     1,     1,     1,     1,
       4,     4,     3,     1,     3,     3,     1,     1,     2,     3,
       4,     3,     1,     4,     1,     1,     4,     3,     2,     4,
       3,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* programstruct: PROGRAM_HEAD_ PROGTAM_BODY_ DOT  */
#line 132 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                               { //正常
					
					printf("programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT\n");
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
			   		yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					YYACCEPT;
			   	}
#line 1547 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 3: /* programstruct: PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 142 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                   { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   	}
#line 1557 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 4: /* programstruct: error PROGTAM_BODY_ DOT  */
#line 146 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                         { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
			   	}
#line 1567 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 5: /* programstruct: PROGRAM_HEAD_ error DOT  */
#line 150 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                         { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program body\n");
			   	}
#line 1577 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 6: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ DOT  */
#line 154 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                       { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1587 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 7: /* programstruct: error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT  */
#line 158 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                             { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
				}
#line 1598 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 8: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 163 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                         { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("missing a dot here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
				}
#line 1609 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 9: /* programstruct: error PROGRAM_HEAD_ error DOT  */
#line 168 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                               { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
				}
#line 1620 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 10: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 175 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                        { //正常
					
					printf("PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-5]); yyval->children.push_back(yyvsp[-4]);
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
					yyval->children.push_back(yyvsp[-1]);	yyval->children.push_back(yyvsp[0]);
				}
#line 1634 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 11: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error  */
#line 183 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                      { //ERROR 缺少; checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1644 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 12: /* PROGRAM_HEAD_: PROGRAM error LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 187 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                              { //ERROR 缺少主程序名 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
				}
#line 1654 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 13: /* PROGRAM_HEAD_: PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 191 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                               { //ERROR 缺少左括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1664 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 14: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON  */
#line 195 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                               { //ERROR  IDENTIFIER_LIST_识别失败 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1674 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 15: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ error SEMICOLON  */
#line 199 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                               { //ERROR 缺少右括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 1684 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 16: /* PROGRAM_HEAD_: PROGRAM error  */
#line 203 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                               { //ERROR program head checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1694 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 17: /* PROGRAM_HEAD_: PROGRAM ID error  */
#line 207 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                  { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1704 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 18: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error  */
#line 211 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                   { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1714 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 19: /* PROGTAM_BODY_: CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_  */
#line 217 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                  { //正常
					
					printf("PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGTAM_BODY_;
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1727 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 20: /* IDENTIFIER_LIST_: IDENTIFIER_LIST_ COMMA ID  */
#line 226 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                             { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			
						printf("IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID\n");
			yyval=new ParseNode;
			yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1739 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 21: /* IDENTIFIER_LIST_: ID  */
#line 232 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                    { //正常
			
						printf("IDENTIFIER_LIST_:  ID\n");
			yyval=new ParseNode;
		   	yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1751 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 22: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON  */
#line 240 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                        { //正常
						
						printf("CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1763 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 23: /* CONST_DECLARATIONS_: %empty  */
#line 246 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                          { //正常
						
						printf("CONST_DECLARATIONS_: null\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
					}
#line 1774 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 24: /* CONST_DECLARATIONS_: CONST error SEMICOLON  */
#line 251 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                { //ERROR 常量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1784 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 25: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ error  */
#line 255 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                         { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1794 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 26: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_  */
#line 261 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                             { //正常
						
						printf("CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1807 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 27: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP error  */
#line 268 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                     { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1817 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 28: /* CONST_DECLARATION_: ID RELOP CONST_VARIABLE_  */
#line 272 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                  { //正常
						
						printf("CONST_DECLARATION_:     ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1829 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 29: /* CONST_DECLARATION_: ID RELOP error  */
#line 278 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                        { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
					}
#line 1839 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 30: /* CONST_DECLARATION_: CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_  */
#line 282 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                           { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1849 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 31: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_  */
#line 286 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                               { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1859 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 32: /* CONST_DECLARATION_: ID error CONST_VARIABLE_  */
#line 290 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                  { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1869 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 33: /* CONST_VARIABLE_: ADDOP ID  */
#line 296 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                 { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						
						printf("CONST_VARIABLE_: 	ADDOP ID\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						
						printf("CONST_VARIABLE_: 	ADDOP ID\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
					
				}
#line 1890 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 34: /* CONST_VARIABLE_: ID  */
#line 311 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                     { //正常
				    
						printf("CONST_VARIABLE_: 	ID\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1902 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 35: /* CONST_VARIABLE_: ADDOP NUM  */
#line 317 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                            { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						
						printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						
						printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
				}
#line 1922 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 36: /* CONST_VARIABLE_: NUM  */
#line 331 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                      { //正常
				    
						printf("CONST_VARIABLE_: 	NUM\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1934 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 37: /* CONST_VARIABLE_: LETTER  */
#line 337 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                        { //正常
				    
						printf("CONST_VARIABLE_: 	LETTER\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1946 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 38: /* TYPE_: STANDRAD_TYPE_  */
#line 346 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                      { //正常
            
						printf("TYPE_: 	STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1958 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 39: /* TYPE_: RECORD VAR_DECLARATION_ END  */
#line 352 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                             { //正常
		    
						printf("TYPE_: 	RECORD VAR_DECLARATION_ END\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
            yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1970 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 40: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_  */
#line 358 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                   { //正常
			
			printf("TYPE_: 	ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 1984 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 41: /* TYPE_: ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_  */
#line 366 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //ERROR 缺少左中括号 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
		}
#line 1994 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 42: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_  */
#line 370 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                             { //ERROR 缺少OF关键字 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
		}
#line 2004 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 43: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error  */
#line 374 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                          { //ERROR 数组元素类型识别失败 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2014 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 44: /* TYPE_: ARRAY error  */
#line 378 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2024 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 45: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES error  */
#line 382 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                     { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2034 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 46: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error  */
#line 386 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                              { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2044 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 47: /* STANDRAD_TYPE_: INTEGER  */
#line 392 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                           { //正常
                        
						printf("STANDRAD_TYPE_:     INTEGER\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2056 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 48: /* STANDRAD_TYPE_: REAL  */
#line 398 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                              { //正常
						
						printf("STANDRAD_TYPE_:     REAL\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2068 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 49: /* STANDRAD_TYPE_: CHAR  */
#line 404 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                              { //正常
					    
						printf("STANDRAD_TYPE_:     CHAR\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2080 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 50: /* STANDRAD_TYPE_: BOLLEAN  */
#line 410 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                 { //正常
					    
						printf("STANDRAD_TYPE_:     BOLLEAN\n");
						yyval=new ParseNode;
						yyval->token =Token::STANDRAD_TYPE_;
                        yyval->children.push_back(yyvsp[0]);
					}
#line 2092 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 51: /* PERIODS_: PERIODS_ COMMA PERIOD_  */
#line 418 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                { //正常
            
						printf("PERIODS_: PERIODS_ COMMA PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2105 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 52: /* PERIODS_: PERIODS_ error PERIOD_  */
#line 425 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                        { //ERROR 缺少逗号 checked
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2115 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 53: /* PERIODS_: PERIOD_  */
#line 429 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                         { //正常
		    
						printf("PERIODS_: PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 2127 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 54: /* PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_  */
#line 437 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                  { //正常
            
						printf("PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2140 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 55: /* PERIOD_: CONST_VARIABLE_ error CONST_VARIABLE_  */
#line 444 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                       { //ERROR 缺少.. checked
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2150 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 56: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ SEMICOLON  */
#line 452 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                      { //正常
                        
						printf("VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2162 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 57: /* VAR_DECLARATIONS_: %empty  */
#line 458 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                          { //正常
						
						printf("VAR_DECLARATIONS_: 	null\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
					}
#line 2173 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 58: /* VAR_DECLARATIONS_: VAR error SEMICOLON  */
#line 463 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                             { //ERROR 变量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2183 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 59: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ error  */
#line 467 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                    { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2193 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 60: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_  */
#line 473 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                { //正常
						
						printf("VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2206 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 61: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON TYPE_  */
#line 480 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //正常
					    
						printf("VAR_DECLARATION_: 	IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2218 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 62: /* VAR_DECLARATION_: VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_  */
#line 486 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                              { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2228 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 63: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_  */
#line 490 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                  { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2238 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 64: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error  */
#line 494 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                  { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2248 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 65: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON error  */
#line 498 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					}
#line 2258 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 66: /* VAR_DECLARATION_: IDENTIFIER_LIST_ error TYPE_  */
#line 502 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2268 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 67: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON  */
#line 508 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                          { //正常
								
						printf("SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON\n");
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
							}
#line 2280 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 68: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error  */
#line 514 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                                { //ERROR 缺少分号 checked
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 2290 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 69: /* SUBPROGRAM_DECLARATIONS_: %empty  */
#line 518 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                          { //正常
							    
						printf("SUBPROGRAM_DECLARATIONS_: 	null\n");
								yyval=new ParseNode;
								yyval->token =Token::SUBPROGRAM_DECLARATIONS_;
							}
#line 2301 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 70: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_  */
#line 525 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                       { //正常
                
						printf("SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_\n");
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2313 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 71: /* SUBPROGRAM_HEAD_: PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON  */
#line 533 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                { //正常
                        
						printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					}
#line 2325 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 72: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON  */
#line 539 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                                      { //正常
					    
						printf("SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2338 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 73: /* SUBPROGRAM_HEAD_: FUNCTION error FORMAL_PARAMETER_ COLON TYPE_  */
#line 546 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                      { //ERROR 函数名缺失 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2348 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 74: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error TYPE_  */
#line 550 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                   { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2358 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 75: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON error  */
#line 554 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                   { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2368 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 76: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error  */
#line 558 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                             { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2378 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 77: /* SUBPROGRAM_HEAD_: FUNCTION error  */
#line 562 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
					}
#line 2388 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 78: /* SUBPROGRAM_HEAD_: PROCEDURE error  */
#line 566 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
					}
#line 2398 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 79: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES  */
#line 572 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                           { //正常
                        
						printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2410 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 80: /* FORMAL_PARAMETER_: %empty  */
#line 578 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                          { //正常
					    
						printf("FORMAL_PARAMETER_: 	null\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
					}
#line 2421 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 81: /* FORMAL_PARAMETER_: LEFT_PARENTHESES error  */
#line 583 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                { //ERROR 不完整的形参列表
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
					}
#line 2431 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 82: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ error  */
#line 587 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                 { //ERROR 右括号缺失
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2441 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 83: /* PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_  */
#line 593 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                            { //正常
										
						printf("PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                }
#line 2453 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 84: /* PARAMETER_LISTS_: PARAMETER_LISTS_ error PARAMETER_LIST_  */
#line 599 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                                }
#line 2463 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 85: /* PARAMETER_LISTS_: PARAMETER_LIST_  */
#line 603 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                 { //正常
										
						printf("PARAMETER_LISTS_: PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[0]);
                                }
#line 2475 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 86: /* PARAMETER_LIST_: VAR_PARAMETER_  */
#line 611 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                        { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
                                
						printf("PARAMETER_LIST_:         VAR_PARAMETER_ \n");
								yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
                        }
#line 2487 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 87: /* PARAMETER_LIST_: VALUE_PARAMETER_  */
#line 617 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                          { //正常
								
						printf("PARAMETER_LIST_:         VALUE_PARAMETER_ \n");
                                yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
                        }
#line 2499 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 88: /* VAR_PARAMETER_: VAR VALUE_PARAMETER_  */
#line 625 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                            { //正常
										
						printf("VAR_PARAMETER_:         VAR VALUE_PARAMETER_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                }
#line 2511 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 89: /* VAR_PARAMETER_: VAR error  */
#line 631 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
                                }
#line 2521 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 90: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON STANDRAD_TYPE_  */
#line 637 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                { //正常
                                                
						printf("VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_\n");
												yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                        }
#line 2533 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 91: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error STANDRAD_TYPE_  */
#line 643 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                { //ERROR 缺少分号 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
                                        }
#line 2543 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 92: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON error  */
#line 647 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                       { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2553 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 93: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error  */
#line 651 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                 { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2563 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 94: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ END  */
#line 658 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                               { //正常
                                                
						printf("COMPOUND_STATEMENT_: BEGIN STATEMENT_LIST END\n");
												yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                        }
#line 2575 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 95: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ error  */
#line 664 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                      { //ERROR 缺少END关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2585 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 96: /* STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_  */
#line 670 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                     { //正常
										
						printf("STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
                                }
#line 2597 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 97: /* STATEMENT_LIST_: STATEMENT_LIST_ error STATEMENT_  */
#line 676 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                  { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
										
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                                }
#line 2608 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 98: /* STATEMENT_LIST_: STATEMENT_  */
#line 681 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                            { //正常
                                        
						printf("STATEMENT_LIST_: STATEMENT_\n");
										yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[0]);
                                }
#line 2620 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 99: /* STATEMENT_: VARIABLE_ ASSIGNOP EXPRESSION_  */
#line 689 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                           {//正常
						
						
						printf("STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2634 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 100: /* STATEMENT_: CALL_PROCEDURE_STATEMENT_  */
#line 697 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                       {//正常
						
						printf("STATEMENT_: CALL_PROCEDURE_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
            }
#line 2646 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 101: /* STATEMENT_: COMPOUND_STATEMENT_  */
#line 703 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                 {//正常
						
						printf("STATEMENT_:COMPOUND_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
            }
#line 2658 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 102: /* STATEMENT_: IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_  */
#line 709 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                       {//正常
						
						printf("STATEMENT_:IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2672 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 103: /* STATEMENT_: CASE EXPRESSION_ OF CASE_BODY_ END  */
#line 717 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                {//正常
						
						printf("STATEMENT_:CASE EXPRESSION_ OF CASE_BODY_ END\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2686 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 104: /* STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_  */
#line 725 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                             {//正常
								
						printf("STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_\n");
								yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2699 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 105: /* STATEMENT_: REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_  */
#line 732 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                      {//正常
                 
						printf("STATEMENT_:REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_\n");
				 yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2712 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 106: /* STATEMENT_: IF EXPRESSION_ error STATEMENT_ ELSE_PART_  */
#line 739 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                        { //ERROR 缺少then关键字 checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
                        }
#line 2722 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 107: /* STATEMENT_: WHILE EXPRESSION_ error STATEMENT_  */
#line 743 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                            { //ERROR 缺少关键字do checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                        }
#line 2732 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 108: /* STATEMENT_: REPEAT STATEMENT_LIST_ error EXPRESSION_  */
#line 747 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                  { //ERROR 缺少关键字until checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
                        }
#line 2742 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 109: /* STATEMENT_: FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_  */
#line 751 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                       {//正常
								
						printf("STATEMENT_:FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_\n");
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
                                yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
                                yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                        }
#line 2757 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 110: /* STATEMENT_: %empty  */
#line 760 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                          {
                                
						printf("STATEMENT_:kong\n");
								yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                        }
#line 2768 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 111: /* VARIABLE_: ID ID_VARPARTS_  */
#line 767 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                           {//正常
					
						printf("VARIABLE_:  ID ID_VARPARTS_\n");
					yyval=new ParseNode;
					yyval->token=Token::VARIABLE_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
           }
#line 2780 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 112: /* ID_VARPARTS_: ID_VARPARTS_ ID_VARPART_  */
#line 774 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                       {//正常
					
						printf("ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2792 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 113: /* ID_VARPARTS_: %empty  */
#line 780 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                 {
					
						printf("STATEMENT_:kong\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
                }
#line 2803 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 114: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES  */
#line 786 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                               {
					
						printf("ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[-1]);
               }
#line 2816 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 115: /* ID_VARPART_: DOT ID  */
#line 793 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                       {
					
						printf("ID_VARPART_: DOT ID\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2828 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 116: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES error  */
#line 799 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                              { //ERROR 不完整的数组下标列表 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
                           }
#line 2838 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 117: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error  */
#line 803 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                           { //ERROR 缺失右中括号 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                           }
#line 2848 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 118: /* ELSE_PART_: ELSE STATEMENT_  */
#line 808 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                            {//正常
				
						printf("ELSE_PART_:  ELSE STATEMENT_\n");
				yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2860 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 119: /* ELSE_PART_: %empty  */
#line 814 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
              {//正常
				
						printf("ELSE_PART_: kong\n");
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
            }
#line 2871 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 120: /* CASE_BODY_: BRANCH_LIST_  */
#line 820 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                         {
				
						printf("CASE_BODY_:  BRANCH_LIST_\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2883 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 121: /* CASE_BODY_: %empty  */
#line 826 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
              {
				
						printf("CASE_BODY_:  kong\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
            }
#line 2894 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 122: /* BRANCH_LIST_: BRANCH_LIST_ SEMICOLON BRANCH_  */
#line 832 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                             {
					
						printf("BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
                }
#line 2907 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 123: /* BRANCH_LIST_: BRANCH_  */
#line 839 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                         {
					
						printf("BRANCH_LIST_: BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[0]);
                }
#line 2919 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 124: /* BRANCH_: CONST_LIST_ COLON STATEMENT_  */
#line 846 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                      {//正常
					
						printf("BRANCH_:  CONST_LIST_ COLON STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
}
#line 2932 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 125: /* CONST_LIST_: CONST_LIST_ COMMA CONST_VARIABLE_  */
#line 854 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                               {
					
						printf("CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
            }
#line 2945 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 126: /* CONST_LIST_: CONST_VARIABLE_  */
#line 861 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                             {
					
						printf("CONST_LIST_:  CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[0]);
            }
#line 2957 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 127: /* UPDOWN_: TO  */
#line 868 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
           {
			
						printf("UPDOWN_: TO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2969 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 128: /* UPDOWN_: DOWNTO  */
#line 874 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                {
			
						printf("UPDOWN_: DOWNTO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2981 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 129: /* CALL_PROCEDURE_STATEMENT_: ID  */
#line 881 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                              {//正常
								
						printf("CALL_PROCEDURE_STATEMENT_:  ID\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[0]);
                            }
#line 2993 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 130: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 887 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                                    {//正常
                                
						printf("CALL_PROCEDURE_STATEMENT_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                            }
#line 3006 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 131: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 894 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                        { //ERROR 缺少右括号 checked
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 3016 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 132: /* EXPRESSION_LIST_: EXPRESSION_LIST_ COMMA EXPRESSION_  */
#line 899 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                     {
	                  
						printf("EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_\n");
                      yyval=new ParseNode;
					  yyval->token=Token::EXPRESSION_LIST_;
					  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					  yyval->children.push_back(yyvsp[0]);
                    }
#line 3029 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 133: /* EXPRESSION_LIST_: EXPRESSION_  */
#line 906 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                 {
						
						printf("EXPRESSION_LIST_:  EXPRESSION_\n");
                        yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3041 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 134: /* EXPRESSION_LIST_: EXPRESSION_LIST_ error EXPRESSION_  */
#line 912 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3051 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 135: /* EXPRESSION_: SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_  */
#line 917 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                         {
	             
						printf("EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_\n");
                 yyval=new ParseNode;
				 yyval->token=Token::EXPRESSION_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
               }
#line 3064 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 136: /* EXPRESSION_: SIMPLE_EXPRESSION_  */
#line 924 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                   {
				   
						printf("EXPRESSION_:  SIMPLE_EXPRESSION_\n");
                   yyval=new ParseNode;
				   yyval->token=Token::EXPRESSION_;
				   yyval->children.push_back(yyvsp[0]);
               }
#line 3076 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 137: /* SIMPLE_EXPRESSION_: TERM_  */
#line 931 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                          {
	                   
						printf("SIMPLE_EXPRESSION_:  TERM_\n");
                       yyval=new ParseNode;
					   yyval->token=Token::SIMPLE_EXPRESSION_;
					   yyval->children.push_back(yyvsp[0]);
                    }
#line 3088 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 138: /* SIMPLE_EXPRESSION_: ADDOP TERM_  */
#line 937 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                 {
						if(yyval->val != "+" && yyval->val != "-"){
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						
						printf("SIMPLE_EXPRESSION_:  ADDOP TERM_\n");
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
                    }
#line 3106 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 139: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP TERM_  */
#line 949 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                    {
						
						printf("SIMPLE_EXPRESSION_:  SIMPLE_EXPRESSION_ ADDOP TERM_\n");
                        yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3119 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 140: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP error TERM_  */
#line 956 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                      {//error，缺少操作数
						yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3129 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 141: /* TERM_: TERM_ MULOP FACTOR_  */
#line 961 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                           {
	      
						printf("TERM_:  TERM_ MULOP FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3142 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 142: /* TERM_: FACTOR_  */
#line 968 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                 {
		  
						printf("TERM_:  FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3154 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 143: /* TERM_: TERM_ MULOP error FACTOR_  */
#line 974 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                               { //error,缺少操作数
			yyval=new ParseNode;
			yyval->token=Token::TERM_;
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 3164 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 144: /* FACTOR_: UNSIGN_CONST_VARIABLE_  */
#line 979 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                {
	         
						printf("FACTOR_:  UNSIGN_CONST_VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3176 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 145: /* FACTOR_: VARIABLE_  */
#line 985 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                     {
			 
						printf("FACTOR_:  VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3188 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 146: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 991 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                                  {
			 
						printf("FACTOR_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3201 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 147: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES  */
#line 998 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                          {
			 
						printf("FACTOR_:  LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3214 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 148: /* FACTOR_: NOT FACTOR_  */
#line 1005 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                       {
			 
						printf("FACTOR_:  NOT FACTOR_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3226 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 149: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 1011 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3236 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 150: /* FACTOR_: ID LEFT_PARENTHESES error  */
#line 1015 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                             { //ERROR 函数调用的表达式列表缺失
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3246 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 151: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ error  */
#line 1019 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3256 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 152: /* UNSIGN_CONST_VARIABLE_: NUM  */
#line 1024 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                            {
	                         
						printf("UNSIGN_CONST_VARIABLE_:  NUM\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3268 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;

  case 153: /* UNSIGN_CONST_VARIABLE_: LETTER  */
#line 1030 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"
                                 {
							 
						printf("UNSIGN_CONST_VARIABLE_:  LETTER\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3280 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"
    break;


#line 3284 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.tab.cc"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1039 "/home/cq/p2c/Pascal-S-Compiler(1)/build/../src/yacc.y"

// 函数定义


void yyerror(const char *s){
    haveSemanticError = true;//错误标志，含有语法错误
    string errorInformation;//定义错误信息
    errorInformation += string(s);//添加错误信息
    errorInformation += ", location: " + itos(yylineno) + "." + itos(yycolumn-yyleng);//添加错误位置
    syntaxErrorInformation.push_back(errorInformation);//存放错误信息
    cout << errorInformation << endl;
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "syntax error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) + "-" + itos(loc->last_line) + "." + itos(loc->last_column);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
    haveSemanticError = true;
    string errorInformation;
	
    errorInformation = "syntax error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "syntax error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" + itos(endLine) + "." + itos(endCol);
    
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}
