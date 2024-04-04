/*
    语法分析过程，一边进行语法分析一边构建语法分析树
    注意编写完成之后请输入bison -d yacc.y指令编译出yacc.tab.h文件
*/

%{



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

%}






// Token定义……

%token PROGRAM
%token CONST
%token TYPE
%token RECORD 
%token END 
%token ARRAY 
%token OF 
%token INTEGER 
%token REAL 
%token BOLLEAN 
%token CHAR 
%token VAR 
%token FUNCTION 
%token PROCEDURE 
%token _BEGIN 
%token IF 
%token THEN 
%token ELSE 
%token CASE 
%token WHILE 
%token DO 
%token REPEAT 
%token UNTIL 
%token FOR 
%token TO 
%token DOWNTO 

%token NOT 
        //AND 
        //OR 
        //DIV 
        //MOD 

%token DOT                       // .
%token RANGE_DOT                 //..
%token COMMA                     //,
        //EQUAL                     // =    
%token LEFT_PARENTHESES          //(
%token RIGHT_PARENTHESES         // )
%token LEFT_MEDIUM_PARENTHESES   // [
%token RIGHT_MEDIUM_PARENTHESES  // ]
%token SEMICOLON                 // ;
%token ASSIGNOP                   // :—
%token COLON                       //:
        //ADD                       // +
        //MINUS                     //-

%token RELOP     // “=”、“<>”、“<”、“<=”、“>”、“>=”
%token ADDOP     // “十”、“一”和“or”
%token MULOP     // “*”、“/"'、"div”、"mod”和“and”



%token ID       
%token NUM		
%token INT_NUM   
%token FLOAT_NUM
%token LETTER 

       


%start programstruct

%left '+' '-' ADD
%left '*' '/' MUL
%right UMINUS
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%nonassoc ONE
%nonassoc TWO
%nonassoc THREE

%locations




%%
programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT{ //正常
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
			   		$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", @3.last_line, @3.last_column+1);
					YYACCEPT;
			   	}|PROGRAM_HEAD_ PROGTAM_BODY_ error{ //ERROR 缺少点号 checked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("missing a dot here", @2.last_line, @2.last_column+1);
			   	}|error PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",@1.first_line, @1.first_column, @1.last_line, @1.last_column);
			   	}|PROGRAM_HEAD_ error DOT{ //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("fatal error in program body");
			   	}|error PROGRAM_HEAD_ PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
				}|error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
				}|error PROGRAM_HEAD_ PROGTAM_BODY_ error{ //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("missing a dot here", @4.last_line, @4.last_column+1);
				}|error PROGRAM_HEAD_ error DOT{ //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("fatal error in program body", @2.last_line, @2.last_column+1, @4.first_line, @4.first_column-1);
				};

PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //正常
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3); $$->children.push_back($4); 
					$$->children.push_back($5);	$$->children.push_back($6);
				}|PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error{ //ERROR 缺少; checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", @5.last_line, @5.last_column+1);
				}|PROGRAM error LEFT_PARENTHESES  IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //ERROR 缺少主程序名 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", @1.last_line, @1.last_column+1);
				}|PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //ERROR 缺少左括号 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", @4.first_line, @4.first_column-1);
				}|PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON{ //ERROR  IDENTIFIER_LIST_识别失败 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @4.first_line, @4.first_column, @4.last_line, @4.last_column);
				}|PROGRAM ID LEFT_PARENTHESES  IDENTIFIER_LIST_ error SEMICOLON{ //ERROR 缺少右括号 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", @4.last_line, @4.last_column+1);
				}|PROGRAM error{ //ERROR program head checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
				}|PROGRAM ID error{ //ERROR  IDENTIFIER_LIST_缺失 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @1.first_line, @1.first_column, @2.last_line, @2.last_column);
				}|PROGRAM ID LEFT_PARENTHESES error{ //ERROR  IDENTIFIER_LIST_缺失 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @1.first_line, @1.first_column, @2.last_line, @2.last_column);
				};

PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_{ //正常
					$$=new ParseNode;
					$$->token =Token::PROGTAM_BODY_;
					$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3); $$->children.push_back($4);
				};

 IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID{ //正常  IDENTIFIER_LIST_的产生式不打算加入error
			$$=new ParseNode;
			$$->token =Token::IDENTIFIER_LIST_;
			$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
		}|ID{ //正常
			$$=new ParseNode;
		   	$$->token =Token::IDENTIFIER_LIST_;
			$$->children.push_back($1);
		};

CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON { //正常
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
					}|{ //正常
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
					}|CONST error SEMICOLON { //ERROR 常量定义出现错误 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
					}|CONST CONST_DECLARATION_ error { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
					};

CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_{ //正常
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						$$->children.push_back($1); $$->children.push_back($2);
						$$->children.push_back($3); $$->children.push_back($4); $$->children.push_back($5);
					}|CONST_DECLARATION_ SEMICOLON ID RELOP error{ //常数初始化右值缺失 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", @4.first_line, @4.first_column, @4.last_line, @4.last_column);
					}|ID RELOP CONST_VARIABLE_{ //正常
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
					}|ID RELOP error{ //常数初始化右值缺失 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", @3.first_line, @3.first_column, @3.last_line, @3.last_column);
					}|CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_{ //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", @1.first_line, @1.first_column, @1.last_line, @1.last_column+1);
					}|CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_{ //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",@3.first_line, @3.first_column, @3.last_line, @3.last_column);
					}|ID error CONST_VARIABLE_{ //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
					};

CONST_VARIABLE_: 	ADDOP ID { //正常
					if($$->val != "+" && $$->val != "-"){
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					}else{
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						$$->children.push_back($1); $$->children.push_back($2);
					}
					
				}|ID { //正常
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
				}|ADDOP NUM { //正常
					if($$->val != "+" && $$->val != "-"){
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					}else{
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						$$->children.push_back($1); $$->children.push_back($2);
					}
				}|NUM { //正常
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
				}|LETTER{ //正常
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
				};


TYPE_: 	STANDRAD_TYPE_{ //正常
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			$$->children.push_back($1);
		}|RECORD VAR_DECLARATION_ END{ //正常
			$$=new ParseNode;
			$$->token = Token::TYPE_;
            $$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_{ //正常
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);$$->children.push_back($4);
			$$->children.push_back($5);$$->children.push_back($6);
		}|ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_{ //ERROR 缺少左中括号 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing a left square bracket here", @1.last_line, @1.last_column+1);
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_{ //ERROR 缺少OF关键字 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", @4.last_line, @4.last_column+1, @6.first_line, @6.first_column-1);
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error{ //ERROR 数组元素类型识别失败 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", @5.last_line, @5.last_column+1);
		}|ARRAY error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
		}|ARRAY LEFT_MEDIUM_PARENTHESES error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
		};

STANDRAD_TYPE_:     INTEGER{ //正常
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
					}|REAL{ //正常
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
					}|CHAR{ //正常
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
					}|BOLLEAN{ //正常
						$$=new ParseNode;
						$$->token =Token::STANDRAD_TYPE_;
                        $$->children.push_back($1);
					};

PERIODS_: PERIODS_ COMMA PERIOD_{ //正常
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);
		}|PERIODS_ error PERIOD_{ //ERROR 缺少逗号 checked
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			yyerror("missing a comma here", @1.last_line, @1.last_column+1);
		}|PERIOD_{ //正常
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			$$->children.push_back($1);
		};
		
PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_{ //正常
			$$=new ParseNode;
			$$->token=Token::PERIOD_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);
		}|CONST_VARIABLE_ error CONST_VARIABLE_{ //ERROR 缺少.. checked
			$$=new ParseNode;
			$$->token=Token::PERIOD_;
			yyerror("missing a comma here", @1.last_line, @1.last_column+1);
		};



VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON{ //正常
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
					}|{ //正常
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
					}|VAR error SEMICOLON{ //ERROR 变量定义出现错误 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					}|VAR VAR_DECLARATION_ error{ //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
					};

VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_ { //正常
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3); $$->children.push_back($4); $$->children.push_back($5);
					}| IDENTIFIER_LIST_ COLON TYPE_ { //正常
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						$$->children.push_back($1);$$->children.push_back($2); $$->children.push_back($3);
					}|VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_ { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
					}|VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_ { //ERROR 缺少冒号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", @3.last_line, @3.last_column+1);
					}|VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error { //ERROR TYPE_识别失败 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", @4.last_line, @4.last_column+1);
					}| IDENTIFIER_LIST_ COLON error { //ERROR TYPE_识别失败 checked
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", @3.last_line, @3.last_column+1);
					}| IDENTIFIER_LIST_ error TYPE_ { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", @1.last_line, @1.last_column+1);
					};

SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON{ //正常
								$$=new ParseNode;
								$$->token=Token::SUBPROGRAM_DECLARATIONS_;
								$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
							}|SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error{ //ERROR 缺少分号 checked
								$$=new ParseNode;
								$$->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
							}|{ //正常
								$$=new ParseNode;
								$$->token =Token::SUBPROGRAM_DECLARATIONS_;
							};

SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ SEMICOLON PROGTAM_BODY_{ //正常
				$$=new ParseNode;
				$$->token=Token::SUBPROGRAM_DECLARATION_;
				$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
			}|SUBPROGRAM_HEAD_ error PROGTAM_BODY_{ //ERROR 缺少分号 checked
				$$=new ParseNode;
				$$->token=Token::SUBPROGRAM_DECLARATION_;
				yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
			};

SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_{ //正常
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
					}|FUNCTION ID FORMAL_PARAMETER_ COLON TYPE_{ //正常
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);$$->children.push_back($4);$$->children.push_back($5);
					}|FUNCTION error FORMAL_PARAMETER_ COLON TYPE_{ //ERROR 函数名缺失 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", @1.last_line, @1.last_column+1);
					}|FUNCTION ID FORMAL_PARAMETER_ error TYPE_{ //ERROR 缺少冒号 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", @3.last_line, @3.last_column);
					}|FUNCTION ID FORMAL_PARAMETER_ COLON error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", @4.last_line, @4.last_column+1);
					}|FUNCTION ID FORMAL_PARAMETER_ error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", @3.last_line, @3.last_column+1);
					}|FUNCTION error{ //ERROR 不完整的函数头 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &@$);
					}|PROCEDURE error{ //ERROR 不完整的过程头 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &@$);
					};

FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES{ //正常
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
					}|{ //正常
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
					}|LEFT_PARENTHESES error{ //ERROR 不完整的形参列表
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &@$);
					}|LEFT_PARENTHESES PARAMETER_LISTS_ error{ //ERROR 右括号缺失
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", @2.last_line, @2.last_column+1);
					};

PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_{ //正常
					$$=new ParseNode;
					$$->token=Token::PARAMETER_LISTS_;
					$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
				}|PARAMETER_LISTS_ error PARAMETER_LIST_{ //ERROR 缺少分号 checked
					$$=new ParseNode;
					$$->token=Token::PARAMETER_LISTS_;
					yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
				}|PARAMETER_LIST_{ //正常
					$$=new ParseNode;
					$$->token=Token::PARAMETER_LISTS_;
					$$->children.push_back($1);
				};

PARAMETER_LIST_: 	VAR_PARAMETER_ { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
				$$=new ParseNode;
				$$->token=Token::PARAMETER_LIST_;
				$$->children.push_back($1);
			}|VALUE_PARAMETER_{ //正常
				$$=new ParseNode;
				$$->token=Token::PARAMETER_LIST_;
				$$->children.push_back($1);
			};

