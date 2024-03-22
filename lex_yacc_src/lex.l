%{
#include "main.h"
#include "yacc.tab.h"




//处理位置信息
int yycolumn = 1;
extern YYLTYPE yylloc;
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno - 1; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn+yyleng-1; \
    yycolumn += yyleng;

string charRec; //保存字符常量
char lineBuffer[10005]; //保存当前行的所有内容

YYSTYPE yylval;

//函数声明
extern "C"
{
	int yywrap();
	int yylex();
}
%}

%option yylineno

%x SCOM
%X MCOM
%x CH



line \n.*
letter [a-z]
digit [0-9]
blank_chars [ \f\r\t\v]+
identifier {letter}({letter}|{digit})*
_integer {digit}+
floater {digit}+\.{digit}+
_type (integer|real|boolean|char)
relop (>=|>|<=|<>|<)
addop (\+|or)
mulop (\*|\/|div|mod|and)
delimiter (\(|\)|\[|\]|:|,|;|\.)



%%
                  
{blank_chars}     {}

{line}            { 
    strcpy(lineBuffer,yytext+1);
    yycolumn=1;
    yyless(1); //yyleng是当前匹配的单词的长度,yyless(n)表示退回yyleng-n个字符，只保留n个字符
    }

"program" {
    yylval=new ParseNode;
    yylval->val=yytext;
    yylval->token="PROGRAM";
    yylval->lineNumber = yylineno - 1;
    //cout << "keyword: " << yylval->val << endl;
    return PROGRAM;
}

"const" {
    yylval=new ParseNode;
    yylval->val=yytext;
    yylval->token="CONST";
    yylval->lineNumber = yylineno - 1;
    return CONST;
}

"var" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="VAR";
    yylval->lineNumber = yylineno - 1;
    return VAR;

}

"array" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="ARRAY";
    yylval->lineNumber = yylineno - 1;
    return ARRAY;
}

"of" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="OF";
    yylval->lineNumber = yylineno - 1;
    return OF;
}

"procedure" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="PROCEDURE";
    yylval->lineNumber = yylineno - 1;
    return PROCEDURE;
}

"function" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="FUNCTION";
    yylval->lineNumber = yylineno - 1;
    return FUNCTION;
}

"begin" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="BEGIN";
    yylval->lineNumber = yylineno - 1;
    return BEGIN;
}

"end" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="END";
    yylval->lineNumber = yylineno - 1;
    return END;
}

"if" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="IF";
    yylval->lineNumber = yylineno - 1;
    return IF;
}

"then" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="THEN";
    yylval->lineNumber = yylineno - 1;
    return THEN;
}

"for" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="FOR";
    yylval->lineNumber = yylineno - 1;
    return FOR;
}

"to" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="TO";
    yylval->lineNumber = yylineno - 1;
    return TO;
}

"do" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="DO";
    yylval->lineNumber = yylineno - 1;
    return DO;
}

"else" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="ELSE";
    yylval->lineNumber = yylineno - 1;
    return ELSE;
}

"repeat" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="REPEAT";
    yylval->lineNumber = yylineno - 1;
    return REPEAT;
}

"until" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="UNTIL";
    yylval->lineNumber = yylineno - 1;
    return UNTIL;
}

"while" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="WHILE";
    yylval->lineNumber = yylineno - 1;
    return WHILE;
}

{_type} {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token = "TYPE";
    yylval->lineNumber = yylineno - 1;
    return TYPE;
}

"not" {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token="NOT";
    yylval->lineNumber = yylineno - 1;
    return NOT;
}

{relop} {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token="RELOP";
    yylval->lineNumber = yylineno - 1;
    return RELOP;
}

{addop} {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token="ADDOP";
    yylval->lineNumber = yylineno - 1;
    return ADDOP;
}

{mulop} {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token="MULOP";
    yylval->lineNumber = yylineno - 1;
    return MULOP;
}

"-" {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token = yytext;
    yylval->lineNumber = yylineno - 1;
    return yytext[0];
}

"=" {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token = yytext;
    yylval->lineNumber = yylineno - 1;
    return yytext[0];
}

{identifier} {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token = "IDENTIFIER";
    yylval->lineNumber = yylineno - 1;
    return IDENTIFIER;
}

{floater} {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="UFNUM";
    yylval->lineNumber = yylineno - 1;
    return UFNUM;
}

{_integer} {
    yylval=new ParseNode("", "", yylineno);
	yylval->val=yytext;
	yylval->token="UINUM";
    yylval->lineNumber = yylineno - 1;
    return UINUM;
}

":=" {
    yylval=new ParseNode("", "", yylineno);
    yylval->val=yytext;
    yylval->token="ASSIGNOP";
    yylval->lineNumber = yylineno - 1;
    return ASSIGNOP;
}

"\.\." {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token="RANGEDOT";
    yylval->lineNumber = yylineno - 1;
    return RANGEDOT;
}

{delimiter} {
    yylval=new ParseNode;
    yylval->val = yytext;
    yylval->token = yytext;
    yylval->lineNumber = yylineno - 1;
    return yytext[0];
}

"'" {//进入字符常量识别
    BEGIN CH;
	charRec="";
}

"\/\/" {//进入单行注释
    BEGIN SCOM;
}

"\{" {//进入多行注释
	BEGIN MCOM;
}

<CH>("'"|"\n") {//字符常量限定在一行中
    int len = charRec.length();
    
    if(yytext[0]=='\'' && len==0){
        // 如果字符常量缺失，则返回空字符常量
        yylval = new ParseNode;
        yylval->val="\0";
        yylval->token="CHAR";
        yylval->lineNumber=yylineno - 1;
        return CHAR;
    }
    else if(yytext[0]=='\'' && len==1){
        // 如果字符常量长度为1，则返回字符常量
        yylval = new ParseNode;
        yylval->val=charRec[0];
        yylval->token="CHAR";
        yylval->lineNumber=yylineno - 1;
        return CHAR;
    }
    else if(yytext[0]=='\''){
        // 如果字符常量长度不为0或1，则返回字符常量
        yylval = new ParseNode;
        yylval->val=charRec[0];
        yylval->token="CHAR";
        yylval->lineNumber=yylineno - 1;
        return CHAR;
    }
    else{
        // 如果字符常量缺少右引号，则退回换行符，行号减一，并返回字符常量
        yyless(0);//将换行符退回
        yylineno--;//行号减一
        
        yylval = new ParseNode;
        if(len==0)
            yylval->val="\0";
        else
            yylval->str=charRec[0];
        yylval->token="CHAR";
        yylval->lineNumber=yylineno - 1;
        return CHAR;
    }
}

<CH>. {
	charRec+=yytext[0];
}

<SCOM><<EOF>> { //单行注释遇到文件尾
    return 0;
}

<SCOM>"\n" {
    BEGIN INITIAL;
    yyless(0);//将换行符退回
	yylineno--;//行号减一
}

<SCOM>. {}

<MCOM><<EOF>> { //多行注释遇到文件尾 错误8
    return 0;
}

<MCOM>{line} {
    yycolumn=1;
    strcpy(lineBuffer, yytext+1);
    yyless(1);
}

<MCOM>"\}" {
	BEGIN INITIAL;
}

<MCOM>. {}
%%



//这个函数是必须的，不用动
int yywrap()
{
	return 1;
}