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
#line 6 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"




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


#line 111 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"

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
  YYSYMBOL__WRITE = 48,                    /* _WRITE  */
  YYSYMBOL__READ = 49,                     /* _READ  */
  YYSYMBOL_UMINUS = 50,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 51,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ONE = 52,                       /* ONE  */
  YYSYMBOL_TWO = 53,                       /* TWO  */
  YYSYMBOL_THREE = 54,                     /* THREE  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_programstruct = 56,             /* programstruct  */
  YYSYMBOL_PROGRAM_HEAD_ = 57,             /* PROGRAM_HEAD_  */
  YYSYMBOL_PROGTAM_BODY_ = 58,             /* PROGTAM_BODY_  */
  YYSYMBOL_IDENTIFIER_LIST_ = 59,          /* IDENTIFIER_LIST_  */
  YYSYMBOL_CONST_DECLARATIONS_ = 60,       /* CONST_DECLARATIONS_  */
  YYSYMBOL_CONST_DECLARATION_ = 61,        /* CONST_DECLARATION_  */
  YYSYMBOL_CONST_VARIABLE_ = 62,           /* CONST_VARIABLE_  */
  YYSYMBOL_TYPE_ = 63,                     /* TYPE_  */
  YYSYMBOL_STANDRAD_TYPE_ = 64,            /* STANDRAD_TYPE_  */
  YYSYMBOL_PERIODS_ = 65,                  /* PERIODS_  */
  YYSYMBOL_PERIOD_ = 66,                   /* PERIOD_  */
  YYSYMBOL_VAR_DECLARATIONS_ = 67,         /* VAR_DECLARATIONS_  */
  YYSYMBOL_VAR_DECLARATION_ = 68,          /* VAR_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_DECLARATIONS_ = 69,  /* SUBPROGRAM_DECLARATIONS_  */
  YYSYMBOL_SUBPROGRAM_DECLARATION_ = 70,   /* SUBPROGRAM_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_HEAD_ = 71,          /* SUBPROGRAM_HEAD_  */
  YYSYMBOL_FORMAL_PARAMETER_ = 72,         /* FORMAL_PARAMETER_  */
  YYSYMBOL_PARAMETER_LISTS_ = 73,          /* PARAMETER_LISTS_  */
  YYSYMBOL_PARAMETER_LIST_ = 74,           /* PARAMETER_LIST_  */
  YYSYMBOL_VAR_PARAMETER_ = 75,            /* VAR_PARAMETER_  */
  YYSYMBOL_VALUE_PARAMETER_ = 76,          /* VALUE_PARAMETER_  */
  YYSYMBOL_COMPOUND_STATEMENT_ = 77,       /* COMPOUND_STATEMENT_  */
  YYSYMBOL_STATEMENT_LIST_ = 78,           /* STATEMENT_LIST_  */
  YYSYMBOL_STATEMENT_ = 79,                /* STATEMENT_  */
  YYSYMBOL_VARIABLE_LIST_ = 80,            /* VARIABLE_LIST_  */
  YYSYMBOL_VARIABLE_ = 81,                 /* VARIABLE_  */
  YYSYMBOL_ID_VARPARTS_ = 82,              /* ID_VARPARTS_  */
  YYSYMBOL_ID_VARPART_ = 83,               /* ID_VARPART_  */
  YYSYMBOL_ELSE_PART_ = 84,                /* ELSE_PART_  */
  YYSYMBOL_CASE_BODY_ = 85,                /* CASE_BODY_  */
  YYSYMBOL_BRANCH_LIST_ = 86,              /* BRANCH_LIST_  */
  YYSYMBOL_BRANCH_ = 87,                   /* BRANCH_  */
  YYSYMBOL_CONST_LIST_ = 88,               /* CONST_LIST_  */
  YYSYMBOL_UPDOWN_ = 89,                   /* UPDOWN_  */
  YYSYMBOL_CALL_PROCEDURE_STATEMENT_ = 90, /* CALL_PROCEDURE_STATEMENT_  */
  YYSYMBOL_EXPRESSION_LIST_ = 91,          /* EXPRESSION_LIST_  */
  YYSYMBOL_EXPRESSION_ = 92,               /* EXPRESSION_  */
  YYSYMBOL_SIMPLE_EXPRESSION_ = 93,        /* SIMPLE_EXPRESSION_  */
  YYSYMBOL_TERM_ = 94,                     /* TERM_  */
  YYSYMBOL_FACTOR_ = 95,                   /* FACTOR_  */
  YYSYMBOL_UNSIGN_CONST_VARIABLE_ = 96     /* UNSIGN_CONST_VARIABLE_  */
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
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

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
       0,   132,   132,   142,   146,   150,   154,   158,   163,   168,
     175,   183,   190,   194,   198,   202,   206,   210,   214,   218,
     224,   233,   239,   247,   253,   258,   262,   268,   275,   279,
     285,   289,   293,   297,   303,   318,   324,   338,   344,   353,
     359,   365,   373,   377,   381,   385,   389,   393,   399,   405,
     411,   417,   425,   432,   436,   444,   451,   459,   465,   470,
     474,   480,   487,   493,   497,   501,   505,   509,   515,   521,
     525,   532,   540,   548,   555,   562,   566,   570,   574,   578,
     582,   588,   594,   599,   603,   609,   615,   619,   627,   633,
     641,   647,   653,   660,   664,   668,   675,   681,   687,   693,
     698,   706,   714,   720,   726,   734,   742,   749,   756,   762,
     769,   773,   777,   781,   790,   795,   800,   808,   815,   821,
     827,   834,   840,   844,   849,   855,   861,   867,   873,   880,
     887,   895,   902,   909,   915,   922,   928,   935,   940,   947,
     953,   958,   965,   972,   978,   990,   997,  1002,  1009,  1015,
    1020,  1026,  1032,  1039,  1046,  1052,  1056,  1060,  1065,  1071
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-138)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    37,    21,    78,   301,    24,   307,    81,   109,   141,
     100,  -155,   184,    87,   165,    25,    49,     5,   131,  -155,
      41,  -155,   183,   183,    97,  -155,  -155,  -155,  -155,  -155,
     334,    33,   199,   204,  -155,   201,  -155,  -155,   224,  -155,
     115,   186,   297,   259,   332,   222,   211,    98,  -155,  -155,
    -155,  -155,  -155,  -155,   194,    26,  -155,  -155,   361,   266,
     319,   183,   183,   105,   112,   251,   191,   282,  -155,   289,
     299,   305,   317,   193,  -155,  -155,   334,   334,   124,   183,
     135,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
     205,   151,   227,   286,  -155,   243,   254,   254,   254,   251,
     312,   330,   328,   329,  -155,   143,  -155,   338,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   190,   334,   138,   361,   361,   327,     9,   331,
      19,  -155,   342,   263,   254,   263,   347,  -155,  -155,  -155,
      14,   308,   349,  -155,  -155,   384,   218,   159,   356,   254,
     187,   254,   352,   251,  -155,   251,   254,   183,  -155,   183,
      29,   197,  -155,  -155,   200,  -155,  -155,  -155,  -155,  -155,
     123,   156,   174,  -155,  -155,  -155,   361,   361,   333,  -155,
    -155,    27,   349,    71,   251,   251,   254,    52,   129,   334,
     251,   251,   241,   254,   254,   214,  -155,   353,   102,  -155,
     219,  -155,   354,  -155,  -155,  -155,  -155,   334,   334,   334,
     334,   388,   334,   198,  -155,  -155,   372,   340,   195,  -155,
     195,  -155,  -155,  -155,   362,  -155,  -155,  -155,   220,   378,
     378,   359,   263,   349,   263,  -155,  -155,   394,   365,  -155,
     232,  -155,  -155,   370,   338,  -155,  -155,   276,   254,   254,
    -155,  -155,  -155,   203,   254,  -155,   352,  -155,  -155,  -155,
    -155,  -155,   361,   361,   346,  -155,  -155,  -155,  -155,  -155,
    -155,   254,  -155,   251,  -155,  -155,   349,  -155,  -155,   334,
     334,   251,    71,  -155,  -155,   254,  -155,  -155,   254,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   223,
     381,    50,   188,   251,  -155
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
       0,    74,     0,     0,     0,     0,   119,   158,   159,   151,
       0,   142,   143,   148,   150,     0,     0,     0,     0,     0,
     117,     0,     0,    97,    96,   114,     0,     0,    40,     0,
       0,     0,    54,    46,     0,    63,    64,    65,    61,    83,
       0,     0,     0,    87,    88,    89,     0,    78,     0,    73,
     154,     0,   144,     0,   114,   114,     0,     0,     0,   127,
     114,   114,   114,     0,     0,     0,   139,     0,     0,   118,
       0,   119,     0,   115,    99,    98,   101,     0,     0,     0,
       0,     0,    47,     0,    91,    90,    95,     0,    84,    81,
       0,    75,    76,    77,     0,   157,   153,   156,     0,   125,
     125,   141,     0,   145,     0,   147,   132,     0,   126,   129,
       0,   111,   106,   119,   151,   112,   107,     0,   137,     0,
     136,   121,   122,     0,     0,   109,     0,   108,    56,    55,
      53,    52,     0,     0,     0,    93,    94,    92,    86,    85,
      72,   155,   152,   114,   110,   104,   146,   149,   105,     0,
       0,   114,     0,   133,   134,     0,   140,   138,   123,   120,
     116,    42,    43,    44,    41,   124,   128,   131,   130,     0,
       0,   155,   152,   114,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   404,    15,    -6,  -155,  -155,   -30,   -57,  -154,
     283,    69,  -155,   335,  -155,  -155,  -155,   294,  -155,   172,
    -155,   236,   366,   310,  -147,  -155,   -63,  -155,  -155,   180,
    -155,  -155,   132,  -155,  -155,  -155,  -144,   -85,   226,  -130,
    -129,  -155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     7,   171,     8,    16,   160,    85,    86,
     161,   162,    21,    41,    42,    66,    67,   129,   172,   173,
     174,   175,   104,   105,   106,   202,   139,   150,   199,   274,
     237,   238,   239,   240,   285,   108,   195,   196,   141,   142,
     143,   144
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    53,   107,    89,   180,   182,   204,   200,   205,     5,
     169,   140,   145,   146,    40,   184,    43,    44,    46,    13,
     177,    18,     9,   170,   224,    14,    30,    77,   225,     1,
     207,     2,    35,   185,    52,    34,   107,   229,   230,   228,
       2,     5,    38,   241,   242,   204,   118,   119,   121,   181,
      32,  -137,    39,   232,   253,    90,    91,   233,   178,   235,
     208,   226,   265,   267,    10,    31,    78,    15,   165,   166,
     168,   206,   227,    40,    47,  -137,    48,    49,    11,   133,
      50,   133,   111,   134,    39,   134,    33,  -137,    27,   203,
     107,   135,   107,   136,   137,   136,   137,   138,    45,   138,
     133,    23,   276,   252,   134,   277,    92,   245,   246,   247,
     294,    19,   135,    94,   136,   137,    58,    28,   138,   221,
     222,   107,   107,    20,   214,   120,   295,   107,   107,   244,
     234,   133,    36,    24,   298,   134,   123,    25,   299,   163,
      39,    74,    75,   135,   153,   136,   137,    59,    93,   138,
     154,    90,   126,    91,    60,    95,   304,   216,   133,   236,
     192,    37,   134,   286,   287,    47,    39,    48,    49,   286,
     124,    50,   136,   137,    22,   218,   138,   258,   259,    47,
     155,    48,    49,    59,   193,    50,   286,    61,    59,  -136,
     127,   157,   109,   290,   116,   217,   155,   158,   209,   263,
     300,   212,    29,   286,   288,   291,   292,   264,   219,   170,
     107,   220,    72,  -136,    26,   248,   286,   197,   107,   190,
     254,   271,   198,    62,   301,  -136,    39,   159,   110,   210,
     117,    56,   210,   211,    76,   249,   213,    59,    39,   289,
     107,   191,    54,    59,   125,    73,   249,    55,   250,   236,
     297,   249,   249,   255,   272,   249,    71,   302,    65,    96,
     128,    57,    97,    98,   280,    99,   -82,   100,    65,    96,
     133,   281,    97,    98,   134,    99,   128,   100,   260,   261,
     131,   260,   135,   133,   243,   137,     5,   134,   138,   102,
     103,    59,   133,    69,   101,   135,   134,   136,   137,   102,
     103,   138,    12,   283,   284,     5,   136,   137,    17,    87,
     138,     5,    63,    64,    65,   -24,   -24,   -24,   -24,   128,
      88,   -24,   -24,   -24,   -24,    79,   112,    80,   167,    81,
      82,    83,    84,    79,   223,    80,   113,    81,    82,    83,
      84,   266,   114,    81,    82,    83,    84,   293,   186,   187,
      81,    82,    83,    84,   115,   148,    81,    82,    83,    84,
    -119,   151,   152,   149,    59,  -119,    70,    79,  -119,    80,
     176,    81,    82,    83,    84,    47,   156,    48,    49,   179,
     183,    50,    81,    82,    83,    84,   256,   130,   257,   132,
     268,   188,   269,   189,   194,   201,   251,   262,   273,   270,
     187,   278,   279,   282,   303,     6,   215,   164,    68,   147,
     275,   296,   231,     0,   122
};

