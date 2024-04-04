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
#line 6 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"




#include "main.h"
#include "yacc.tab.h"







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


#line 110 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"

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
#define YYLAST   407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

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
       0,   131,   131,   139,   143,   147,   151,   155,   160,   165,
     172,   178,   182,   186,   190,   194,   198,   202,   206,   212,
     219,   223,   229,   233,   236,   240,   246,   251,   255,   259,
     263,   267,   271,   277,   288,   292,   302,   306,   313,   317,
     321,   327,   331,   335,   339,   343,   347,   353,   357,   361,
     365,   371,   376,   380,   386,   391,   399,   403,   406,   410,
     416,   421,   425,   429,   433,   437,   441,   447,   451,   455,
     460,   464,   470,   474,   479,   483,   487,   491,   495,   499,
     505,   509,   512,   516,   522,   526,   530,   536,   540,   546,
     550,   556,   560,   564,   568,   575,   579,   585,   589,   593,
     599,   604,   608,   612,   618,   624,   629,   634,   638,   642,
     646,   653,   658,   663,   667,   671,   676,   680,   684,   689,
     693,   697,   701,   705,   710,   715,   721,   726,   731,   735,
     740,   744,   749,   754,   759,   763,   768,   773,   778,   782,
     792,   797,   802,   807,   811,   816,   820,   824,   829,   834,
     838,   842,   846,   851,   855,   859
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

