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
#line 6 "yacc.y"

#include "main.h"
#include "yacc.tab.c"

extern "C"
{
	void yyerror(const char *s);
	int yyparse();
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


#line 102 "yacc.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROGRAM = 258,                 /* PROGRAM  */
    CONST = 259,                   /* CONST  */
    TYPE = 260,                    /* TYPE  */
    RECORD = 261,                  /* RECORD  */
    END = 262,                     /* END  */
    ARRAY = 263,                   /* ARRAY  */
    OF = 264,                      /* OF  */
    INTEGER = 265,                 /* INTEGER  */
    REAL = 266,                    /* REAL  */
    BOLLEAN = 267,                 /* BOLLEAN  */
    CHAR = 268,                    /* CHAR  */
    VAR = 269,                     /* VAR  */
    FUNCTION = 270,                /* FUNCTION  */
    PROCEDURE = 271,               /* PROCEDURE  */
    BEGIN = 272,                   /* BEGIN  */
    IF = 273,                      /* IF  */
    THEN = 274,                    /* THEN  */
    ELSE = 275,                    /* ELSE  */
    CASE = 276,                    /* CASE  */
    WHILE = 277,                   /* WHILE  */
    DO = 278,                      /* DO  */
    REPEAT = 279,                  /* REPEAT  */
    UNTIL = 280,                   /* UNTIL  */
    FOR = 281,                     /* FOR  */
    TO = 282,                      /* TO  */
    DOWNTO = 283,                  /* DOWNTO  */
    NOT = 284,                     /* NOT  */
    DOT = 285,                     /* DOT  */
    RANGE_DOT = 286,               /* RANGE_DOT  */
    COMMA = 287,                   /* COMMA  */
    LEFT_PARENTHESES = 288,        /* LEFT_PARENTHESES  */
    RIGHT_PARENTHESES = 289,       /* RIGHT_PARENTHESES  */
    LEFT_MEDIUM_PARENTHESES = 290, /* LEFT_MEDIUM_PARENTHESES  */
    RIGHT_MEDIUM_PARENTHESES = 291, /* RIGHT_MEDIUM_PARENTHESES  */
    SEMICOLON = 292,               /* SEMICOLON  */
    ASSIGNOP = 293,                /* ASSIGNOP  */
    COLON = 294,                   /* COLON  */
    RELOP = 295,                   /* RELOP  */
    ADDOP = 296,                   /* ADDOP  */
    MULOP = 297,                   /* MULOP  */
    ID = 298,                      /* ID  */
    NUM = 299,                     /* NUM  */
    INT_NUM = 300,                 /* INT_NUM  */
    FLOAT_NUM = 301,               /* FLOAT_NUM  */
    LETTER = 302,                  /* LETTER  */
    NULL = 303,                    /* NULL  */
    ADD = 304,                     /* ADD  */
    MUL = 305,                     /* MUL  */
    UMINUS = 306,                  /* UMINUS  */
    LOWER_THAN_ELSE = 307,         /* LOWER_THAN_ELSE  */
    ONE = 308,                     /* ONE  */
    TWO = 309,                     /* TWO  */
    THREE = 310                    /* THREE  */
  };
  typedef enum yytokentype yytoken_kind_t;
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
  YYSYMBOL_BEGIN = 17,                     /* BEGIN  */
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
  YYSYMBOL_NULL = 48,                      /* NULL  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_ADD = 51,                       /* ADD  */
  YYSYMBOL_52_ = 52,                       /* '*'  */
  YYSYMBOL_53_ = 53,                       /* '/'  */
  YYSYMBOL_MUL = 54,                       /* MUL  */
  YYSYMBOL_UMINUS = 55,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 56,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ONE = 57,                       /* ONE  */
  YYSYMBOL_TWO = 58,                       /* TWO  */
  YYSYMBOL_THREE = 59,                     /* THREE  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_programstruct = 61,             /* programstruct  */
  YYSYMBOL_PROGRAM_HEAD_ = 62,             /* PROGRAM_HEAD_  */
  YYSYMBOL_PROGTAM_BODY_ = 63,             /* PROGTAM_BODY_  */
  YYSYMBOL_IDENTIFIER_LIST_ = 64,          /* IDENTIFIER_LIST_  */
  YYSYMBOL_CONST_DECLARATIONS_ = 65,       /* CONST_DECLARATIONS_  */
  YYSYMBOL_CONST_DECLARATION_ = 66,        /* CONST_DECLARATION_  */
  YYSYMBOL_CONST_VARIABLE_ = 67,           /* CONST_VARIABLE_  */
  YYSYMBOL_TYPE_ = 68,                     /* TYPE_  */
  YYSYMBOL_STANDRAD_TYPE_ = 69,            /* STANDRAD_TYPE_  */
  YYSYMBOL_PERIODS_ = 70,                  /* PERIODS_  */
  YYSYMBOL_PERIOD_ = 71,                   /* PERIOD_  */
  YYSYMBOL_VAR_DECLARATIONS_ = 72,         /* VAR_DECLARATIONS_  */
  YYSYMBOL_VAR_DECLARATION_ = 73,          /* VAR_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_DECLARATIONS_ = 74,  /* SUBPROGRAM_DECLARATIONS_  */
  YYSYMBOL_SUBPROGRAM_DECLARATION_ = 75,   /* SUBPROGRAM_DECLARATION_  */
  YYSYMBOL_SUBPROGRAM_HEAD_ = 76,          /* SUBPROGRAM_HEAD_  */
  YYSYMBOL_FORMAL_PARAMETER_LIST_ = 77,    /* FORMAL_PARAMETER_LIST_  */
  YYSYMBOL_PARAMETER_LISTS_ = 78,          /* PARAMETER_LISTS_  */
  YYSYMBOL_PARAMETER_LIST_ = 79,           /* PARAMETER_LIST_  */
  YYSYMBOL_VAR_PARAMETER_ = 80,            /* VAR_PARAMETER_  */
  YYSYMBOL_VALUE_PARAMETER_ = 81,          /* VALUE_PARAMETER_  */
  YYSYMBOL_COMPOUND_STATEMENT_ = 82,       /* COMPOUND_STATEMENT_  */
  YYSYMBOL_STATEMENT_LIST_ = 83,           /* STATEMENT_LIST_  */
  YYSYMBOL_STATEMENT_ = 84,                /* STATEMENT_  */
  YYSYMBOL_VARIABLE_ = 85,                 /* VARIABLE_  */
  YYSYMBOL_ID_VARPARTS_ = 86,              /* ID_VARPARTS_  */
  YYSYMBOL_ID_VARPART_ = 87,               /* ID_VARPART_  */
  YYSYMBOL_ELSE_PART_ = 88,                /* ELSE_PART_  */
  YYSYMBOL_CASE_BODY_ = 89,                /* CASE_BODY_  */
  YYSYMBOL_BRANCH_LIST_ = 90,              /* BRANCH_LIST_  */
  YYSYMBOL_BRANCH_ = 91,                   /* BRANCH_  */
  YYSYMBOL_CONST_LIST_ = 92,               /* CONST_LIST_  */
  YYSYMBOL_UPDOWN_ = 93,                   /* UPDOWN_  */
  YYSYMBOL_CALL_PROCEDURE_STATEMENT_ = 94, /* CALL_PROCEDURE_STATEMENT_  */
  YYSYMBOL_EXPRESSION_LIST_ = 95,          /* EXPRESSION_LIST_  */
  YYSYMBOL_EXPRESSION_ = 96,               /* EXPRESSION_  */
  YYSYMBOL_SIMPLE_EXPRESSION_ = 97,        /* SIMPLE_EXPRESSION_  */
  YYSYMBOL_TERM_ = 98,                     /* TERM_  */
  YYSYMBOL_FACTOR_ = 99,                   /* FACTOR_  */
  YYSYMBOL_UNSIGN_CONST_VARIABLE_ = 100    /* UNSIGN_CONST_VARIABLE_  */
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
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
       2,     2,    52,    49,     2,    50,     2,    53,     2,     2,
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
      45,    46,    47,    48,    51,    54,    55,    56,    57,    58,
      59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   131,   135,   139,   143,   147,   152,   157,
     164,   170,   174,   178,   182,   186,   190,   194,   198,   204,
     211,   215,   221,   225,   228,   232,   238,   243,   247,   251,
     255,   259,   263,   269,   280,   284,   294,   298,   305,   309,
     313,   319,   323,   327,   331,   335,   339,   345,   349,   353,
     357,   363,   368,   372,   378,   383,   391,   395,   398,   402,
     408,   413,   417,   421,   425,   429,   433,   439,   443,   447,
     452,   456,   462,   466,   471,   475,   479,   483,   487,   491,
     497,   501,   504,   508,   514,   518,   522,   528,   532,   538,
     542,   548,   552,   556,   560,   567,   571,   577,   581,   585,
     591,   596,   600,   604,   610,   616,   621,   626,   630,   634,
     638,   645,   650,   655,   659,   663,   668,   672,   676,   681,
     685,   689,   693,   697,   702,   707,   713,   718,   723,   727,
     732,   736,   741,   746,   751,   755,   760,   765,   770,   774,
     784,   789,   794,   799,   803,   808,   812,   816,   821,   826,
     830,   834,   838,   843,   847,   851
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
  "CHAR", "VAR", "FUNCTION", "PROCEDURE", "BEGIN", "IF", "THEN", "ELSE",
  "CASE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR", "TO", "DOWNTO", "NOT",
  "DOT", "RANGE_DOT", "COMMA", "LEFT_PARENTHESES", "RIGHT_PARENTHESES",
  "LEFT_MEDIUM_PARENTHESES", "RIGHT_MEDIUM_PARENTHESES", "SEMICOLON",
  "ASSIGNOP", "COLON", "RELOP", "ADDOP", "MULOP", "ID", "NUM", "INT_NUM",
  "FLOAT_NUM", "LETTER", "NULL", "'+'", "'-'", "ADD", "'*'", "'/'", "MUL",
  "UMINUS", "LOWER_THAN_ELSE", "ONE", "TWO", "THREE", "$accept",
  "programstruct", "PROGRAM_HEAD_", "PROGTAM_BODY_", "IDENTIFIER_LIST_",
  "CONST_DECLARATIONS_", "CONST_DECLARATION_", "CONST_VARIABLE_", "TYPE_",
  "STANDRAD_TYPE_", "PERIODS_", "PERIOD_", "VAR_DECLARATIONS_",
  "VAR_DECLARATION_", "SUBPROGRAM_DECLARATIONS_",
  "SUBPROGRAM_DECLARATION_", "SUBPROGRAM_HEAD_", "FORMAL_PARAMETER_LIST_",
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
       0,     1,     3,    61,    62,     4,    62,    63,    65,     1,
      43,     0,     1,    63,     1,    43,    66,     1,    63,    30,
      14,    72,    33,     1,    33,    30,     1,    30,    37,     1,
      40,     1,    37,    30,    63,     1,    30,     1,    43,    64,
      73,    74,    64,    64,     1,    64,    41,    43,    44,    47,
      67,     1,    67,    43,    43,    30,    37,     1,    32,    39,
       1,    37,    15,    16,    17,    75,    76,    82,    34,    34,
      34,     1,    34,    43,    44,    40,     1,    40,     6,     8,
      10,    11,    12,    13,    68,    69,    43,     1,    68,    64,
      64,     1,    43,     1,    43,    18,    21,    22,    24,    26,
      43,    82,    83,    84,    85,    94,     1,    37,     1,    37,
      37,    37,    37,    37,     1,    37,    67,    67,     1,    67,
      73,     1,    35,    39,     1,    39,    33,    77,    77,    77,
      29,    33,    41,    43,    45,    46,    47,    85,    96,    97,
      98,    99,   100,    96,    96,    83,    43,    33,    86,     1,
       7,    37,    38,    63,    63,     1,     7,    37,    67,    70,
      71,     1,    70,    68,    68,     1,    68,     1,    14,    64,
      78,    79,    80,    81,    39,     1,    39,    99,    96,    98,
      33,     1,    19,    40,    41,    42,     9,     1,    23,     1,
      25,    38,    95,    96,    30,    35,    87,    84,    84,    96,
       1,    31,     1,    32,    36,     1,    36,     1,    81,     1,
      39,     1,    34,    37,    68,    68,     1,    68,     1,    34,
       1,    95,    84,    84,    97,     1,    98,     1,    99,    67,
      89,    90,    91,    92,    84,    84,    43,    85,    96,    96,
      96,     1,    32,    34,    43,     1,    95,    67,    67,    71,
      71,     9,     1,     9,    69,     1,    69,    79,    79,     1,
      34,    20,    88,    88,    98,    99,     7,    37,    32,    39,
      33,    27,    28,    93,    96,    96,     1,    36,    68,    68,
       1,    69,    84,    91,    67,    84,    95,    96,     1,    34,
      23,    84
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    92,    92,    93,    93,
      94,    94,    94,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100
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
#line 123 "yacc.y"
                                               { //正常
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
			   		yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]);
					yyval->children.push_back(yyvsp[0]);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					YYACCEPT;
			   	}