static const yytype_int16 yycheck[] =
{
      30,    31,    65,    60,   133,   135,   153,   151,   155,     4,
       1,    96,    97,    98,    20,     1,    22,    23,    24,     4,
       1,     6,     1,    14,   178,     1,     1,     1,     1,     1,
       1,     3,    17,    19,     1,    30,    99,   184,   185,   183,
       3,     4,     1,   190,   191,   192,    76,    77,    78,   134,
       1,     1,    43,     1,   198,    61,    62,   187,    39,   188,
      31,    34,   216,   217,    43,    40,    40,    43,   125,   126,
     127,   156,     1,    79,    41,    25,    43,    44,     0,    29,
      47,    29,    67,    33,    43,    33,    37,    37,     1,   152,
     153,    41,   155,    43,    44,    43,    44,    47,     1,    47,
      29,     1,   232,     1,    33,   234,     1,   192,   193,   194,
     264,    30,    41,     1,    43,    44,     1,    30,    47,   176,
     177,   184,   185,    14,     1,     1,   273,   190,   191,   192,
       1,    29,     1,    33,   281,    33,     1,    37,   282,     1,
      43,    43,    44,    41,     1,    43,    44,    32,    43,    47,
       7,   157,     1,   159,    39,    43,   303,     1,    29,   189,
       1,    30,    33,   248,   249,    41,    43,    43,    44,   254,
      35,    47,    43,    44,    33,     1,    47,   207,   208,    41,
      37,    43,    44,    32,    25,    47,   271,     1,    32,     1,
      39,     1,     1,   256,     1,    39,    37,     7,     1,     1,
     285,     1,    37,   288,     1,   262,   263,     9,    34,    14,
     273,    37,     1,    25,    30,     1,   301,    30,   281,     1,
       1,     1,    35,    37,     1,    37,    43,    37,    37,    32,
      37,    30,    32,    36,    40,    32,    36,    32,    43,    36,
     303,    23,    43,    32,    39,    34,    32,    43,    34,   279,
     280,    32,    32,    34,    34,    32,    34,    34,    17,    18,
      33,    37,    21,    22,    32,    24,    39,    26,    17,    18,
      29,    39,    21,    22,    33,    24,    33,    26,   209,   210,
      37,   212,    41,    29,    43,    44,     4,    33,    47,    48,
      49,    32,    29,    34,    43,    41,    33,    43,    44,    48,
      49,    47,     1,    27,    28,     4,    43,    44,     1,    43,
      47,     4,    15,    16,    17,    14,    15,    16,    17,    33,
       1,    14,    15,    16,    17,     6,    37,     8,     1,    10,
      11,    12,    13,     6,     1,     8,    37,    10,    11,    12,
      13,     1,    37,    10,    11,    12,    13,     1,    40,    41,
      10,    11,    12,    13,    37,    43,    10,    11,    12,    13,
      30,    33,    33,    33,    32,    35,    34,     6,    38,     8,
      39,    10,    11,    12,    13,    41,    38,    43,    44,    37,
      33,    47,    10,    11,    12,    13,    32,    93,    34,    95,
     218,    42,   220,     9,    38,    43,    43,     9,    20,    37,
      41,     7,    37,    33,    23,     1,   170,   124,    42,    99,
     230,   279,   186,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
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
      82,    33,    33,     1,     7,    37,    38,     1,     7,    37,
      62,    65,    66,     1,    65,    63,    63,     1,    63,     1,
      14,    59,    73,    74,    75,    76,    39,     1,    39,    37,
      95,    92,    94,    33,     1,    19,    40,    41,    42,     9,
       1,    23,     1,    25,    38,    91,    92,    30,    35,    83,
      91,    43,    80,    81,    79,    79,    92,     1,    31,     1,
      32,    36,     1,    36,     1,    76,     1,    39,     1,    34,
      37,    63,    63,     1,    64,     1,    34,     1,    91,    79,
      79,    93,     1,    94,     1,    95,    62,    85,    86,    87,
      88,    79,    79,    43,    81,    92,    92,    92,     1,    32,
      34,    43,     1,    91,     1,    34,    32,    34,    62,    62,
      66,    66,     9,     1,     9,    64,     1,    64,    74,    74,
      37,     1,    34,    20,    84,    84,    94,    95,     7,    37,
      32,    39,    33,    27,    28,    89,    92,    92,     1,    36,
      81,    63,    63,     1,    64,    79,    87,    62,    79,    91,
      92,     1,    34,    23,    79
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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
      87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     4,     5,     4,     4,
       6,     3,     6,     6,     6,     6,     6,     2,     3,     4,
       4,     3,     1,     3,     0,     3,     3,     5,     5,     3,
       3,     5,     5,     3,     2,     1,     2,     1,     1,     1,
       3,     6,     6,     6,     6,     2,     3,     4,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     0,     3,
       3,     5,     3,     5,     5,     5,     3,     3,     3,     3,
       0,     2,     6,     4,     3,     5,     5,     5,     4,     2,
       2,     3,     0,     2,     3,     3,     3,     1,     1,     1,
       2,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       1,     3,     1,     1,     5,     5,     4,     4,     4,     4,
       5,     4,     4,     8,     0,     1,     3,     2,     2,     0,
       3,     2,     2,     3,     2,     0,     1,     0,     3,     1,
       3,     3,     1,     1,     1,     1,     4,     4,     3,     1,
       3,     3,     1,     1,     2,     3,     4,     3,     1,     4,
       1,     1,     4,     3,     2,     4,     3,     3,     1,     1
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
#line 132 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
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
#line 1554 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 3: /* programstruct: PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 142 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                   { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   	}
#line 1564 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 4: /* programstruct: error PROGTAM_BODY_ DOT  */
#line 146 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                         { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
			   	}