#define YYPACT_NINF (-184)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-133)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     271,   273,    28,   118,   299,    30,   303,    -6,   124,   132,
     122,  -184,   206,     7,   186,    15,   150,   214,    91,  -184,
      31,  -184,   179,   179,    40,  -184,  -184,  -184,  -184,   265,
      22,   213,   217,  -184,   256,  -184,  -184,   190,  -184,   163,
     188,   341,   346,   347,   233,   109,   -10,  -184,  -184,  -184,
    -184,  -184,  -184,   261,    41,  -184,  -184,   364,   253,   320,
     179,   179,    48,    52,   247,   192,   193,  -184,   268,   274,
     298,   308,   197,  -184,  -184,   265,   265,    92,   179,    87,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,    -4,
     165,   255,   269,  -184,   269,   246,   246,   246,   247,   267,
     333,  -184,   108,  -184,   289,  -184,  -184,  -184,   365,   365,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
     110,   265,   139,   364,   364,   328,    24,   334,    17,  -184,
     252,   246,   252,   318,  -184,  -184,  -184,  -184,   218,   128,
     344,  -184,  -184,   378,   239,   178,   350,   246,   222,   247,
    -184,   247,   246,  -184,  -184,   179,  -184,   179,   111,   199,
    -184,  -184,   209,  -184,  -184,  -184,  -184,  -184,    53,   169,
     100,  -184,  -184,  -184,   364,   364,   336,  -184,     9,   344,
      61,   247,   247,   246,   130,   145,   265,   247,   247,   237,
     246,   246,   215,  -184,   348,   115,  -184,  -184,  -184,  -184,
     265,   265,   265,   265,   380,   265,   223,  -184,  -184,   312,
     342,   200,  -184,   200,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,   216,   370,   370,   351,   252,   344,   252,  -184,  -184,
     386,   357,  -184,   194,  -184,  -184,   362,   289,  -184,  -184,
     185,   246,   246,  -184,  -184,  -184,   210,  -184,  -184,  -184,
    -184,   364,   364,   349,  -184,  -184,  -184,  -184,  -184,   246,
    -184,   247,  -184,  -184,   344,  -184,  -184,   265,   265,   247,
      61,  -184,  -184,   246,  -184,  -184,   246,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,   219,   373,    39,   184,
     247,  -184
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
      59,    56,     0,     0,   111,     0,     0,    19,     0,     0,
       0,     0,     0,    33,    35,     0,     0,     0,     0,     0,
      47,    48,    50,    49,    66,    38,    20,    65,    61,     0,
       0,    78,    81,    79,    81,     0,     0,     0,   111,     0,
     130,   102,     0,    99,     0,   101,    68,    67,    23,    23,
      12,    13,    14,    15,    11,    10,    30,    31,    27,    26,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,   114,   153,   154,   155,   146,     0,   137,
     138,   143,   145,     0,     0,     0,     0,     0,   112,    96,
      95,   111,     0,    71,    70,     0,    39,     0,     0,     0,
      53,    45,     0,    62,    63,    64,    60,    82,     0,     0,
       0,    86,    87,    88,     0,    77,     0,   149,     0,   139,
       0,   111,   111,     0,     0,     0,   122,   111,   111,   111,
       0,     0,     0,   134,     0,     0,   113,    98,    97,   100,
       0,     0,     0,     0,     0,    46,     0,    90,    89,    94,
       0,    83,    80,     0,    74,    75,    76,    73,   152,   148,
     151,     0,   120,   120,   136,     0,   140,     0,   142,   127,
       0,   121,   124,     0,   108,   105,   114,   146,   109,   106,
       0,   132,     0,   131,   116,   117,     0,    55,    54,    52,
      51,     0,     0,     0,    92,    93,    91,    85,    84,   150,
     147,   111,   107,   103,   141,   144,   104,     0,     0,   111,
       0,   128,   129,     0,   135,   133,   118,   115,    41,    42,
      43,    40,   119,   123,   126,   125,     0,     0,   150,   147,
     111,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   396,     5,    -3,  -184,  -184,   -29,   -46,  -183,
     276,   162,  -184,   321,  -184,  -184,  -184,   290,  -184,   172,
    -184,   232,   360,   304,  -137,   -62,  -184,  -184,   180,  -184,
    -184,   137,  -184,  -184,  -184,  -165,   -92,   224,  -125,  -124,
    -184
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     7,   169,     8,    16,   158,    84,    85,
     159,   160,    21,    40,    41,    65,    66,   127,   170,   171,
     172,   173,   101,   102,   103,   137,   148,   196,   262,   230,
     231,   232,   233,   273,   105,   192,   193,   139,   140,   141,
     142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    52,   104,   138,   143,   144,   177,   179,    26,    13,
     218,    18,   197,    88,   198,   221,    29,    39,   175,    42,
      43,    45,    34,    51,    19,   167,   254,   256,    58,     9,
     246,    14,    37,    73,    74,   123,   104,    27,   168,   178,
    -132,    44,    76,   219,   222,   223,   116,   117,   119,    91,
     234,   235,   197,    93,   207,    30,   176,    89,    90,   226,
     199,   228,   220,    46,  -132,    47,    48,    38,   130,    49,
     281,    10,   131,    15,    38,    39,  -132,   163,   164,   166,
     132,    77,   133,    38,   134,   135,   136,   104,   121,   104,
     130,    92,    35,   118,   131,    94,    38,   238,   239,   240,
     264,   211,   132,   265,   133,   286,   134,   135,   136,   149,
      71,   155,   200,   153,   154,   150,   245,   156,    11,   104,
     104,    36,   122,    23,   282,   104,   104,   237,   214,   215,
     217,   225,   285,    46,   212,    47,    48,   213,    20,    49,
     161,    58,   201,    72,   130,   151,   227,   157,   131,   274,
     275,    31,    89,   291,    90,    24,   132,   229,   133,   130,
     134,   135,   136,   131,    57,    22,   124,   274,   183,   184,
     209,   247,   248,   133,   130,   134,   135,   136,   131,   189,
      46,   287,    47,    48,   274,  -131,    49,    32,   133,    60,
     134,   135,   136,   106,   108,    58,   274,    58,   114,   104,
     202,    58,    59,   190,   125,   278,   279,   104,   210,  -131,
     205,   276,   271,   272,   168,   151,   241,   259,     5,   181,
     288,  -131,    38,    28,   252,    61,   268,    56,   104,   107,
     109,   203,   253,   269,   115,   204,    25,   182,   229,   284,
     187,   203,   242,    38,    33,   206,   277,   242,   242,   243,
     260,   242,   194,   289,    64,    95,    53,   195,    96,    97,
      54,    98,   188,    99,    64,    95,   130,    70,    96,    97,
     131,    98,     1,    99,     2,   130,     2,     5,   132,   131,
     236,   130,   134,   135,   136,   131,    55,   132,   126,   133,
     100,   134,   135,   136,   -81,   133,    86,   134,   135,   136,
      12,    75,   126,     5,    17,   110,    46,     5,    47,    48,
     146,   111,    49,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,    87,    80,    81,    82,    83,    78,   152,    79,   165,
      80,    81,    82,    83,    78,   112,    79,   216,    80,    81,
      82,    83,    78,   255,    79,   113,    80,    81,    82,    83,
     280,   180,    80,    81,    82,    83,    62,    63,    64,    80,
      81,    82,    83,  -114,   249,   250,   147,   249,  -114,     5,
      78,  -114,    79,   174,    80,    81,    82,    83,    58,    58,
      68,    69,   128,   257,   129,   258,   185,   186,   191,   251,
     261,   244,   184,   266,   267,   270,   290,     6,   162,   120,
     208,    67,   145,   263,   283,     0,     0,   224
};