VAR_PARAMETER_: 	VAR VALUE_PARAMETER_{ //正常
					$$=new ParseNode;
					$$->token=Token::VAR_PARAMETER_;
					$$->children.push_back($1);$$->children.push_back($2);
				}|VAR error{ //ERROR 不完整的引用参数列表 checked
					$$=new ParseNode;
					$$->token=Token::VAR_PARAMETER_;
					yyerror("incomplete refereced PARAMETER_LIST_ list", &@$);
				};

VALUE_PARAMETER_: 	 IDENTIFIER_LIST_ COLON STANDRAD_TYPE_{ //正常
						$$=new ParseNode;
						$$->token=Token::VALUE_PARAMETER_;
						$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
					}| IDENTIFIER_LIST_ error STANDRAD_TYPE_{ //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token=Token::VALUE_PARAMETER_;
						yyerror("missing a colon here", @1.first_line, @1.last_column+1);
					}| IDENTIFIER_LIST_ COLON error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", @2.last_line, @2.last_column+1);
					}| IDENTIFIER_LIST_ error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::VALUE_PARAMETER_;
						yyerror("missing a base TYPE_ keyword here", @1.last_line, @1.last_column+1);
					};


COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ END{ //正常
						$$=new ParseNode;
						$$->token=Token::COMPOUND_STATEMENT_;
						$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
					}|_BEGIN STATEMENT_LIST_ error{ //ERROR 缺少END关键字 checked
						$$=new ParseNode;
						$$->token=Token::COMPOUND_STATEMENT_;
						yyerror("missing keyword \"end\"", @2.last_line, @2.last_column+1);
					};

STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_{ //正常
					$$=new ParseNode;
					$$->token=Token::STATEMENT_LIST_;
					$$->children.push_back($1);$$->children.push_back($2); $$->children.push_back($3);
				}|STATEMENT_LIST_ error STATEMENT_{ //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
					$$=new ParseNode;
					$$->token=Token::STATEMENT_LIST_;
					yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
				}|STATEMENT_{ //正常
					$$=new ParseNode;
					$$->token=Token::STATEMENT_LIST_;
					$$->children.push_back($1);
				};

STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_{
               $$=new ParseNode;
			   $$->token=Token::STATEMENT_;
			   $$->children.push_back($1);$$->children.push_back($2);
			   $$->children.push_back($3);
            }|CALL_PROCEDURE_STATEMENT_{
               $$=new ParseNode;
			   $$->token=Token::STATEMENT_;
			   $$->children.push_back($1); 
            }|COMPOUND_STATEMENT_{
                $$=new ParseNode;
				$$->token=Token::STATEMENT_;
				$$->children.push_back($1);
            }|IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_{
                 $$=new ParseNode;
				 $$->token=Token::STATEMENT_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);$$->children.push_back($4);
				 $$->children.push_back($5);
            }|CASE EXPRESSION_ OF CASE_BODY_ END{
                 $$=new ParseNode;
				 $$->token=Token::STATEMENT_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);$$->children.push_back($4);
				 $$->children.push_back($5);
            }|WHILE EXPRESSION_ DO STATEMENT_{
                 $$=new ParseNode;
				 $$->token=Token::STATEMENT_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);$$->children.push_back($4);
            }|REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_{
                 $$=new ParseNode;
				 $$->token=Token::STATEMENT_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);$$->children.push_back($4);
            }|IF EXPRESSION_ error STATEMENT_ ELSE_PART_{ //ERROR 缺少then关键字 checked
				$$=new ParseNode;
				$$->token=Token::STATEMENT_;
				yyerror("missing keyword \"then\"", @2.last_line, @2.last_column+1);
			}|WHILE EXPRESSION_ error STATEMENT_{ //ERROR 缺少关键字do checked
				$$=new ParseNode;
				$$->token=Token::STATEMENT_;
				yyerror("missing keywrod \"do\"", @2.last_line, @2.last_column+1);
			}|REPEAT STATEMENT_LIST_ error EXPRESSION_{ //ERROR 缺少关键字until checked
				$$=new ParseNode;
				$$->token=Token::STATEMENT_;
				yyerror("missing keywrod \"until\"", @4.first_line, @4.first_column);
			}|FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_{
				$$=new ParseNode;
				$$->token=Token::STATEMENT_;
				$$->children.push_back($1);$$->children.push_back($2);
				$$->children.push_back($3);$$->children.push_back($4);
				$$->children.push_back($5);$$->children.push_back($6);
				$$->children.push_back($7);$$->children.push_back($8);
			}|{
				$$=new ParseNode;
				$$->token=Token::STATEMENT_;
			};//不知道case那需不需要报错