#line 1574 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 5: /* programstruct: PROGRAM_HEAD_ error DOT  */
#line 150 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                         { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program body\n");
			   	}
#line 1584 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 6: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ DOT  */
#line 154 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                       { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1594 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 7: /* programstruct: error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT  */
#line 158 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                             { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
				}
#line 1605 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 8: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 163 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                         { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("missing a dot here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
				}
#line 1616 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 9: /* programstruct: error PROGRAM_HEAD_ error DOT  */
#line 168 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                               { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
				}
#line 1627 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 10: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 175 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                        { //正常
					
					printf("PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-5]); yyval->children.push_back(yyvsp[-4]);
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
					yyval->children.push_back(yyvsp[-1]);	yyval->children.push_back(yyvsp[0]);
				}
#line 1641 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 11: /* PROGRAM_HEAD_: PROGRAM ID SEMICOLON  */
#line 183 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                      { //正常
	
					printf("PROGRAM_HEAD_: 	PROGRAM ID \n");
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
				}
#line 1654 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 12: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error  */
#line 190 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                      { //ERROR 缺少; checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1664 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 13: /* PROGRAM_HEAD_: PROGRAM error LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 194 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                              { //ERROR 缺少主程序名 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
				}
#line 1674 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 14: /* PROGRAM_HEAD_: PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 198 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                               { //ERROR 缺少左括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1684 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 15: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON  */
#line 202 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                               { //ERROR  IDENTIFIER_LIST_识别失败 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1694 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 16: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ error SEMICOLON  */
#line 206 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                               { //ERROR 缺少右括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 1704 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 17: /* PROGRAM_HEAD_: PROGRAM error  */
#line 210 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                               { //ERROR program head checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1714 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 18: /* PROGRAM_HEAD_: PROGRAM ID error  */
#line 214 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                  { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1724 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 19: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error  */
#line 218 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                   { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1734 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 20: /* PROGTAM_BODY_: CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_  */
#line 224 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                  { //正常
					
					printf("PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token =Token::PROGTAM_BODY_;
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1747 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 21: /* IDENTIFIER_LIST_: IDENTIFIER_LIST_ COMMA ID  */
#line 233 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                             { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			
						printf("IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID\n");
			yyval=new ParseNode;
			yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1759 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 22: /* IDENTIFIER_LIST_: ID  */
#line 239 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                    { //正常
			
						printf("IDENTIFIER_LIST_:  ID\n");
			yyval=new ParseNode;
		   	yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1771 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 23: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON  */
#line 247 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                        { //正常
						
						printf("CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1783 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 24: /* CONST_DECLARATIONS_: %empty  */
#line 253 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                          { //正常
						
						printf("CONST_DECLARATIONS_: null\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
					}
#line 1794 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 25: /* CONST_DECLARATIONS_: CONST error SEMICOLON  */
#line 258 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                { //ERROR 常量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1804 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 26: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ error  */
#line 262 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                         { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1814 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 27: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_  */
#line 268 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                             { //正常
						
						printf("CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1827 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 28: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP error  */
#line 275 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                     { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1837 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 29: /* CONST_DECLARATION_: ID RELOP CONST_VARIABLE_  */
#line 279 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                  { //正常
						
						printf("CONST_DECLARATION_:     ID RELOP CONST_VARIABLE_\n");
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1849 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 30: /* CONST_DECLARATION_: ID RELOP error  */
#line 285 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                        { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
					}
#line 1859 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 31: /* CONST_DECLARATION_: CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_  */
#line 289 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                           { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1869 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 32: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_  */
#line 293 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                               { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1879 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 33: /* CONST_DECLARATION_: ID error CONST_VARIABLE_  */
#line 297 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                  { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1889 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 34: /* CONST_VARIABLE_: ADDOP ID  */
#line 303 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
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
#line 1910 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 35: /* CONST_VARIABLE_: ID  */
#line 318 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                     { //正常
				    
						printf("CONST_VARIABLE_: 	ID\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1922 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 36: /* CONST_VARIABLE_: ADDOP NUM  */
#line 324 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
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
#line 1942 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 37: /* CONST_VARIABLE_: NUM  */
#line 338 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                      { //正常
				    
						printf("CONST_VARIABLE_: 	NUM\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1954 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 38: /* CONST_VARIABLE_: LETTER  */
#line 344 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                        { //正常
				    
						printf("CONST_VARIABLE_: 	LETTER\n");
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1966 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 39: /* TYPE_: STANDRAD_TYPE_  */
#line 353 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                      { //正常
            
						printf("TYPE_: 	STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1978 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 40: /* TYPE_: RECORD VAR_DECLARATION_ END  */
#line 359 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                             { //正常
		    
						printf("TYPE_: 	RECORD VAR_DECLARATION_ END\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
            yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1990 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 41: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_  */
#line 365 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                   { //正常
			
			printf("TYPE_: 	ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_\n");
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2004 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 42: /* TYPE_: ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_  */
#line 373 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //ERROR 缺少左中括号 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
		}
#line 2014 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 43: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_  */
#line 377 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                             { //ERROR 缺少OF关键字 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
		}
#line 2024 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 44: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error  */
#line 381 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                          { //ERROR 数组元素类型识别失败 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2034 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 45: /* TYPE_: ARRAY error  */
#line 385 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2044 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 46: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES error  */
#line 389 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                     { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2054 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 47: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error  */
#line 393 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                              { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2064 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 48: /* STANDRAD_TYPE_: INTEGER  */
#line 399 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                           { //正常
                        
						printf("STANDRAD_TYPE_:     INTEGER\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2076 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 49: /* STANDRAD_TYPE_: REAL  */
#line 405 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                              { //正常
						
						printf("STANDRAD_TYPE_:     REAL\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2088 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 50: /* STANDRAD_TYPE_: CHAR  */
#line 411 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                              { //正常
					    
						printf("STANDRAD_TYPE_:     CHAR\n");
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2100 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 51: /* STANDRAD_TYPE_: BOLLEAN  */
#line 417 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                 { //正常
					    
						printf("STANDRAD_TYPE_:     BOLLEAN\n");
						yyval=new ParseNode;
						yyval->token =Token::STANDRAD_TYPE_;
                        yyval->children.push_back(yyvsp[0]);
					}
#line 2112 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 52: /* PERIODS_: PERIODS_ COMMA PERIOD_  */
#line 425 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                { //正常
            
						printf("PERIODS_: PERIODS_ COMMA PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2125 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 53: /* PERIODS_: PERIODS_ error PERIOD_  */
#line 432 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                        { //ERROR 缺少逗号 checked
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2135 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 54: /* PERIODS_: PERIOD_  */
#line 436 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                         { //正常
		    
						printf("PERIODS_: PERIOD_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 2147 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 55: /* PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_  */
#line 444 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                  { //正常
            
						printf("PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_\n");
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2160 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 56: /* PERIOD_: CONST_VARIABLE_ error CONST_VARIABLE_  */
#line 451 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                       { //ERROR 缺少.. checked
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2170 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 57: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ SEMICOLON  */
#line 459 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                      { //正常
                        
						printf("VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2182 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 58: /* VAR_DECLARATIONS_: %empty  */
#line 465 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                          { //正常
						
						printf("VAR_DECLARATIONS_: 	null\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
					}
#line 2193 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 59: /* VAR_DECLARATIONS_: VAR error SEMICOLON  */
#line 470 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                             { //ERROR 变量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2203 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 60: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ error  */
#line 474 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                    { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2213 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 61: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_  */
#line 480 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                { //正常
						
						printf("VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2226 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 62: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON TYPE_  */
#line 487 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //正常
					    
						printf("VAR_DECLARATION_: 	IDENTIFIER_LIST_ COLON TYPE_\n");
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2238 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 63: /* VAR_DECLARATION_: VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_  */
#line 493 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                              { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2248 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 64: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_  */
#line 497 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                  { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2258 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 65: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error  */
#line 501 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                  { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2268 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 66: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON error  */
#line 505 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					}
#line 2278 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 67: /* VAR_DECLARATION_: IDENTIFIER_LIST_ error TYPE_  */
#line 509 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2288 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 68: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON  */
#line 515 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                          { //正常
								
						printf("SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON\n");
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
							}
#line 2300 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 69: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error  */
#line 521 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                                                { //ERROR 缺少分号 checked
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 2310 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 70: /* SUBPROGRAM_DECLARATIONS_: %empty  */
#line 525 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                          { //正常
							    
						printf("SUBPROGRAM_DECLARATIONS_: 	null\n");
								yyval=new ParseNode;
								yyval->token =Token::SUBPROGRAM_DECLARATIONS_;
							}
#line 2321 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 71: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_  */
#line 532 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                       { //正常
                
						printf("SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_\n");
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2333 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 72: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON  */
#line 540 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                    { //正常
					    
						printf("SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
						yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2347 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 73: /* SUBPROGRAM_HEAD_: PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON  */
#line 548 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                   { //正常
                        
						printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
						yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2360 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 74: /* SUBPROGRAM_HEAD_: PROCEDURE ID SEMICOLON  */
#line 555 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                 { //正常
                        
						printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID SEMICOLON\n");
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
					}
#line 2373 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 75: /* SUBPROGRAM_HEAD_: FUNCTION error FORMAL_PARAMETER_ COLON TYPE_  */
#line 562 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                      { //ERROR 函数名缺失 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2383 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 76: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error TYPE_  */
#line 566 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                   { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2393 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 77: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON error  */
#line 570 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                   { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2403 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 78: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error  */
#line 574 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                             { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2413 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 79: /* SUBPROGRAM_HEAD_: FUNCTION error  */
#line 578 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
					}
#line 2423 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 80: /* SUBPROGRAM_HEAD_: PROCEDURE error  */
#line 582 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
					}
#line 2433 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 81: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES  */
#line 588 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                           { //正常
                        
						printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2445 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 82: /* FORMAL_PARAMETER_: %empty  */
#line 594 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                          { //正常
					    
						printf("FORMAL_PARAMETER_: 	null\n");
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
					}
#line 2456 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 83: /* FORMAL_PARAMETER_: LEFT_PARENTHESES error  */
#line 599 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                { //ERROR 不完整的形参列表
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
					}
#line 2466 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 84: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ error  */
#line 603 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                 { //ERROR 右括号缺失
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2476 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 85: /* PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_  */
#line 609 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                            { //正常
										
						printf("PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                }
#line 2488 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 86: /* PARAMETER_LISTS_: PARAMETER_LISTS_ error PARAMETER_LIST_  */
#line 615 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                                }
#line 2498 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 87: /* PARAMETER_LISTS_: PARAMETER_LIST_  */
#line 619 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                 { //正常
										
						printf("PARAMETER_LISTS_: PARAMETER_LIST_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::PARAMETER_LISTS_;
                                        yyval->children.push_back(yyvsp[0]);
                                }
#line 2510 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 88: /* PARAMETER_LIST_: VAR_PARAMETER_  */
#line 627 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                        { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
                                
						printf("PARAMETER_LIST_:         VAR_PARAMETER_ \n");
								yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
                        }
#line 2522 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 89: /* PARAMETER_LIST_: VALUE_PARAMETER_  */
#line 633 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                          { //正常
								
						printf("PARAMETER_LIST_:         VALUE_PARAMETER_ \n");
                                yyval=new ParseNode;
                                yyval->token=Token::PARAMETER_LIST_;
                                yyval->children.push_back(yyvsp[0]);
                        }
#line 2534 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 90: /* VAR_PARAMETER_: VAR VALUE_PARAMETER_  */
#line 641 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                            { //正常
										
						printf("VAR_PARAMETER_:         VAR VALUE_PARAMETER_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                }
#line 2546 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 91: /* VAR_PARAMETER_: VAR error  */
#line 647 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
                                        yyval=new ParseNode;
                                        yyval->token=Token::VAR_PARAMETER_;
                                        yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
                                }
#line 2556 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 92: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON STANDRAD_TYPE_  */
#line 653 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                { //正常
                                                
						printf("VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_\n");
												yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
												yyval->children.push_back(yyvsp[0]);
                                        }
#line 2569 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 93: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error STANDRAD_TYPE_  */
#line 660 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                { //ERROR 缺少分号 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
                                        }