static const yytype_int16 yycheck[] =
{
      29,    30,    64,    95,    96,    97,   130,   132,     1,     4,
       1,     6,   149,    59,   151,   180,     1,    20,     1,    22,
      23,    24,    17,     1,    30,     1,   209,   210,    32,     1,
     195,     1,     1,    43,    44,    39,    98,    30,    14,   131,
       1,     1,     1,    34,   181,   182,    75,    76,    77,     1,
     187,   188,   189,     1,     1,    40,    39,    60,    61,   184,
     152,   185,     1,    41,    25,    43,    44,    43,    29,    47,
     253,    43,    33,    43,    43,    78,    37,   123,   124,   125,
      41,    40,    43,    43,    45,    46,    47,   149,     1,   151,
      29,    43,     1,     1,    33,    43,    43,   189,   190,   191,
     225,     1,    41,   227,    43,   270,    45,    46,    47,     1,
       1,     1,     1,   108,   109,     7,     1,     7,     0,   181,
     182,    30,    35,     1,   261,   187,   188,   189,   174,   175,
     176,     1,   269,    41,    34,    43,    44,    37,    14,    47,
       1,    32,    31,    34,    29,    37,     1,    37,    33,   241,
     242,     1,   155,   290,   157,    33,    41,   186,    43,    29,
      45,    46,    47,    33,     1,    33,     1,   259,    40,    41,
       1,   200,   201,    43,    29,    45,    46,    47,    33,     1,
      41,   273,    43,    44,   276,     1,    47,    37,    43,     1,
      45,    46,    47,     1,     1,    32,   288,    32,     1,   261,
       1,    32,    39,    25,    39,   251,   252,   269,    39,    25,
       1,     1,    27,    28,    14,    37,     1,     1,     4,     1,
       1,    37,    43,    37,     1,    37,    32,    37,   290,    37,
      37,    32,     9,    39,    37,    36,    30,    19,   267,   268,
       1,    32,    32,    43,    30,    36,    36,    32,    32,    34,
      34,    32,    30,    34,    17,    18,    43,    35,    21,    22,
      43,    24,    23,    26,    17,    18,    29,    34,    21,    22,
      33,    24,     1,    26,     3,    29,     3,     4,    41,    33,
      43,    29,    45,    46,    47,    33,    30,    41,    33,    43,
      43,    45,    46,    47,    39,    43,    43,    45,    46,    47,
       1,    40,    33,     4,     1,    37,    41,     4,    43,    44,
      43,    37,    47,    14,    15,    16,    17,    14,    15,    16,
      17,     1,    10,    11,    12,    13,     6,    38,     8,     1,
      10,    11,    12,    13,     6,    37,     8,     1,    10,    11,
      12,    13,     6,     1,     8,    37,    10,    11,    12,    13,
       1,    33,    10,    11,    12,    13,    15,    16,    17,    10,
      11,    12,    13,    30,   202,   203,    33,   205,    35,     4,
       6,    38,     8,    39,    10,    11,    12,    13,    32,    32,
      34,    34,    92,   211,    94,   213,    42,     9,    38,     9,
      20,    43,    41,     7,    37,    33,    23,     1,   122,    78,
     168,    41,    98,   223,   267,    -1,    -1,   183
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
      43,    81,    82,    83,    84,    93,     1,    37,     1,    37,
      37,    37,    37,    37,     1,    37,    66,    66,     1,    66,
      72,     1,    35,    39,     1,    39,    33,    76,    76,    76,
      29,    33,    41,    43,    45,    46,    47,    84,    95,    96,
      97,    98,    99,    95,    95,    82,    43,    33,    85,     1,
       7,    37,    38,    62,    62,     1,     7,    37,    66,    69,
      70,     1,    69,    67,    67,     1,    67,     1,    14,    63,
      77,    78,    79,    80,    39,     1,    39,    98,    95,    97,
      33,     1,    19,    40,    41,    42,     9,     1,    23,     1,
      25,    38,    94,    95,    30,    35,    86,    83,    83,    95,
       1,    31,     1,    32,    36,     1,    36,     1,    80,     1,
      39,     1,    34,    37,    67,    67,     1,    67,     1,    34,
       1,    94,    83,    83,    96,     1,    97,     1,    98,    66,
      88,    89,    90,    91,    83,    83,    43,    84,    95,    95,
      95,     1,    32,    34,    43,     1,    94,    66,    66,    70,
      70,     9,     1,     9,    68,     1,    68,    78,    78,     1,
      34,    20,    87,    87,    97,    98,     7,    37,    32,    39,
      33,    27,    28,    92,    95,    95,     1,    36,    67,    67,
       1,    68,    83,    90,    66,    83,    94,    95,     1,    34,
      23,    83
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
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    85,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    93,    94,    94,    94,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99
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
       3,     3,     3,     5,     5,     5,     5,     4,     2,     2,
       3,     0,     2,     3,     3,     3,     1,     1,     1,     2,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     1,
       3,     1,     1,     5,     5,     4,     4,     5,     4,     4,
       8,     0,     2,     2,     0,     3,     2,     2,     3,     2,
       0,     1,     0,     3,     1,     3,     3,     1,     1,     1,
       1,     4,     4,     3,     1,     3,     3,     1,     1,     2,
       3,     4,     3,     1,     4,     1,     1,     4,     3,     2,
       4,     3,     3,     1,     1,     1
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
#line 131 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                               { //正常
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
			   		yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					YYACCEPT;
			   	}
