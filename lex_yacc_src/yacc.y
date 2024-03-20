/*
    语法分析过程，一边进行语法分析一边构建语法分析树
    注意编写完成之后请输入bison -d yacc.y指令编译出yacc.tab.h文件
*/
%{
#include "main.h"
extern "C"
{
	void yyerror(const char *s);
	int yyparse();
	extern int yylex();
}
ParseNode* ParseTreeHead=NULL;
%}

// Token定义……
%token PROGRAM
%start programstruct
%%
programstruct: PROGRAM
// 文法

%%
// 函数定义