#line 2579 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 94: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON error  */
#line 664 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                       { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2589 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 95: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error  */
#line 668 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                 { //ERROR 缺少基本类型关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2599 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 96: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ END  */
#line 675 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                               { //正常
                                                
						printf("COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST END\n");
												yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                                        }
#line 2611 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 97: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ error  */
#line 681 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                      { //ERROR 缺少END关键字 checked
                                                yyval=new ParseNode;
                                                yyval->token=Token::COMPOUND_STATEMENT_;
                                                yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                                        }
#line 2621 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 98: /* STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_  */
#line 687 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                     { //正常
										
						printf("STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_\n");
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
                                }
#line 2633 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 99: /* STATEMENT_LIST_: STATEMENT_LIST_ error STATEMENT_  */
#line 693 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                  { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
										
                                        yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                                }
#line 2644 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 100: /* STATEMENT_LIST_: STATEMENT_  */
#line 698 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                            { //正常
                                        
						printf("STATEMENT_LIST_: STATEMENT_\n");
										yyval=new ParseNode;
                                        yyval->token=Token::STATEMENT_LIST_;
                                        yyval->children.push_back(yyvsp[0]);
                                }
#line 2656 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 101: /* STATEMENT_: VARIABLE_ ASSIGNOP EXPRESSION_  */
#line 706 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                           {//正常
						
						
						printf("STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2670 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 102: /* STATEMENT_: CALL_PROCEDURE_STATEMENT_  */
#line 714 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                       {//正常
						
						printf("STATEMENT_: CALL_PROCEDURE_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
            }
#line 2682 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 103: /* STATEMENT_: COMPOUND_STATEMENT_  */
#line 720 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                 {//正常
						
						printf("STATEMENT_:COMPOUND_STATEMENT_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[0]);
            }
#line 2694 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 104: /* STATEMENT_: IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_  */
#line 726 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                       {//正常
						
						printf("STATEMENT_:IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2708 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 105: /* STATEMENT_: CASE EXPRESSION_ OF CASE_BODY_ END  */
#line 734 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                {//正常
						
						printf("STATEMENT_:CASE EXPRESSION_ OF CASE_BODY_ END\n");
						yyval=new ParseNode;
						yyval->token=Token::STATEMENT_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
            }
#line 2722 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 106: /* STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_  */
#line 742 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                             {//正常
								
						printf("STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_\n");
								yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2735 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 107: /* STATEMENT_: REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_  */
#line 749 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                      {//正常
                 
						printf("STATEMENT_:REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_\n");
				 yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2748 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 108: /* STATEMENT_: _READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES  */
#line 756 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                     {//正常
						printf("STATEMENT_:_READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
				 				yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2760 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 109: /* STATEMENT_: _WRITE LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 762 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        {//正常
                 
						printf("STATEMENT_:_WRITE LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
								yyval=new ParseNode;
                                 yyval->token=Token::STATEMENT_;
                                 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2773 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 110: /* STATEMENT_: IF EXPRESSION_ error STATEMENT_ ELSE_PART_  */
#line 769 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                        { //ERROR 缺少then关键字 checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
                        }
#line 2783 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 111: /* STATEMENT_: WHILE EXPRESSION_ error STATEMENT_  */
#line 773 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                            { //ERROR 缺少关键字do checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
                        }