#line 1549 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 3: /* programstruct: PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 139 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                   { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   	}
#line 1559 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 4: /* programstruct: error PROGTAM_BODY_ DOT  */
#line 143 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                         { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
			   	}
#line 1569 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 5: /* programstruct: PROGRAM_HEAD_ error DOT  */
#line 147 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                         { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program body");
			   	}
#line 1579 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 6: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ DOT  */
#line 151 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                       { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1589 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 7: /* programstruct: error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT  */
#line 155 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                             { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
				}
#line 1600 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 8: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 160 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                         { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("missing a dot here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
				}
#line 1611 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 9: /* programstruct: error PROGRAM_HEAD_ error DOT  */
#line 165 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                               { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
				}
#line 1622 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 10: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 172 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                        { //正常
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-5]); yyval->children.push_back(yyvsp[-4]);
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
					yyval->children.push_back(yyvsp[-1]);	yyval->children.push_back(yyvsp[0]);
				}
#line 1634 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 11: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error  */
#line 178 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                      { //ERROR 缺少; checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1644 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 12: /* PROGRAM_HEAD_: PROGRAM error LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 182 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                              { //ERROR 缺少主程序名 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
				}
#line 1654 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 13: /* PROGRAM_HEAD_: PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 186 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                               { //ERROR 缺少左括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1664 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 14: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON  */
#line 190 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                               { //ERROR  IDENTIFIER_LIST_识别失败 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1674 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 15: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ error SEMICOLON  */
#line 194 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                               { //ERROR 缺少右括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 1684 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 16: /* PROGRAM_HEAD_: PROGRAM error  */
#line 198 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                               { //ERROR program head checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1694 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 17: /* PROGRAM_HEAD_: PROGRAM ID error  */
#line 202 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                  { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1704 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 18: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error  */
#line 206 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                   { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1714 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 19: /* PROGTAM_BODY_: CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_  */
#line 212 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                  { //正常
					yyval=new ParseNode;
					yyval->token =Token::PROGTAM_BODY_;
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1725 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 20: /* IDENTIFIER_LIST_: IDENTIFIER_LIST_ COMMA ID  */
#line 219 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                             { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			yyval=new ParseNode;
			yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1735 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 21: /* IDENTIFIER_LIST_: ID  */
#line 223 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                    { //正常
			yyval=new ParseNode;
		   	yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1745 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 22: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON  */
#line 229 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                        { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1755 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 23: /* CONST_DECLARATIONS_: %empty  */
#line 233 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
					}
#line 1764 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 24: /* CONST_DECLARATIONS_: CONST error SEMICOLON  */
#line 236 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                { //ERROR 常量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1774 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 25: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ error  */
#line 240 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                         { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1784 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 26: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_  */
#line 246 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                             { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1795 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 27: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP error  */
#line 251 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                     { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1805 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 28: /* CONST_DECLARATION_: ID RELOP CONST_VARIABLE_  */
#line 255 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                  { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1815 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 29: /* CONST_DECLARATION_: ID RELOP error  */
#line 259 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                        { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
					}