#line 1646 "yacc.tab.c"
    break;

  case 3: /* programstruct: PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 131 "yacc.y"
                                                                   { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   	}
#line 1656 "yacc.tab.c"
    break;

  case 4: /* programstruct: error PROGTAM_BODY_ DOT  */
#line 135 "yacc.y"
                                                         { //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
			   	}
#line 1666 "yacc.tab.c"
    break;

  case 5: /* programstruct: PROGRAM_HEAD_ error DOT  */
#line 139 "yacc.y"
                                                         { //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=yyval=new ParseNode;
			   		yyval->token =Token::PROGRAM_;
					yyerror("fatal error in program body");
			   	}
#line 1676 "yacc.tab.c"
    break;

  case 6: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ DOT  */
#line 143 "yacc.y"
                                                                       { //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1686 "yacc.tab.c"
    break;

  case 7: /* programstruct: error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT  */
#line 147 "yacc.y"
                                                                             { //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
				}
#line 1697 "yacc.tab.c"
    break;

  case 8: /* programstruct: error PROGRAM_HEAD_ PROGTAM_BODY_ error  */
#line 152 "yacc.y"
                                                                         { //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("missing a dot here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
				}
#line 1708 "yacc.tab.c"
    break;

  case 9: /* programstruct: error PROGRAM_HEAD_ error DOT  */
#line 157 "yacc.y"
                                                               { //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=yyval=new ParseNode;
					yyval->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
				}
#line 1719 "yacc.tab.c"
    break;

  case 10: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 164 "yacc.y"
                                                                                        { //正常
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyval->children.push_back(yyvsp[-5]); yyval->children.push_back(yyvsp[-4]);
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]); 
					yyval->children.push_back(yyvsp[-1]);	yyval->children.push_back(yyvsp[0]);
				}