#line 2793 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 112: /* STATEMENT_: REPEAT STATEMENT_LIST_ error EXPRESSION_  */
#line 777 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                  { //ERROR 缺少关键字until checked
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
                        }
#line 2803 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 113: /* STATEMENT_: FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_  */
#line 781 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                       {//正常
								
						printf("STATEMENT_:FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_\n");
                                yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                                yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
                                yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
                                yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
                                yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                        }
#line 2818 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 114: /* STATEMENT_: %empty  */
#line 790 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                          {  
								printf("STATEMENT_:kong\n");
								yyval=new ParseNode;
                                yyval->token=Token::STATEMENT_;
                        }
#line 2828 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 115: /* VARIABLE_LIST_: VARIABLE_  */
#line 795 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                          {//正常
					printf("VARIABLE_LIST_:  VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::VARIABLE_LIST_;
					yyval->children.push_back(yyvsp[0]);
           }
#line 2839 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 116: /* VARIABLE_LIST_: VARIABLE_LIST_ COMMA VARIABLE_  */
#line 800 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                           {   
						printf("VARIABLE_LIST_:VARIABLE_LIST_ COMMA VARIABLE_\n");
								yyval=new ParseNode;
                                yyval->token=Token::VARIABLE_LIST_;
								yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);
								yyval->children.push_back(yyvsp[0]);
                        }