#line 1825 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 30: /* CONST_DECLARATION_: CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_  */
#line 263 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                           { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1835 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 31: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_  */
#line 267 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                               { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1845 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 32: /* CONST_DECLARATION_: ID error CONST_VARIABLE_  */
#line 271 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                  { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1855 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 33: /* CONST_VARIABLE_: ADDOP ID  */
#line 277 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                 { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
					
				}
#line 1872 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 34: /* CONST_VARIABLE_: ID  */
#line 288 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                     { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1882 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 35: /* CONST_VARIABLE_: ADDOP NUM  */
#line 292 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                            { //正常
					if(yyval->val != "+" && yyval->val != "-"){
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						yyval=new ParseNode;
						yyval->token =Token::CONST_VARIABLE_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
				}
#line 1898 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 36: /* CONST_VARIABLE_: NUM  */
#line 302 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                      { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1908 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 37: /* CONST_VARIABLE_: LETTER  */
#line 306 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                        { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1918 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 38: /* TYPE_: STANDRAD_TYPE_  */
#line 313 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                      { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1928 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 39: /* TYPE_: RECORD VAR_DECLARATION_ END  */
#line 317 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                             { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
            yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1938 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 40: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_  */
#line 321 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                   { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 1950 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 41: /* TYPE_: ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_  */
#line 327 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //ERROR 缺少左中括号 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
		}
#line 1960 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 42: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_  */
#line 331 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                             { //ERROR 缺少OF关键字 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
		}
#line 1970 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 43: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error  */
#line 335 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                          { //ERROR 数组元素类型识别失败 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 1980 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 44: /* TYPE_: ARRAY error  */
#line 339 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 1990 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 45: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES error  */
#line 343 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                     { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2000 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 46: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error  */
#line 347 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                              { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2010 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 47: /* STANDRAD_TYPE_: INTEGER  */
#line 353 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                           { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2020 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 48: /* STANDRAD_TYPE_: REAL  */
#line 357 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2030 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 49: /* STANDRAD_TYPE_: CHAR  */
#line 361 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2040 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 50: /* STANDRAD_TYPE_: BOLLEAN  */
#line 365 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                 { //正常
						yyval=new ParseNode;
						yyval->token =Token::STANDRAD_TYPE_;
                        yyval->children.push_back(yyvsp[0]);
					}
#line 2050 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 51: /* PERIODS_: PERIODS_ COMMA PERIOD_  */
#line 371 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2061 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 52: /* PERIODS_: PERIODS_ error PERIOD_  */
#line 376 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                        { //ERROR 缺少逗号 checked
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2071 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 53: /* PERIODS_: PERIOD_  */
#line 380 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                         { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 2081 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 54: /* PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_  */
#line 386 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                  { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2092 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 55: /* PERIOD_: CONST_VARIABLE_ error CONST_VARIABLE_  */
#line 391 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                       { //ERROR 缺少.. checked
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2102 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 56: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ SEMICOLON  */
#line 399 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                      { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2112 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 57: /* VAR_DECLARATIONS_: %empty  */
#line 403 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
					}
#line 2121 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 58: /* VAR_DECLARATIONS_: VAR error SEMICOLON  */
#line 406 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                             { //ERROR 变量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2131 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 59: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ error  */
#line 410 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                    { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2141 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 60: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_  */
#line 416 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2152 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 61: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON TYPE_  */
#line 421 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //正常
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2162 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 62: /* VAR_DECLARATION_: VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_  */
#line 425 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                              { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2172 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 63: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_  */
#line 429 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                  { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2182 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 64: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error  */
#line 433 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                  { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2192 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 65: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON error  */
#line 437 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					}
#line 2202 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 66: /* VAR_DECLARATION_: IDENTIFIER_LIST_ error TYPE_  */
#line 441 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2212 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 67: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON  */
#line 447 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                          { //正常
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
							}
#line 2222 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 68: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error  */
#line 451 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                                                { //ERROR 缺少分号 checked
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 2232 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 69: /* SUBPROGRAM_DECLARATIONS_: %empty  */
#line 455 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                          { //正常
								yyval=new ParseNode;
								yyval->token =Token::SUBPROGRAM_DECLARATIONS_;
							}
