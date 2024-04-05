%{

#define LEXDEBUG



#include "main.h"
#include "yacc.tab.h"
#include "TokenTypeEnum.h"
#include <string>


//处理位置信息
int yycolumn = 1;
extern YYLTYPE yylloc;
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno ; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn+yyleng-1; \
    yycolumn += yyleng;


extern string itos(int num);


string charRec; //保存字符常量
char lineBuffer[500]; //保存当前行的所有内容
vector<string> lexicalErrorInformation;
void addLexicalErrorInformation(char *word, string info, int l, int r);
bool CheckAndAddLengthTooLargeErrorInformation(char *text, string type, int l, int r);

extern YYSTYPE yylval;


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

digit [0-9]
blank_chars [ \f\r\t\v]+

id {letter}({letter}|{digit})*
int_num {digit}+
float_num {digit}+\.{digit}+
letter [a-z]

relop (>=|>|<=|<>|<|=)
addop (\+|or|\-)
mulop (\*|\/|div|mod|and)






%%
                  
{blank_chars}     {}

{line}            { 
    if(CheckAndAddLengthTooLargeErrorInformation(yytext, "line", 1, yyleng))
        return 0;
    strcpy(lineBuffer,yytext+1);
    yycolumn=1;
    yyless(1); //yyleng是当前匹配的单词的长度,yyless(n)表示退回yyleng-n个字符，只保留n个字符
    }

"program" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::PROGRAM;
    yylval->lineNumber = yylineno;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return PROGRAM;
}

"const" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::CONST;
    yylval->lineNumber = yylineno;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return CONST;
}


"record" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::RECORD;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return RECORD;

}

"end" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::END;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return END;

}

"array" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::ARRAY;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return ARRAY;

}

"of" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::OF;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return OF;

}

"integer" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::INTEGER;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return INTEGER;

}

"real" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::REAL;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return REAL;

}

"bollean" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::BOLLEAN;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return BOLLEAN;

}

"char" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::CHAR;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return CHAR;

}

"var" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::VAR;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return VAR;

}

"function" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::FUNCTION;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return FUNCTION;

}

"procedure" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::PROCEDURE;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return PROCEDURE;

}
"begin" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::_BEGIN;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return _BEGIN;
}

"if" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::IF;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return IF;

}

"then" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::THEN;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return THEN;

}

"else" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::ELSE;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return ELSE;

}

"case" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::CASE;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return CASE;

}

"while" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::WHILE;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return WHILE;

}

"do" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::DO;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return DO;

}

"repeat" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::REPEAT;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return REPEAT;

}

"until" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::UNTIL;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return UNTIL;

}

"for" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::FOR;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return FOR;

}

"to" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::TO;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return TO;

}

"downto" {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::DOWNTO;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return DOWNTO;

}


"not" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::NOT;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return NOT;
}

"\.\." {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::RANGE_DOT;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return RANGE_DOT;
}

"\." {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::DOT;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return DOT;
}

"," {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::COMMA;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return COMMA;
}

"\(" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::LEFT_PARENTHESES;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return LEFT_PARENTHESES;
}

"\)" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::RIGHT_PARENTHESES;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return RIGHT_PARENTHESES;
}

"\[" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::LEFT_MEDIUM_PARENTHESES;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return LEFT_MEDIUM_PARENTHESES;
}

"\]" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::RIGHT_MEDIUM_PARENTHESES;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return RIGHT_MEDIUM_PARENTHESES;
}

";" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::SEMICOLON;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return SEMICOLON;
}

":=" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::ASSIGNOP;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return ASSIGNOP;
}