#line 2852 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 117: /* VARIABLE_: ID ID_VARPARTS_  */
#line 808 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                           {//正常
					
						printf("VARIABLE_:  ID ID_VARPARTS_\n");
					yyval=new ParseNode;
					yyval->token=Token::VARIABLE_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
           }
#line 2864 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 118: /* ID_VARPARTS_: ID_VARPARTS_ ID_VARPART_  */
#line 815 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                       {//正常
					
						printf("ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2876 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 119: /* ID_VARPARTS_: %empty  */
#line 821 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                 {
					
						printf("ID_VARPARTS_:kong\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPARTS_;
                }
#line 2887 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 120: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES  */
#line 827 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                               {
					
						printf("ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
               }
#line 2900 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 121: /* ID_VARPART_: DOT ID  */
#line 834 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                       {
					
						printf("ID_VARPART_: DOT ID\n");
					yyval=new ParseNode;
					yyval->token=Token::ID_VARPART_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2912 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 122: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES error  */
#line 840 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                              { //ERROR 不完整的数组下标列表 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
                           }
#line 2922 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 123: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error  */
#line 844 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                           { //ERROR 缺失右中括号 checked
                                 yyval=new ParseNode;
                                 yyval->token=Token::ID_VARPART_;
                                 yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
                           }
