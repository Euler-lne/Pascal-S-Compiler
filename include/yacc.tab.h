/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_CQ_PASCAL_S_COMPILER_BUILD_INCLUDE_YACC_TAB_H_INCLUDED
# define YY_YY_HOME_CQ_PASCAL_S_COMPILER_BUILD_INCLUDE_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    _BEGIN = 272,                  /* _BEGIN  */
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
    _WRITE = 303,                  /* _WRITE  */
    _READ = 304,                   /* _READ  */
    UMINUS = 305,                  /* UMINUS  */
    LOWER_THAN_ELSE = 306,         /* LOWER_THAN_ELSE  */
    ONE = 307,                     /* ONE  */
    TWO = 308,                     /* TWO  */
    THREE = 309                    /* THREE  */
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


#endif /* !YY_YY_HOME_CQ_PASCAL_S_COMPILER_BUILD_INCLUDE_YACC_TAB_H_INCLUDED  */