#line 2241 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 70: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ SEMICOLON PROGTAM_BODY_  */
#line 460 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                 { //正常
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2251 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 71: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ error PROGTAM_BODY_  */
#line 464 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                              { //ERROR 缺少分号 checked
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2261 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 72: /* SUBPROGRAM_HEAD_: PROCEDURE ID FORMAL_PARAMETER_  */
#line 470 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                      { //正常
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2271 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 73: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON TYPE_  */
#line 474 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                   { //正常
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2282 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 74: /* SUBPROGRAM_HEAD_: FUNCTION error FORMAL_PARAMETER_ COLON TYPE_  */
#line 479 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                      { //ERROR 函数名缺失 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2292 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 75: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error TYPE_  */
#line 483 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                   { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2302 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 76: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ COLON error  */
#line 487 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                   { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2312 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 77: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_ error  */
#line 491 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                             { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2322 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 78: /* SUBPROGRAM_HEAD_: FUNCTION error  */
#line 495 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
					}
#line 2332 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 79: /* SUBPROGRAM_HEAD_: PROCEDURE error  */
#line 499 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
					}
#line 2342 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 80: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES  */
#line 505 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                           { //正常
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2352 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 81: /* FORMAL_PARAMETER_: %empty  */
#line 509 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
					}
#line 2361 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 82: /* FORMAL_PARAMETER_: LEFT_PARENTHESES error  */
#line 512 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                { //ERROR 不完整的形参列表
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
					}
#line 2371 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 83: /* FORMAL_PARAMETER_: LEFT_PARENTHESES PARAMETER_LISTS_ error  */
#line 516 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                 { //ERROR 右括号缺失
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2381 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 84: /* PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_  */
#line 522 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2391 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 85: /* PARAMETER_LISTS_: PARAMETER_LISTS_ error PARAMETER_LIST_  */
#line 526 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //ERROR 缺少分号 checked
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2401 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 86: /* PARAMETER_LISTS_: PARAMETER_LIST_  */
#line 530 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                 { //正常
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2411 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 87: /* PARAMETER_LIST_: VAR_PARAMETER_  */
#line 536 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                       { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
				yyval=new ParseNode;
				yyval->token=Token::PARAMETER_LIST_;
				yyval->children.push_back(yyvsp[0]);
			}
#line 2421 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 88: /* PARAMETER_LIST_: VALUE_PARAMETER_  */
#line 540 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                          { //正常
				yyval=new ParseNode;
				yyval->token=Token::PARAMETER_LIST_;
				yyval->children.push_back(yyvsp[0]);
			}
#line 2431 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 89: /* VAR_PARAMETER_: VAR VALUE_PARAMETER_  */
#line 546 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::VAR_PARAMETER_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2441 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 90: /* VAR_PARAMETER_: VAR error  */
#line 550 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
					yyval=new ParseNode;
					yyval->token=Token::VAR_PARAMETER_;
					yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
				}
#line 2451 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 91: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON STANDRAD_TYPE_  */
#line 556 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2461 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 92: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error STANDRAD_TYPE_  */
#line 560 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
					}
#line 2471 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 93: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON error  */
#line 564 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                       { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2481 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 94: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error  */
#line 568 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                 { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2491 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 95: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ END  */
#line 575 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                               { //正常
						yyval=new ParseNode;
						yyval->token=Token::COMPOUND_STATEMENT_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2501 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 96: /* COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ error  */
#line 579 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                      { //ERROR 缺少END关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::COMPOUND_STATEMENT_;
						yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2511 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 97: /* STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_  */
#line 585 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                     { //正常
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 2521 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 98: /* STATEMENT_LIST_: STATEMENT_LIST_ error STATEMENT_  */
#line 589 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                  { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2531 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 99: /* STATEMENT_LIST_: STATEMENT_  */
#line 593 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2541 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 100: /* STATEMENT_: VARIABLE_ ASSIGNOP EXPRESSION_  */
#line 599 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                           {
               yyval=new ParseNode;
			   yyval->token=Token::STATEMENT_;
			   yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			   yyval->children.push_back(yyvsp[0]);
            }
#line 2552 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 101: /* STATEMENT_: CALL_PROCEDURE_STATEMENT_  */
#line 604 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                       {
               yyval=new ParseNode;
			   yyval->token=Token::STATEMENT_;
			   yyval->children.push_back(yyvsp[0]); 
            }
