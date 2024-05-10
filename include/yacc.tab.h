
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