":" {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::COLON;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("keyword: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "keyword: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return COLON;
}

{relop} {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::RELOP;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("RELOP: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "RELOP: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return RELOP;
}

{addop} {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::ADDOP;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("ADDOP: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "ADDOP: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return ADDOP;
}

{mulop} {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::MULOP;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("MULOP: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "MULOP: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return MULOP;
}





{id} {
    if(CheckAndAddLengthTooLargeErrorInformation(yytext, "id", yycolumn-yyleng, yycolumn-1)){
        yytext[100]=0; //截断处理
        //yycolumn=yycolumn-yyleng;
        //yylloc.first_column=yycolumn;
        //yylloc.last_column=yycolumn+100-1;
        //yycolumn+=100;
        yyleng=100;
    }
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token = Token::ID;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("ID: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "ID: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return ID;
}

{int_num} {
    yylval=new ParseNode();
	yylval->val=yytext;
	yylval->token=Token::INT_NUM;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("INT_NUM: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "INT_NUM: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return NUM;
}

{float_num} {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::FLOAT_NUM;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("FLOAT_NUM: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "FLOAT_NUM: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return NUM;
}

{letter} {
    yylval=new ParseNode();
    yylval->val=yytext;
    yylval->token=Token::LETTER;
    yylval->lineNumber = yylineno ;
    #ifdef LEXDEBUG
    //printf("LETTER: %s  Token: %s\n", yylval->val,yylval->token);
    cout << "LETTER: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
    #endif
    return LETTER;
}



"'" {//进入字符常量识别
cout<<"进入字符常量识别"<<endl;
    BEGIN CH;
	charRec="";
}

"\/\/" {//进入单行注释
    BEGIN SCOM;
}

"\{" {//进入多行注释
	BEGIN MCOM;
}

. {//非法字符 错误3
    addLexicalErrorInformation(yytext, "Invalid character!", yycolumn-yyleng, yycolumn-1);
	//cout << "error: invalid char" << endl;
}


<CH><<EOF>> { //读取字符常量时遇到文件尾 错误4
    addLexicalErrorInformation(yytext, "Unexpected end of file when reading a char constant", yycolumn-yyleng, yycolumn-1);
    return 0;
}

<CH>("'"|"\n") {//字符常量限定在一行中
    int len = charRec.length();
    
    if(yytext[0]=='\'' && len==0){
        addLexicalErrorInformation(yytext, "Char constant missing!", yycolumn-yyleng-1, yycolumn-1); //错误5
        // 如果字符常量缺失，则返回空字符常量
        yylval = new ParseNode();
        yylval->val="\0";
        yylval->token=Token::CHAR;
        yylval->lineNumber=yylineno ;
        #ifdef LEXDEBUG
        //printf("CHAR: %s  Token: %s\n", yylval->val,yylval->token);
        cout << "CHAR1: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
        #endif
        return CHAR;
    }
    else if(yytext[0]=='\'' && len==1){
        // 如果字符常量长度为1，则返回字符常量
        yylval = new ParseNode();
        yylval->val=charRec[0];
        yylval->token=Token::CHAR;
        yylval->lineNumber=yylineno ;
        #ifdef LEXDEBUG
        //printf("CHAR: %s  Token: %s\n", yylval->val,yylval->token);
        cout << "CHAR2: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
        #endif
        BEGIN INITIAL;
        return CHAR;
    }
    else if(yytext[0]=='\''){
        addLexicalErrorInformation(yytext, "Too many characters in a char constant!", yycolumn-yyleng-len, yycolumn-yyleng-1); //错误6
        // 如果字符常量长度不为0或1，则返回字符常量
        yylval = new ParseNode();
        yylval->val=charRec[0];
        yylval->token=Token::CHAR;
        yylval->lineNumber=yylineno ;
        #ifdef LEXDEBUG
        //printf("CHAR: %s  Token: %s\n", yylval->val,yylval->token);
        cout << "CHAR3: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
        #endif
        BEGIN INITIAL;
        return CHAR;
    }
    else{
        addLexicalErrorInformation(yytext, "Right quote missing!", yycolumn-yyleng-len+1, yycolumn-yyleng-len+1); //错误7
        // 如果字符常量缺少右引号，则退回换行符，行号减一，并返回字符常量
        yyless(0);//将换行符退回
        yylineno--;//行号减一
        
        yylval = new ParseNode();
        if(len==0)
            yylval->val="\0";
        else
            yylval->val=charRec[0];
        yylval->token=Token::CHAR;
        yylval->lineNumber=yylineno ;
        #ifdef LEXDEBUG
       // printf("CHAR: %s  Token: %s\n", yylval->val,yylval->token);
       cout << "CHAR4: " << yylval->val << " Token: "<< yylval->token<<" lineNumber: "<<yylval->lineNumber<<endl;
        #endif
        BEGIN INITIAL;
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
    addLexicalErrorInformation(yytext, "Unexpected end of file when reading a multiple line comment, lacking of a right brace", yycolumn-yyleng, yycolumn-1);
    return 0;
}

<MCOM>{line} {
    if(CheckAndAddLengthTooLargeErrorInformation(yytext, "line", 1, yyleng)) //行长度超过限制
        return 0;
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

void addLexicalErrorInformation(char *word, string info, int l, int r){
    string errorInformation = "[" + info + "] " + itos(yylineno-1) + "." + itos(l) + "-" + itos(yylineno-1) + "." + itos(r) + "\n";
    errorInformation += string(lineBuffer) + "\n";
    for(int i=1;i<=l-1;i++)
        errorInformation+=" ";
    for(int i=l;i<=r;i++)
        errorInformation+="^";
    //cout << errorInformation << endl;
    lexicalErrorInformation.push_back(errorInformation);
}

bool CheckAndAddLengthTooLargeErrorInformation(char *text, string type, int l, int r){
    string errorInformation;
    int len=strlen(text);
    if(type=="line"){
        if(len>500){ //错误1
            errorInformation = "[Line length too large, exceed 500] " + itos(yylineno-1) + "." + itos(l) + "-" + itos(yylineno-1) + "." +itos(r); 
            errorInformation += "\nLex analyse abort!";
            //cout << errorInformation << endl;
            lexicalErrorInformation.push_back(errorInformation);
            return true;
        }
        return false;
    }
    else if(type=="id"){
        if(len>100){ //错误2
            string id = string(text);
            errorInformation = "[Identifier length too large, exceed 100] " + itos(yylineno-1) + "." + itos(l) + "-" + itos(yylineno-1) + "." + itos(r);
            //cout << errorInformation << endl;
            lexicalErrorInformation.push_back(errorInformation);
            return true;
        }
        return false;
    }
    else{
        cout << "[CheckAndAddLengthTooLargeErrorInformation] type not found" << endl;
        return false;
    }
}