#line 1731 "yacc.tab.c"
    break;

  case 11: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error  */
#line 170 "yacc.y"
                                                                                                      { //ERROR 缺少; checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1741 "yacc.tab.c"
    break;

  case 12: /* PROGRAM_HEAD_: PROGRAM error LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 174 "yacc.y"
                                                                                                              { //ERROR 缺少主程序名 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
				}
#line 1751 "yacc.tab.c"
    break;

  case 13: /* PROGRAM_HEAD_: PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON  */
#line 178 "yacc.y"
                                                                                               { //ERROR 缺少左括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", (yylsp[-2]).first_line, (yylsp[-2]).first_column-1);
				}
#line 1761 "yacc.tab.c"
    break;

  case 14: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON  */
#line 182 "yacc.y"
                                                                                               { //ERROR  IDENTIFIER_LIST_识别失败 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1771 "yacc.tab.c"
    break;

  case 15: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ error SEMICOLON  */
#line 186 "yacc.y"
                                                                                               { //ERROR 缺少右括号 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 1781 "yacc.tab.c"
    break;

  case 16: /* PROGRAM_HEAD_: PROGRAM error  */
#line 190 "yacc.y"
                                               { //ERROR program head checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1791 "yacc.tab.c"
    break;

  case 17: /* PROGRAM_HEAD_: PROGRAM ID error  */
#line 194 "yacc.y"
                                                  { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1801 "yacc.tab.c"
    break;

  case 18: /* PROGRAM_HEAD_: PROGRAM ID LEFT_PARENTHESES error  */
#line 198 "yacc.y"
                                                                   { //ERROR  IDENTIFIER_LIST_缺失 checked
					yyval=new ParseNode;
					yyval->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1811 "yacc.tab.c"
    break;

  case 19: /* PROGTAM_BODY_: CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_  */
#line 204 "yacc.y"
                                                                                                  { //正常
					yyval=new ParseNode;
					yyval->token =Token::PROGTAM_BODY_;
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1822 "yacc.tab.c"
    break;

  case 20: /* IDENTIFIER_LIST_: IDENTIFIER_LIST_ COMMA ID  */
#line 211 "yacc.y"
                                             { //正常  IDENTIFIER_LIST_的产生式不打算加入error
			yyval=new ParseNode;
			yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1832 "yacc.tab.c"
    break;

  case 21: /* IDENTIFIER_LIST_: ID  */
#line 215 "yacc.y"
                    { //正常
			yyval=new ParseNode;
		   	yyval->token =Token::IDENTIFIER_LIST_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 1842 "yacc.tab.c"
    break;

  case 22: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON  */
#line 221 "yacc.y"
                                                        { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1852 "yacc.tab.c"
    break;

  case 23: /* CONST_DECLARATIONS_: %empty  */
#line 225 "yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
					}
#line 1861 "yacc.tab.c"
    break;

  case 24: /* CONST_DECLARATIONS_: CONST error SEMICOLON  */
#line 228 "yacc.y"
                                                                { //ERROR 常量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1871 "yacc.tab.c"
    break;

  case 25: /* CONST_DECLARATIONS_: CONST CONST_DECLARATION_ error  */
#line 232 "yacc.y"
                                                                         { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1881 "yacc.tab.c"
    break;

  case 26: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_  */
#line 238 "yacc.y"
                                                                             { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1892 "yacc.tab.c"
    break;

  case 27: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID RELOP error  */
#line 243 "yacc.y"
                                                                                     { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1902 "yacc.tab.c"
    break;

  case 28: /* CONST_DECLARATION_: ID RELOP CONST_VARIABLE_  */
#line 247 "yacc.y"
                                                                  { //正常
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1912 "yacc.tab.c"
    break;

  case 29: /* CONST_DECLARATION_: ID RELOP error  */
#line 251 "yacc.y"
                                                        { //常数初始化右值缺失 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
					}
#line 1922 "yacc.tab.c"
    break;

  case 30: /* CONST_DECLARATION_: CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_  */
#line 255 "yacc.y"
                                                                                           { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1932 "yacc.tab.c"
    break;

  case 31: /* CONST_DECLARATION_: CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_  */
#line 259 "yacc.y"
                                                                                               { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1942 "yacc.tab.c"
    break;

  case 32: /* CONST_DECLARATION_: ID error CONST_VARIABLE_  */
#line 263 "yacc.y"
                                                                  { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new ParseNode;
						yyval->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1952 "yacc.tab.c"
    break;

  case 33: /* CONST_VARIABLE_: ADDOP ID  */
#line 269 "yacc.y"
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
#line 1969 "yacc.tab.c"
    break;

  case 34: /* CONST_VARIABLE_: ID  */
#line 280 "yacc.y"
                                     { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 1979 "yacc.tab.c"
    break;

  case 35: /* CONST_VARIABLE_: ADDOP NUM  */
#line 284 "yacc.y"
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
#line 1995 "yacc.tab.c"
    break;

  case 36: /* CONST_VARIABLE_: NUM  */
#line 294 "yacc.y"
                                      { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2005 "yacc.tab.c"
    break;

  case 37: /* CONST_VARIABLE_: LETTER  */
#line 298 "yacc.y"
                                        { //正常
					yyval=new ParseNode;
					yyval->token =Token::CONST_VARIABLE_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2015 "yacc.tab.c"
    break;

  case 38: /* TYPE_: STANDRAD_TYPE_  */
#line 305 "yacc.y"
                      { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 2025 "yacc.tab.c"
    break;

  case 39: /* TYPE_: RECORD VAR_DECLARATION_ END  */
#line 309 "yacc.y"
                                             { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
            yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 2035 "yacc.tab.c"
    break;

  case 40: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_  */
#line 313 "yacc.y"
                                                                                                   { //正常
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2047 "yacc.tab.c"
    break;

  case 41: /* TYPE_: ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_  */
#line 319 "yacc.y"
                                                                        { //ERROR 缺少左中括号 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
		}
#line 2057 "yacc.tab.c"
    break;

  case 42: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_  */
#line 323 "yacc.y"
                                                                                             { //ERROR 缺少OF关键字 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
		}
#line 2067 "yacc.tab.c"
    break;

  case 43: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error  */
#line 327 "yacc.y"
                                                                                          { //ERROR 数组元素类型识别失败 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2077 "yacc.tab.c"
    break;

  case 44: /* TYPE_: ARRAY error  */
#line 331 "yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2087 "yacc.tab.c"
    break;

  case 45: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES error  */
#line 335 "yacc.y"
                                                     { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2097 "yacc.tab.c"
    break;

  case 46: /* TYPE_: ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error  */
#line 339 "yacc.y"
                                                              { //ERROR 不完整的数组类型 checked
			yyval=new ParseNode;
			yyval->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &(yyloc));
		}
#line 2107 "yacc.tab.c"
    break;

  case 47: /* STANDRAD_TYPE_: INTEGER  */
#line 345 "yacc.y"
                           { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2117 "yacc.tab.c"
    break;

  case 48: /* STANDRAD_TYPE_: REAL  */
#line 349 "yacc.y"
                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2127 "yacc.tab.c"
    break;

  case 49: /* STANDRAD_TYPE_: CHAR  */
#line 353 "yacc.y"
                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::STANDRAD_TYPE_;
						yyval->children.push_back(yyvsp[0]);
					}
#line 2137 "yacc.tab.c"
    break;

  case 50: /* STANDRAD_TYPE_: BOLLEAN  */
#line 357 "yacc.y"
                                                 { //正常
						yyval=new ParseNode;
						yyval->token =Token::STANDRAD_TYPE_;
                        yyval->children.push_back(yyvsp[0]);
					}
#line 2147 "yacc.tab.c"
    break;

  case 51: /* PERIODS_: PERIODS_ COMMA PERIOD_  */
#line 363 "yacc.y"
                                { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2158 "yacc.tab.c"
    break;

  case 52: /* PERIODS_: PERIODS_ error PERIOD_  */
#line 368 "yacc.y"
                                        { //ERROR 缺少逗号 checked
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2168 "yacc.tab.c"
    break;

  case 53: /* PERIODS_: PERIOD_  */
#line 372 "yacc.y"
                         { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIODS_;
			yyval->children.push_back(yyvsp[0]);
		}
#line 2178 "yacc.tab.c"
    break;

  case 54: /* PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_  */
#line 378 "yacc.y"
                                                  { //正常
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			yyval->children.push_back(yyvsp[0]);
		}
#line 2189 "yacc.tab.c"
    break;

  case 55: /* PERIOD_: CONST_VARIABLE_ error CONST_VARIABLE_  */
#line 383 "yacc.y"
                                                       { //ERROR 缺少.. checked
			yyval=new ParseNode;
			yyval->token=Token::PERIOD_;
			yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2199 "yacc.tab.c"
    break;

  case 56: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ SEMICOLON  */
#line 391 "yacc.y"
                                                      { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2209 "yacc.tab.c"
    break;

  case 57: /* VAR_DECLARATIONS_: %empty  */
#line 395 "yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
					}
#line 2218 "yacc.tab.c"
    break;

  case 58: /* VAR_DECLARATIONS_: VAR error SEMICOLON  */
#line 398 "yacc.y"
                                                             { //ERROR 变量定义出现错误 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2228 "yacc.tab.c"
    break;

  case 59: /* VAR_DECLARATIONS_: VAR VAR_DECLARATION_ error  */
#line 402 "yacc.y"
                                                                    { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2238 "yacc.tab.c"
    break;

  case 60: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_  */
#line 408 "yacc.y"
                                                                                { //正常
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2249 "yacc.tab.c"
    break;

  case 61: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON TYPE_  */
#line 413 "yacc.y"
                                                                        { //正常
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 2259 "yacc.tab.c"
    break;

  case 62: /* VAR_DECLARATION_: VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_  */
#line 417 "yacc.y"
                                                                                              { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2269 "yacc.tab.c"
    break;

  case 63: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_  */
#line 421 "yacc.y"
                                                                                                  { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2279 "yacc.tab.c"
    break;

  case 64: /* VAR_DECLARATION_: VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error  */
#line 425 "yacc.y"
                                                                                                  { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2289 "yacc.tab.c"
    break;

  case 65: /* VAR_DECLARATION_: IDENTIFIER_LIST_ COLON error  */
#line 429 "yacc.y"
                                                                        { //ERROR TYPE_识别失败 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					}
#line 2299 "yacc.tab.c"
    break;

  case 66: /* VAR_DECLARATION_: IDENTIFIER_LIST_ error TYPE_  */
#line 433 "yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2309 "yacc.tab.c"
    break;

  case 67: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON  */
#line 439 "yacc.y"
                                                                                          { //正常
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
							}
#line 2319 "yacc.tab.c"
    break;

  case 68: /* SUBPROGRAM_DECLARATIONS_: SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error  */
#line 443 "yacc.y"
                                                                                                                { //ERROR 缺少分号 checked
								yyval=new ParseNode;
								yyval->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 2329 "yacc.tab.c"
    break;

  case 69: /* SUBPROGRAM_DECLARATIONS_: %empty  */
#line 447 "yacc.y"
                                                          { //正常
								yyval=new ParseNode;
								yyval->token =Token::SUBPROGRAM_DECLARATIONS_;
							}
#line 2338 "yacc.tab.c"
    break;

  case 70: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ SEMICOLON PROGTAM_BODY_  */
#line 452 "yacc.y"
                                                                 { //正常
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2348 "yacc.tab.c"
    break;

  case 71: /* SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ error PROGTAM_BODY_  */
#line 456 "yacc.y"
                                                              { //ERROR 缺少分号 checked
				yyval=new ParseNode;
				yyval->token=Token::SUBPROGRAM_DECLARATION_;
				yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2358 "yacc.tab.c"
    break;

  case 72: /* SUBPROGRAM_HEAD_: PROCEDURE ID FORMAL_PARAMETER_LIST_  */
#line 462 "yacc.y"
                                                           { //正常
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2368 "yacc.tab.c"
    break;

  case 73: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_LIST_ COLON TYPE_  */
#line 466 "yacc.y"
                                                                                        { //正常
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2379 "yacc.tab.c"
    break;

  case 74: /* SUBPROGRAM_HEAD_: FUNCTION error FORMAL_PARAMETER_LIST_ COLON TYPE_  */
#line 471 "yacc.y"
                                                                                           { //ERROR 函数名缺失 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2389 "yacc.tab.c"
    break;

  case 75: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_LIST_ error TYPE_  */
#line 475 "yacc.y"
                                                                                        { //ERROR 缺少冒号 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2399 "yacc.tab.c"
    break;

  case 76: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_LIST_ COLON error  */
#line 479 "yacc.y"
                                                                                        { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2409 "yacc.tab.c"
    break;

  case 77: /* SUBPROGRAM_HEAD_: FUNCTION ID FORMAL_PARAMETER_LIST_ error  */
#line 483 "yacc.y"
                                                                                  { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2419 "yacc.tab.c"
    break;

  case 78: /* SUBPROGRAM_HEAD_: FUNCTION error  */
#line 487 "yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &(yyloc));
					}
#line 2429 "yacc.tab.c"
    break;

  case 79: /* SUBPROGRAM_HEAD_: PROCEDURE error  */
#line 491 "yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new ParseNode;
						yyval->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &(yyloc));
					}
#line 2439 "yacc.tab.c"
    break;

  case 80: /* FORMAL_PARAMETER_LIST_: LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES  */
#line 497 "yacc.y"
                                                                                   { //正常
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_LIST_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2449 "yacc.tab.c"
    break;

  case 81: /* FORMAL_PARAMETER_LIST_: %empty  */
#line 501 "yacc.y"
                                          { //正常
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_LIST_;
					}
#line 2458 "yacc.tab.c"
    break;

  case 82: /* FORMAL_PARAMETER_LIST_: LEFT_PARENTHESES error  */
#line 504 "yacc.y"
                                                                { //ERROR 不完整的形参列表
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_LIST_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &(yyloc));
					}
#line 2468 "yacc.tab.c"
    break;

  case 83: /* FORMAL_PARAMETER_LIST_: LEFT_PARENTHESES PARAMETER_LISTS_ error  */
#line 508 "yacc.y"
                                                                                 { //ERROR 右括号缺失
						yyval=new ParseNode;
						yyval->token=Token::FORMAL_PARAMETER_LIST_;
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2478 "yacc.tab.c"
    break;

  case 84: /* PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_  */
#line 514 "yacc.y"
                                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2488 "yacc.tab.c"
    break;

  case 85: /* PARAMETER_LISTS_: PARAMETER_LISTS_ error PARAMETER_LIST_  */
#line 518 "yacc.y"
                                                                        { //ERROR 缺少分号 checked
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2498 "yacc.tab.c"
    break;

  case 86: /* PARAMETER_LISTS_: PARAMETER_LIST_  */
#line 522 "yacc.y"
                                                 { //正常
					yyval=new ParseNode;
					yyval->token=Token::PARAMETER_LISTS_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2508 "yacc.tab.c"
    break;

  case 87: /* PARAMETER_LIST_: VAR_PARAMETER_  */
#line 528 "yacc.y"
                                       { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
				yyval=new ParseNode;
				yyval->token=Token::PARAMETER_LIST_;
				yyval->children.push_back(yyvsp[0]);
			}
#line 2518 "yacc.tab.c"
    break;

  case 88: /* PARAMETER_LIST_: VALUE_PARAMETER_  */
#line 532 "yacc.y"
                                          { //正常
				yyval=new ParseNode;
				yyval->token=Token::PARAMETER_LIST_;
				yyval->children.push_back(yyvsp[0]);
			}
#line 2528 "yacc.tab.c"
    break;

  case 89: /* VAR_PARAMETER_: VAR VALUE_PARAMETER_  */
#line 538 "yacc.y"
                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::VAR_PARAMETER_;
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2538 "yacc.tab.c"
    break;

  case 90: /* VAR_PARAMETER_: VAR error  */
#line 542 "yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
					yyval=new ParseNode;
					yyval->token=Token::VAR_PARAMETER_;
					yyerror("incomplete refereced PARAMETER_LIST_ list", &(yyloc));
				}
#line 2548 "yacc.tab.c"
    break;

  case 91: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON STANDRAD_TYPE_  */
#line 548 "yacc.y"
                                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2558 "yacc.tab.c"
    break;

  case 92: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error STANDRAD_TYPE_  */
#line 552 "yacc.y"
                                                                                { //ERROR 缺少分号 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
					}
#line 2568 "yacc.tab.c"
    break;

  case 93: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ COLON error  */
#line 556 "yacc.y"
                                                                       { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2578 "yacc.tab.c"
    break;

  case 94: /* VALUE_PARAMETER_: IDENTIFIER_LIST_ error  */
#line 560 "yacc.y"
                                                                 { //ERROR 缺少基本类型关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2588 "yacc.tab.c"
    break;

  case 95: /* COMPOUND_STATEMENT_: BEGIN STATEMENT_LIST_ END  */
#line 567 "yacc.y"
                                              { //正常
						yyval=new ParseNode;
						yyval->token=Token::COMPOUND_STATEMENT_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2598 "yacc.tab.c"
    break;

  case 96: /* COMPOUND_STATEMENT_: BEGIN STATEMENT_LIST_ error  */
#line 571 "yacc.y"
                                                                     { //ERROR 缺少END关键字 checked
						yyval=new ParseNode;
						yyval->token=Token::COMPOUND_STATEMENT_;
						yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2608 "yacc.tab.c"
    break;

  case 97: /* STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_  */
#line 577 "yacc.y"
                                                     { //正常
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 2618 "yacc.tab.c"
    break;

  case 98: /* STATEMENT_LIST_: STATEMENT_LIST_ error STATEMENT_  */
#line 581 "yacc.y"
                                                                  { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2628 "yacc.tab.c"
    break;

  case 99: /* STATEMENT_LIST_: STATEMENT_  */
#line 585 "yacc.y"
                                            { //正常
					yyval=new ParseNode;
					yyval->token=Token::STATEMENT_LIST_;
					yyval->children.push_back(yyvsp[0]);
				}
#line 2638 "yacc.tab.c"
    break;

  case 100: /* STATEMENT_: VARIABLE_ ASSIGNOP EXPRESSION_  */
#line 591 "yacc.y"
                                           {
               yyval=new ParseNode;
			   yyval->token=Token::STATEMENT_;
			   yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			   yyval->children.push_back(yyvsp[0]);
            }
#line 2649 "yacc.tab.c"
    break;

  case 101: /* STATEMENT_: CALL_PROCEDURE_STATEMENT_  */
#line 596 "yacc.y"
                                       {
               yyval=new ParseNode;
			   yyval->token=Token::STATEMENT_;
			   yyval->children.push_back(yyvsp[0]); 
            }
#line 2659 "yacc.tab.c"
    break;

  case 102: /* STATEMENT_: COMPOUND_STATEMENT_  */
#line 600 "yacc.y"
                                 {
                yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2669 "yacc.tab.c"
    break;

  case 103: /* STATEMENT_: IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_  */
#line 604 "yacc.y"
                                                       {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
            }
#line 2681 "yacc.tab.c"
    break;

  case 104: /* STATEMENT_: CASE EXPRESSION_ OF CASE_BODY_ END  */
#line 610 "yacc.y"
                                                {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
            }
#line 2693 "yacc.tab.c"
    break;

  case 105: /* STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_  */
#line 616 "yacc.y"
                                             {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2704 "yacc.tab.c"
    break;

  case 106: /* STATEMENT_: REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_  */
#line 621 "yacc.y"
                                                      {
                 yyval=new ParseNode;
				 yyval->token=Token::STATEMENT_;
				 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2715 "yacc.tab.c"
    break;

  case 107: /* STATEMENT_: IF EXPRESSION_ error STATEMENT_ ELSE_PART_  */
#line 626 "yacc.y"
                                                        { //ERROR 缺少then关键字 checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
			}
#line 2725 "yacc.tab.c"
    break;

  case 108: /* STATEMENT_: WHILE EXPRESSION_ error STATEMENT_  */
#line 630 "yacc.y"
                                                            { //ERROR 缺少关键字do checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2735 "yacc.tab.c"
    break;

  case 109: /* STATEMENT_: REPEAT STATEMENT_LIST_ error EXPRESSION_  */
#line 634 "yacc.y"
                                                                  { //ERROR 缺少关键字until checked
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
			}
#line 2745 "yacc.tab.c"
    break;

  case 110: /* STATEMENT_: FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_  */
#line 638 "yacc.y"
                                                                                       {
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
				yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
				yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
				yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2758 "yacc.tab.c"
    break;

  case 111: /* STATEMENT_: %empty  */
#line 645 "yacc.y"
                          {
				yyval=new ParseNode;
				yyval->token=Token::STATEMENT_;
			}
#line 2767 "yacc.tab.c"
    break;

  case 112: /* VARIABLE_: ID ID_VARPARTS_  */
#line 650 "yacc.y"
                           {
              yyval=new ParseNode;
			  yyval->token=Token::VARIABLE_;
			  yyval->children.push_back(yyvsp[-1]);8yyval->children.push_back(yyvsp[0]);
           }
#line 2777 "yacc.tab.c"
    break;

  case 113: /* ID_VARPARTS_: ID_VARPARTS_ ID_VARPART_  */
#line 655 "yacc.y"
                                       {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPARTS_;
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2787 "yacc.tab.c"
    break;

  case 114: /* ID_VARPARTS_: %empty  */
#line 659 "yacc.y"
                 {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPARTS_;
                }
#line 2796 "yacc.tab.c"
    break;

  case 115: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES  */
#line 663 "yacc.y"
                                                                               {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[-1]);
               }
#line 2807 "yacc.tab.c"
    break;

  case 116: /* ID_VARPART_: DOT ID  */
#line 668 "yacc.y"
                       {
                 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
               }
#line 2817 "yacc.tab.c"
    break;

  case 117: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES error  */
#line 672 "yacc.y"
                                              { //ERROR 不完整的数组下标列表 checked
				 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyerror("incomplete EXPRESSION_ list of array subindex", &(yyloc));
			   }
#line 2827 "yacc.tab.c"
    break;

  case 118: /* ID_VARPART_: LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error  */
#line 676 "yacc.y"
                                                                           { //ERROR 缺失右中括号 checked
				 yyval=new ParseNode;
				 yyval->token=Token::ID_VARPART_;
				 yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   }
#line 2837 "yacc.tab.c"
    break;

  case 119: /* ELSE_PART_: ELSE STATEMENT_  */
#line 681 "yacc.y"
                            {
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
            }
#line 2847 "yacc.tab.c"
    break;

  case 120: /* ELSE_PART_: %empty  */
#line 685 "yacc.y"
              { 
                yyval=new ParseNode;
				yyval->token=Token::ELSE_PART_;
            }
#line 2856 "yacc.tab.c"
    break;

  case 121: /* CASE_BODY_: BRANCH_LIST_  */
#line 689 "yacc.y"
                         {
                yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2866 "yacc.tab.c"
    break;

  case 122: /* CASE_BODY_: %empty  */
#line 693 "yacc.y"
              {
                yyval=new ParseNode;
				yyval->token=Token::CASE_BODY_;
            }
#line 2875 "yacc.tab.c"
    break;

  case 123: /* BRANCH_LIST_: BRANCH_LIST_ SEMICOLON BRANCH_  */
#line 697 "yacc.y"
                                             {
                 yyval=new ParseNode;
				 yyval->token=Token::BRANCH_LIST_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
                }
#line 2886 "yacc.tab.c"
    break;

  case 124: /* BRANCH_LIST_: BRANCH_  */
#line 702 "yacc.y"
                         {
                 yyval=new ParseNode;
				 yyval->token=Token::BRANCH_LIST_;
				 yyval->children.push_back(yyvsp[0]);
                }
#line 2896 "yacc.tab.c"
    break;

  case 125: /* BRANCH_: CONST_LIST_ COLON STATEMENT_  */
#line 707 "yacc.y"
                                      {
              yyval=new ParseNode;
			  yyval->token=Token::BRANCH_;
			  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			  yyval->children.push_back(yyvsp[0]);
}
#line 2907 "yacc.tab.c"
    break;

  case 126: /* CONST_LIST_: CONST_LIST_ COMMA CONST_VARIABLE_  */
#line 713 "yacc.y"
                                               {
                yyval=new ParseNode;
				yyval->token=Token::CONST_LIST_;
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				yyval->children.push_back(yyvsp[0]);
            }
#line 2918 "yacc.tab.c"
    break;

  case 127: /* CONST_LIST_: CONST_VARIABLE_  */
#line 718 "yacc.y"
                             {
                yyval=new ParseNode;
				yyval->token=Token::CONST_LIST_;
				yyval->children.push_back(yyvsp[0]);
            }
#line 2928 "yacc.tab.c"
    break;

  case 128: /* UPDOWN_: TO  */
#line 723 "yacc.y"
           {
            yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2938 "yacc.tab.c"
    break;

  case 129: /* UPDOWN_: DOWNTO  */
#line 727 "yacc.y"
                {
            yyval=new ParseNode;
			yyval->token=Token::UPDOWN_;
			yyval->children.push_back(yyvsp[0]);
        }
#line 2948 "yacc.tab.c"
    break;

  case 130: /* CALL_PROCEDURE_STATEMENT_: ID  */
#line 732 "yacc.y"
                              {
                              yyval=new ParseNode;
							  yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
							  yyval->children.push_back(yyvsp[0]); 
                            }
#line 2958 "yacc.tab.c"
    break;

  case 131: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 736 "yacc.y"
                                                                                    {
                                yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
								yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
                            }
#line 2969 "yacc.tab.c"
    break;

  case 132: /* CALL_PROCEDURE_STATEMENT_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 741 "yacc.y"
                                                                        { //ERROR 缺少右括号 checked
				                yyval=new ParseNode;
								yyval->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			                }
#line 2979 "yacc.tab.c"
    break;

  case 133: /* EXPRESSION_LIST_: EXPRESSION_LIST_ COMMA EXPRESSION_  */
#line 746 "yacc.y"
                                                     {
                      yyval=new ParseNode;
					  yyval->token=Token::EXPRESSION_LIST_;
					  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
					  yyval->children.push_back(yyvsp[0]);
                    }
#line 2990 "yacc.tab.c"
    break;

  case 134: /* EXPRESSION_LIST_: EXPRESSION_  */
#line 751 "yacc.y"
                                 {
                        yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3000 "yacc.tab.c"
    break;

  case 135: /* EXPRESSION_LIST_: EXPRESSION_LIST_ error EXPRESSION_  */
#line 755 "yacc.y"
                                                        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new ParseNode;
						yyval->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3010 "yacc.tab.c"
    break;

  case 136: /* EXPRESSION_: SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_  */
#line 760 "yacc.y"
                                                         {
                 yyval=new ParseNode;
				 yyval->token=Token::EXPRESSION_;
				 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				 yyval->children.push_back(yyvsp[0]);
               }
#line 3021 "yacc.tab.c"
    break;

  case 137: /* EXPRESSION_: SIMPLE_EXPRESSION_  */
#line 765 "yacc.y"
                                   {
                   yyval=new ParseNode;
				   yyval->token=Token::EXPRESSION_;
				   yyval->children.push_back(yyvsp[0]);
               }
#line 3031 "yacc.tab.c"
    break;

  case 138: /* SIMPLE_EXPRESSION_: TERM_  */
#line 770 "yacc.y"
                          {
                       yyval=new ParseNode;
					   yyval->token=Token::SIMPLE_EXPRESSION_;
					   yyval->children.push_back(yyvsp[0]);
                    }
#line 3041 "yacc.tab.c"
    break;

  case 139: /* SIMPLE_EXPRESSION_: ADDOP TERM_  */
#line 774 "yacc.y"
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
#line 3057 "yacc.tab.c"
    break;

  case 140: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP TERM_  */
#line 784 "yacc.y"
                                                    {
                        yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
						yyval->children.push_back(yyvsp[0]);
                    }
#line 3068 "yacc.tab.c"
    break;

  case 141: /* SIMPLE_EXPRESSION_: SIMPLE_EXPRESSION_ ADDOP error TERM_  */
#line 789 "yacc.y"
                                                                      {//error，缺少操作数
						yyval=new ParseNode;
						yyval->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 3078 "yacc.tab.c"
    break;

  case 142: /* TERM_: TERM_ MULOP FACTOR_  */
#line 794 "yacc.y"
                           {
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3089 "yacc.tab.c"
    break;

  case 143: /* TERM_: FACTOR_  */
#line 799 "yacc.y"
                 {
          yyval=new ParseNode;
		  yyval->token=Token::TERM_;
		  yyval->children.push_back(yyvsp[0]);
        }
#line 3099 "yacc.tab.c"
    break;

  case 144: /* TERM_: TERM_ MULOP error FACTOR_  */
#line 803 "yacc.y"
                                               { //error,缺少操作数
			yyval=new ParseNode;
			yyval->token=Token::TERM_;
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 3109 "yacc.tab.c"
    break;

  case 145: /* FACTOR_: UNSIGN_CONST_VARIABLE_  */
#line 808 "yacc.y"
                                {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3119 "yacc.tab.c"
    break;

  case 146: /* FACTOR_: VARIABLE_  */
#line 812 "yacc.y"
                     {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3129 "yacc.tab.c"
    break;

  case 147: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES  */
#line 816 "yacc.y"
                                                                  {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3140 "yacc.tab.c"
    break;

  case 148: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES  */
#line 821 "yacc.y"
                                                          {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
			 yyval->children.push_back(yyvsp[0]);
          }
#line 3151 "yacc.tab.c"
    break;

  case 149: /* FACTOR_: NOT FACTOR_  */
#line 826 "yacc.y"
                       {
             yyval=new ParseNode;
			 yyval->token=Token::FACTOR_;
			 yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
          }
#line 3161 "yacc.tab.c"
    break;

  case 150: /* FACTOR_: ID LEFT_PARENTHESES EXPRESSION_LIST_ error  */
#line 830 "yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3171 "yacc.tab.c"
    break;

  case 151: /* FACTOR_: ID LEFT_PARENTHESES error  */
#line 834 "yacc.y"
                                             { //ERROR 函数调用的表达式列表缺失
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3181 "yacc.tab.c"
    break;

  case 152: /* FACTOR_: LEFT_PARENTHESES EXPRESSION_ error  */
#line 838 "yacc.y"
                                                      { //ERROR 缺少右括号
			yyval=new ParseNode;
			yyval->token=Token::FACTOR_;
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		  }
#line 3191 "yacc.tab.c"
    break;

  case 153: /* UNSIGN_CONST_VARIABLE_: INT_NUM  */
#line 843 "yacc.y"
                                {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3201 "yacc.tab.c"
    break;

  case 154: /* UNSIGN_CONST_VARIABLE_: FLOAT_NUM  */
#line 847 "yacc.y"
                                    {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3211 "yacc.tab.c"
    break;

  case 155: /* UNSIGN_CONST_VARIABLE_: LETTER  */
#line 851 "yacc.y"
                                 {
                             yyval=new ParseNode;
							 yyval->token=Token::UNSIGN_CONST_VARIABLE_;
							 yyval->children.push_back(yyvsp[0]);
                         }
#line 3221 "yacc.tab.c"
    break;


#line 3225 "yacc.tab.c"

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

#line 858 "yacc.y"

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