#line 2562 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 102: /* STATEMENT_: COMPOUND_STATEMENT_  */
#line 608 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                 {
                yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2572 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 103: /* STATEMENT_: IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_  */
#line 612 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                       {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
            }
#line 2584 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 104: /* STATEMENT_: CASE EXPRESSION_ OF CASE_BODY_ END  */
#line 618 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
            }
#line 2596 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 105: /* STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_  */
#line 624 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                             {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2607 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 106: /* STATEMENT_: REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_  */
#line 629 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                      {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2618 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 107: /* STATEMENT_: IF EXPRESSION_ error STATEMENT_ ELSE_PART_  */
#line 634 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                        { //ERROR 缺少then关键字 checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
			}
#line 2628 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 108: /* STATEMENT_: WHILE EXPRESSION_ error STATEMENT_  */
#line 638 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                            { //ERROR 缺少关键字do checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2638 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 109: /* STATEMENT_: REPEAT STATEMENT_LIST_ error EXPRESSION_  */
#line 642 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                  { //ERROR 缺少关键字until checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
			}
#line 2648 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 110: /* STATEMENT_: FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_  */
#line 646 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                       {
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
				yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
				yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2661 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 111: /* STATEMENT_: %empty  */
#line 653 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                          {
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
			}
#line 2670 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 112: /* VARIABLE_: ID ID_VARPARTS_  */
#line 658 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                           {
              yyval=new ParseNode;
			  yyval->token=Token::VARIABLE_;
			  yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
           }
#line 2680 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 113: /* ID_VARPARTS_: ID_VARPARTS_ ID_VARPART_  */
#line 663 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                       {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPARTS_;
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2690 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 114: /* ID_VARPARTS_: %empty  */
#line 667 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                 {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPARTS_;
                }
#line 2699 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 115: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES  */
#line 671 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                               {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[-1]);
               }
#line 2710 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 116: /* ID_VARPART_: DOT ID  */
#line 676 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                       {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2720 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 117: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES error  */
#line 680 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                              { //ERROR 不完整的数组下标列表 checked
				 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
			   }
#line 2730 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 118: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error  */
#line 684 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                           { //ERROR 缺失右中括号 checked
				 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   }
#line 2740 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 119: /* ELSE_PART_: ELSE STATEMENT_  */
#line 689 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                            {
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2750 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 120: /* ELSE_PART_: %empty  */
#line 693 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
              { 
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
            }
#line 2759 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 121: /* CASE_BODY_: BRANCH_LIST_  */
#line 697 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                         {
                yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2769 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 122: /* CASE_BODY_: %empty  */
#line 701 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
              {
                yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
            }
#line 2778 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 123: /* BRANCH_LIST_: BRANCH_LIST_ SEMICOLON BRANCH_  */
#line 705 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                             {
                 yyval=new ParseNode;
				 yyval->token=Token::BRANCH_LIST_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
                }
#line 2789 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 124: /* BRANCH_LIST_: BRANCH_  */
#line 710 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                         {
                 yyval=new ParseNode;
				 yyval->token=Token::BRANCH_LIST_;
				 yyval->children.push_back(yyvsp[0]);
                }
#line 2799 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 125: /* BRANCH_: CONST_LIST_ COLON STATEMENT_  */
#line 715 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                      {
              yyval=new ParseNode;
			  yyval->token=Token::BRANCH_;
			  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			  yyval->children.push_back(yyvsp[0]);
}
#line 2810 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 126: /* CONST_LIST_: CONST_LIST_ COMMA CONST_VARIABLE_  */
#line 721 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                               {
                yyval=new ParseNode;
				yyval->token=Token::CONST_LIST_;
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				yyval->children.push_back(yyvsp[0]);
            }
#line 2821 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 127: /* CONST_LIST_: CONST_VARIABLE_  */
#line 726 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                             {
                yyval=new ParseNode;
				yyval->token=Token::CONST_LIST_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2831 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 128: /* UPDOWN_: TO  */
#line 731 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
           {
            yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2841 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 129: /* UPDOWN_: DOWNTO  */
#line 735 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                {
            yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2851 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 130: /* CALL_PROCEDURE_STATEMENT_: ID  */
#line 740 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                              {
                              yyval=new ParseNode;
							  yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
							  yyval->children.push_back(yyvsp[0]); 
                            }
#line 2861 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 131: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 744 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                                    {
                                yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                            }