VARIABLE_:  ID ID_VARPARTS_{
              $$=new ParseNode;
			  $$->token=Token::VARIABLE_;
			  $$->children.push_back($1);$$->children.push_back($2);
           };
ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_{
                 $$=new ParseNode;
				 $$->token=Token::ID_VARPARTS_;
				 $$->children.push_back($1);$$->children.push_back($2);
               }|{
                 $$=new ParseNode;
				 $$->token=Token::ID_VARPARTS_;
                };
ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES{
                 $$=new ParseNode;
				 $$->token=Token::ID_VARPART_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($2);
               }|DOT ID{
                 $$=new ParseNode;
				 $$->token=Token::ID_VARPART_;
				 $$->children.push_back($1);$$->children.push_back($2);
               }|LEFT_MEDIUM_PARENTHESES error{ //ERROR 不完整的数组下标列表 checked
				 $$=new ParseNode;
				 $$->token=Token::ID_VARPART_;
				 yyerror("incomplete EXPRESSION_ list of array subindex", &@$);
			   }|LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺失右中括号 checked
				 $$=new ParseNode;
				 $$->token=Token::ID_VARPART_;
				 yyerror("missing a right square bracket here", @2.last_line, @2.last_column+1);
			   };
ELSE_PART_:  ELSE STATEMENT_{
                $$=new ParseNode;
				$$->token=Token::ELSE_PART_;
				$$->children.push_back($1);$$->children.push_back($2);
            }|{ 
                $$=new ParseNode;
				$$->token=Token::ELSE_PART_;
            };
CASE_BODY_:  BRANCH_LIST_{
                $$=new ParseNode;
				$$->token=Token::CASE_BODY_;
				$$->children.push_back($1);
            }|{
                $$=new ParseNode;
				$$->token=Token::CASE_BODY_;
            };
BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_{
                 $$=new ParseNode;
				 $$->token=Token::BRANCH_LIST_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);
                }|BRANCH_{
                 $$=new ParseNode;
				 $$->token=Token::BRANCH_LIST_;
				 $$->children.push_back($1);
                };
BRANCH_:  CONST_LIST_ COLON STATEMENT_{
              $$=new ParseNode;
			  $$->token=Token::BRANCH_;
			  $$->children.push_back($1);$$->children.push_back($2);
			  $$->children.push_back($3);
};
CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_{
                $$=new ParseNode;
				$$->token=Token::CONST_LIST_;
				$$->children.push_back($1);$$->children.push_back($2);
				$$->children.push_back($3);
            }|CONST_VARIABLE_{
                $$=new ParseNode;
				$$->token=Token::CONST_LIST_;
				$$->children.push_back($1);
            };//缺少逗号不知道算不算错
UPDOWN_: TO{
            $$=new ParseNode;
			$$->token=Token::UPDOWN_;
			$$->children.push_back($1);
        }|DOWNTO{
            $$=new ParseNode;
			$$->token=Token::UPDOWN_;
			$$->children.push_back($1);
        };
CALL_PROCEDURE_STATEMENT_:  ID{
                              $$=new ParseNode;
							  $$->token=Token::CALL_PROCEDURE_STATEMENT_;
							  $$->children.push_back($1); 
                            }|ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES{
                                $$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								$$->children.push_back($1);$$->children.push_back($2);
								$$->children.push_back($3);$$->children.push_back($4);
                            }|ID LEFT_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺少右括号 checked
				                $$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", @3.last_line, @3.last_column+1);
			                };
EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_{
                      $$=new ParseNode;
					  $$->token=Token::EXPRESSION_LIST_;
					  $$->children.push_back($1);$$->children.push_back($2);
					  $$->children.push_back($3);
                    }|EXPRESSION_{
                        $$=new ParseNode;
						$$->token=Token::EXPRESSION_LIST_;
						$$->children.push_back($1);
                    }|EXPRESSION_LIST_ error EXPRESSION_{ //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						$$=new ParseNode;
						$$->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", @1.last_line, @1.last_column+1);
					};
EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_{
                 $$=new ParseNode;
				 $$->token=Token::EXPRESSION_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);
               }|SIMPLE_EXPRESSION_{
                   $$=new ParseNode;
				   $$->token=Token::EXPRESSION_;
				   $$->children.push_back($1);
               };
SIMPLE_EXPRESSION_:  TERM_{
                       $$=new ParseNode;
					   $$->token=Token::SIMPLE_EXPRESSION_;
					   $$->children.push_back($1);
                    }|ADDOP TERM_{
						if($$->val != "+" && $$->val != "-"){
						$$=new ParseNode;
						$$->token =Token::SIMPLE_EXPRESSION_;
						yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					}else{
						$$=new ParseNode;
						$$->token =Token::SIMPLE_EXPRESSION_;
						$$->children.push_back($1); $$->children.push_back($2);
					}
                    }|SIMPLE_EXPRESSION_ ADDOP TERM_{
                        $$=new ParseNode;
						$$->token=Token::SIMPLE_EXPRESSION_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);
                    }|SIMPLE_EXPRESSION_ ADDOP error TERM_ %prec ADDOP{//error，缺少操作数
						$$=new ParseNode;
						$$->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",@2.last_line, @2.last_column+1);
					};
TERM_:  TERM_ MULOP FACTOR_{
          $$=new ParseNode;
		  $$->token=Token::TERM_;
		  $$->children.push_back($1);$$->children.push_back($2);
		  $$->children.push_back($3);
        }|FACTOR_{
          $$=new ParseNode;
		  $$->token=Token::TERM_;
		  $$->children.push_back($1);
        }|TERM_ MULOP error FACTOR_ %prec MULOP{ //error,缺少操作数
			$$=new ParseNode;
			$$->token=Token::TERM_;
			yyerror("missing operand",@2.last_line, @2.last_column+1);
		};
FACTOR_:  UNSIGN_CONST_VARIABLE_{
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);
          }|VARIABLE_{
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);
          }|ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES{
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 $$->children.push_back($3);$$->children.push_back($4);
          }|LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES{
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 $$->children.push_back($3);
          }|NOT FACTOR_{
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
          }|ID LEFT_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺少右括号 这里引发了一个移进规约冲突
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing a right bracket here", @3.last_line, @3.last_column+1);
		  }|ID LEFT_PARENTHESES error{ //ERROR 函数调用的表达式列表缺失
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", @2.last_line, @2.last_column+1);
		  }|LEFT_PARENTHESES EXPRESSION_ error{ //ERROR 缺少右括号
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing a right bracket here", @2.last_line, @2.last_column+1);
		  };
UNSIGN_CONST_VARIABLE_:  INT_NUM{
                             $$=new ParseNode;
							 $$->token=Token::UNSIGN_CONST_VARIABLE_;
							 $$->children.push_back($1);
                         }|FLOAT_NUM{
                             $$=new ParseNode;
							 $$->token=Token::UNSIGN_CONST_VARIABLE_;
							 $$->children.push_back($1);
                         }|LETTER{
                             $$=new ParseNode;
							 $$->token=Token::UNSIGN_CONST_VARIABLE_;
							 $$->children.push_back($1);
                         };


%%
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