#line 2932 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 124: /* ELSE_PART_: ELSE STATEMENT_  */
#line 849 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                            {//正常
				
						printf("ELSE_PART_:  ELSE STATEMENT_\n");
				yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2944 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 125: /* ELSE_PART_: %empty  */
#line 855 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
              {//正常
				
						printf("ELSE_PART_: kong\n");
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
            }
#line 2955 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 126: /* CASE_BODY_: BRANCH_LIST_  */
#line 861 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                         {
				
						printf("CASE_BODY_:  BRANCH_LIST_\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2967 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 127: /* CASE_BODY_: %empty  */
#line 867 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
              {
				
						printf("CASE_BODY_:  kong\n");
				yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
            }
#line 2978 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 128: /* BRANCH_LIST_: BRANCH_LIST_ SEMICOLON BRANCH_  */
#line 873 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                             {
					
						printf("BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
                }
#line 2991 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 129: /* BRANCH_LIST_: BRANCH_  */
#line 880 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                         {
					
						printf("BRANCH_LIST_: BRANCH_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_LIST_;
					yyval->children.push_back(yyvsp[0]);
                }
#line 3003 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 130: /* BRANCH_: CONST_LIST_ COLON STATEMENT_  */
#line 887 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                      {//正常
					
						printf("BRANCH_:  CONST_LIST_ COLON STATEMENT_\n");
					yyval=new ParseNode;
					yyval->token=Token::BRANCH_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
}
#line 3016 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 131: /* CONST_LIST_: CONST_LIST_ COMMA CONST_VARIABLE_  */
#line 895 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                               {
					
						printf("CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
            }