#line 2872 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 132: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 749 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                        { //ERROR 缺少右括号 checked
				                yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			                }
#line 2882 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 133: /* EXPRESSION_LIST_: EXPRESSION_LIST_ COMMA EXPRESSION_  */
#line 754 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                     {
                      yyval=new ParseNode;
					  yyval->token=Token::EXPRESSION_LIST_;
					  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					  yyval->children.push_back(yyvsp[0]);
                    }
#line 2893 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 134: /* EXPRESSION_LIST_: EXPRESSION_  */
#line 759 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                 {
                        yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyval->children.push_back(yyvsp[0]);
                    }
#line 2903 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 135: /* EXPRESSION_LIST_: EXPRESSION_LIST_ error EXPRESSION_  */
#line 763 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2913 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 136: /* EXPRESSION_: SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_  */
#line 768 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                         {
                 yyval=new ParseNode;
				 yyval->token=Token::EXPRESSION_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
               }
#line 2924 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 137: /* EXPRESSION_: SIMPLE_EXPRESSION_  */
#line 773 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                   {
                   yyval=new ParseNode;
				   yyval->token=Token::EXPRESSION_;
				   yyval->children.push_back(yyvsp[0]);
               }
#line 2934 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 138: /* SIMPLE_EXPRESSION_: TERM_  */
#line 778 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                          {
                       yyval=new ParseNode;
					   yyval->token=Token::SIMPLE_EXPRESSION_;
					   yyval->children.push_back(yyvsp[0]);
                    }
#line 2944 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 139: /* SIMPLE_EXPRESSION_: ADDOP TERM_  */
#line 782 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                 {
						if(yyval->val != "+" && yyval->val != "-"){
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyerror("fatal error in const variable", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}else{
						yyval=new ParseNode;
						yyval->token =Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
                    }
#line 2960 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 140: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP TERM_  */
#line 792 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                    {
                        yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
                    }
#line 2971 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 141: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP error TERM_  */
#line 797 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                      {//error，缺少操作数
						yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2981 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 142: /* TERM_: TERM_ MULOP FACTOR_  */
#line 802 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                           {
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
		  yyval->children.push_back(yyvsp[0]);
        }
#line 2992 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 143: /* TERM_: FACTOR_  */
#line 807 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                 {
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3002 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 144: /* TERM_: TERM_ MULOP error FACTOR_  */
#line 811 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                               { //error,缺少操作数
			yyval=new ParseNode;
			yyval->token=Token::TERM_;
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 3012 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 145: /* FACTOR_: UNSIGN_CONST_VARIABLE_  */
#line 816 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3022 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 146: /* FACTOR_: VARIABLE_  */
#line 820 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                     {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3032 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 147: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 824 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                                  {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3043 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 148: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES  */
#line 829 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                          {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3054 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 149: /* FACTOR_: NOT FACTOR_  */
#line 834 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                       {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3064 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 150: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 838 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3074 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 151: /* FACTOR_: ID LEFT_PARENTHESES error  */
#line 842 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                             { //ERROR 函数调用的表达式列表缺失
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3084 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 152: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ error  */
#line 846 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                                      { //ERROR 缺少右括号
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3094 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 153: /* UNSIGN_CONST_VARIABLE_: INT_NUM  */
#line 851 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3104 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 154: /* UNSIGN_CONST_VARIABLE_: FLOAT_NUM  */
#line 855 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                    {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3114 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;

  case 155: /* UNSIGN_CONST_VARIABLE_: LETTER  */
#line 859 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"
                                 {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3124 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"
    break;


#line 3128 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.tab.cc"

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

#line 866 "/mnt/d/Work/Program/Course/Compilation Principle/Pascal2C/build/../src/yacc.y"

// 函数定义


void yyerror(const char *s){
	haveSemanticError = true;//错误标志，含有语法错误
	string errorInformation;//定义错误信息
	errorInformation += string(s);//添加错误信息
	errorInformation += ", location: " + itos(yylineno-1) + "." + itos(yycolumn-yyleng);//添加错误位置
	syntaxErrorInformation.push_back(errorInformation);//存放错误信息
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) + "-" + itos(loc->last_line) + "." + itos(loc->last_column);
	syntaxErrorInformation.push_back(errorInformation);
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
	syntaxErrorInformation.push_back(errorInformation);
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" + itos(endLine) + "." + itos(endCol);
	syntaxErrorInformation.push_back(errorInformation);
}