#line 3029 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 132: /* CONST_LIST_: CONST_VARIABLE_  */
#line 902 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                             {
					
						printf("CONST_LIST_:  CONST_VARIABLE_\n");
					yyval=new ParseNode;
					yyval->token=Token::CONST_LIST_;
					yyval->children.push_back(yyvsp[0]);
            }
#line 3041 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 133: /* UPDOWN_: TO  */
#line 909 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
           {
			
						printf("UPDOWN_: TO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 3053 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 134: /* UPDOWN_: DOWNTO  */
#line 915 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                {
			
						printf("UPDOWN_: DOWNTO\n");
			yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 3065 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 135: /* CALL_PROCEDURE_STATEMENT_: ID  */
#line 922 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                              {//正常
								
						printf("CALL_PROCEDURE_STATEMENT_:  ID\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[0]);
                            }
#line 3077 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 136: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 928 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                                    {//正常
                                
						printf("CALL_PROCEDURE_STATEMENT_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                            }
#line 3090 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 137: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 935 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                        { //ERROR 缺少右括号 checked
								yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 3100 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 138: /* EXPRESSION_LIST_: EXPRESSION_LIST_ COMMA EXPRESSION_  */
#line 940 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                     {
	                  
						printf("EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_\n");
                      yyval=new ParseNode;
					  yyval->token=Token::EXPRESSION_LIST_;
					  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					  yyval->children.push_back(yyvsp[0]);
                    }
#line 3113 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 139: /* EXPRESSION_LIST_: EXPRESSION_  */
#line 947 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                 {
						
						printf("EXPRESSION_LIST_:  EXPRESSION_\n");
                        yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3125 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 140: /* EXPRESSION_LIST_: EXPRESSION_LIST_ error EXPRESSION_  */
#line 953 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3135 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 141: /* EXPRESSION_: SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_  */
#line 958 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                         {
	             
						printf("EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_\n");
                 yyval=new ParseNode;
				 yyval->token=Token::EXPRESSION_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
               }
#line 3148 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 142: /* EXPRESSION_: SIMPLE_EXPRESSION_  */
#line 965 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                   {
				   
						printf("EXPRESSION_:  SIMPLE_EXPRESSION_\n");
                   yyval=new ParseNode;
				   yyval->token=Token::EXPRESSION_;
				   yyval->children.push_back(yyvsp[0]);
               }
#line 3160 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 143: /* SIMPLE_EXPRESSION_: TERM_  */
#line 972 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                          {
	                   
						printf("SIMPLE_EXPRESSION_:  TERM_\n");
                       yyval=new ParseNode;
					   yyval->token=Token::SIMPLE_EXPRESSION_;
					   yyval->children.push_back(yyvsp[0]);
                    }
#line 3172 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 144: /* SIMPLE_EXPRESSION_: ADDOP TERM_  */
#line 978 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
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
#line 3190 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 145: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP TERM_  */
#line 990 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                    {
						
						printf("SIMPLE_EXPRESSION_:  SIMPLE_EXPRESSION_ ADDOP TERM_\n");
                        yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3203 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 146: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP error TERM_  */
#line 997 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                      {//error，缺少操作数
						yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3213 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 147: /* TERM_: TERM_ MULOP FACTOR_  */
#line 1002 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                           {
	      
						printf("TERM_:  TERM_ MULOP FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3226 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 148: /* TERM_: FACTOR_  */
#line 1009 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                 {
		  
						printf("TERM_:  FACTOR_\n");
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3238 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 149: /* TERM_: TERM_ MULOP error FACTOR_  */
#line 1015 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                               { //error,缺少操作数
			yyval=new ParseNode;
			yyval->token=Token::TERM_;
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 3248 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 150: /* FACTOR_: UNSIGN_CONST_VARIABLE_  */
#line 1020 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                {
	         
						printf("FACTOR_:  UNSIGN_CONST_VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3260 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 151: /* FACTOR_: VARIABLE_  */
#line 1026 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                     {
			 
						printf("FACTOR_:  VARIABLE_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3272 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 152: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 1032 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                                  {
			 
						printf("FACTOR_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3285 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 153: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES  */
#line 1039 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                          {
			 
						printf("FACTOR_:  LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3298 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 154: /* FACTOR_: NOT FACTOR_  */
#line 1046 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                       {
			 
						printf("FACTOR_:  NOT FACTOR_\n");
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3310 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 155: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 1052 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3320 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 156: /* FACTOR_: ID LEFT_PARENTHESES error  */
#line 1056 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                             { //ERROR 函数调用的表达式列表缺失
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3330 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 157: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ error  */
#line 1060 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3340 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 158: /* UNSIGN_CONST_VARIABLE_: NUM  */
#line 1065 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                            {
	                         
						printf("UNSIGN_CONST_VARIABLE_:  NUM\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3352 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;

  case 159: /* UNSIGN_CONST_VARIABLE_: LETTER  */
#line 1071 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"
                                 {
							 
						printf("UNSIGN_CONST_VARIABLE_:  LETTER\n");
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3364 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"
    break;


#line 3368 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.tab.cc"

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

#line 1080 "/home/cq/下载/Pascal-S-Compiler/build/../src/yacc.y"

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
