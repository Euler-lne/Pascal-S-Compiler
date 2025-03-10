/*
    语法分析过程，一边进行语法分析一边构建语法分析树_NULL
    注意编写完成之后请输入bison -d yacc.y指令编译出yacc.tab.h文件
*/

%{



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
extern ParseNode* ParseTreeHead;
extern string itos(int num);
extern bool haveSemanticError;
int rec_line,rec_pos;

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

%token _WRITE
%token _READ 

%start programstruct

%left ADDOP
%left MULOP
%right UMINUS
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%nonassoc ONE
%nonassoc TWO
%nonassoc THREE

%locations




%%
programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT{ //正常
					
					//printf("programstruct: 	PROGRAM_HEAD_ PROGTAM_BODY_ DOT\n");
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
			   		$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", @3.last_line, @3.last_column+1);
					reduceNode.Clear();
					YYACCEPT;
					
			   	}|PROGRAM_HEAD_ PROGTAM_BODY_ error{ //ERROR 缺少点号 checked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("missing a dot here", @2.last_line, @2.last_column+1);
					reduceNode.Delete();
			   	}|error PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_识别失败 checked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("fatal error in program head, maybe missing keyword \"program\"",@1.first_line, @1.first_column, @1.last_line, @1.last_column);
			   		reduceNode.Delete();
				}|PROGRAM_HEAD_ error DOT{ //ERROR PROGTAM_BODY_识别失败 unchecked
			   		ParseTreeHead=$$=new ParseNode;
			   		$$->token =Token::PROGRAM_;
					yyerror("fatal error in program body\n");
					reduceNode.Delete();
			   	}|error PROGRAM_HEAD_ PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_前包含非法字符 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid symbol before program head", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					reduceNode.Delete();
				}|error PROGRAM_HEAD_ error PROGTAM_BODY_ DOT{ //ERROR PROGRAM_HEAD_前包含非法记号、缺失分号 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
					reduceNode.Delete();
				}|error PROGRAM_HEAD_ PROGTAM_BODY_ error{ //ERROR PROGRAM_HEAD_前包含非法记号、缺失点号 checked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("missing a dot here", @4.last_line, @4.last_column+1);
					reduceNode.Delete();
				}|error PROGRAM_HEAD_ error DOT{ //ERROR PROGRAM_HEAD_前包含非法记号、PROGTAM_BODY_识别失败 unchecked
					ParseTreeHead=$$=new ParseNode;
					$$->token =Token::PROGRAM_;
					yyerror("invalid token before program head, maybe missing keyword \"program\"", @$.first_line, @$.first_column, @2.first_line, @2.first_column-1);
					yyerror("fatal error in program body", @2.last_line, @2.last_column+1, @4.first_line, @4.first_column-1);
					reduceNode.Delete();
				};

PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //正常
					
					//printf("PROGRAM_HEAD_: 	PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON\n");
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3); $$->children.push_back($4); 
					$$->children.push_back($5);	$$->children.push_back($6);
					reduceNode.Clear();
				}|PROGRAM ID SEMICOLON{ //正常
	
					//printf("PROGRAM_HEAD_: 	PROGRAM ID \n");
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3);
					reduceNode.Clear();
				}|PROGRAM ID LEFT_PARENTHESES IDENTIFIER_LIST_ RIGHT_PARENTHESES error{ //ERROR 缺少; checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a semicolon here", @5.last_line, @5.last_column+1);
					reduceNode.Delete();
				}|PROGRAM error LEFT_PARENTHESES  IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //ERROR 缺少主程序名 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing program name here", @1.last_line, @1.last_column+1);
					reduceNode.Delete();
				}|PROGRAM ID error IDENTIFIER_LIST_ RIGHT_PARENTHESES SEMICOLON{ //ERROR 缺少左括号 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a left bracket here", @4.first_line, @4.first_column-1);
					reduceNode.Delete();
				}|PROGRAM ID LEFT_PARENTHESES error RIGHT_PARENTHESES SEMICOLON{ //ERROR  IDENTIFIER_LIST_识别失败 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @4.first_line, @4.first_column, @4.last_line, @4.last_column);
					reduceNode.Delete();
				}|PROGRAM ID LEFT_PARENTHESES  IDENTIFIER_LIST_ error SEMICOLON{ //ERROR 缺少右括号 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("missing a right bracket here", @4.last_line, @4.last_column+1);
					reduceNode.Delete();
				}|PROGRAM error{ //ERROR program head checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program head imcomplete", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					reduceNode.Delete();
				}|PROGRAM ID error{ //ERROR  IDENTIFIER_LIST_缺失 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @1.first_line, @1.first_column, @2.last_line, @2.last_column);
					reduceNode.Delete();
				}|PROGRAM ID LEFT_PARENTHESES error{ //ERROR  IDENTIFIER_LIST_缺失 checked
					$$=new ParseNode;
					$$->token =Token::PROGRAM_HEAD_;
					yyerror("program ID list missing or imcomplete", @1.first_line, @1.first_column, @2.last_line, @2.last_column);
					reduceNode.Delete();
				};

PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_{ //正常
					
					//printf("PROGTAM_BODY_: 	CONST_DECLARATIONS_ VAR_DECLARATIONS_ SUBPROGRAM_DECLARATIONS_ COMPOUND_STATEMENT_\n");
					$$=new ParseNode;
					$$->token =Token::PROGTAM_BODY_;
					$$->children.push_back($1); $$->children.push_back($2);
					$$->children.push_back($3); $$->children.push_back($4);
					reduceNode.Clear();
				};

 IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID{ //正常  IDENTIFIER_LIST_的产生式不打算加入error
			
						//printf("IDENTIFIER_LIST_:  IDENTIFIER_LIST_ COMMA ID\n");
			$$=new ParseNode;
			$$->token =Token::IDENTIFIER_LIST_;
			$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
			reduceNode.Clear();
		}|ID{ //正常
			
						//printf("IDENTIFIER_LIST_:  ID\n");
			$$=new ParseNode;
		   	$$->token =Token::IDENTIFIER_LIST_;
			$$->children.push_back($1);
			reduceNode.Clear();
		};

CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON { //正常
						
						//printf("CONST_DECLARATIONS_: CONST CONST_DECLARATION_ SEMICOLON\n");
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
						reduceNode.Clear();
					}|{ //正常
						
						//printf("CONST_DECLARATIONS_: null\n");
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						reduceNode.Clear();
					}|CONST error SEMICOLON { //ERROR 常量定义出现错误 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						yyerror("fatal error in const declarations", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
						reduceNode.Delete();
					}|CONST CONST_DECLARATION_ error { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATIONS_;
						yyerror("missing a semicolon here", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
						reduceNode.Delete();
					};

CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_{ //正常
						
						//printf("CONST_DECLARATION_: 	CONST_DECLARATION_ SEMICOLON ID RELOP CONST_VARIABLE_\n");
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						$$->children.push_back($1); $$->children.push_back($2);
						$$->children.push_back($3); $$->children.push_back($4); $$->children.push_back($5);
						reduceNode.Clear();
					}|CONST_DECLARATION_ SEMICOLON ID RELOP error{ //常数初始化右值缺失 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", @4.first_line, @4.first_column, @4.last_line, @4.last_column);
						reduceNode.Delete();
					}|ID RELOP CONST_VARIABLE_{ //正常
						
						//printf("CONST_DECLARATION_:     ID RELOP CONST_VARIABLE_\n");
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
						reduceNode.Clear();
					}|ID RELOP error{ //常数初始化右值缺失 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("constant definition missing initial r-value", @3.first_line, @3.first_column, @3.last_line, @3.last_column);
						reduceNode.Delete();
					}|CONST_DECLARATION_ error ID RELOP CONST_VARIABLE_{ //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a semicolon here", @1.first_line, @1.first_column, @1.last_line, @1.last_column+1);
						reduceNode.Delete();
					}|CONST_DECLARATION_ SEMICOLON ID error CONST_VARIABLE_{ //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here",@3.first_line, @3.first_column, @3.last_line, @3.last_column);
						reduceNode.Delete();
					}|ID error CONST_VARIABLE_{ //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						$$=new ParseNode;
						$$->token =Token::CONST_DECLARATION_;
						yyerror("missing a equal sign here", @2.first_line, @2.first_column, @2.last_line, @2.last_column);
						reduceNode.Delete();
					};

CONST_VARIABLE_: 	ADDOP ID { //正常
					if($$->val != "+" && $$->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP ID\n");
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						$$->children.push_back($1); $$->children.push_back($2);
						reduceNode.Clear();
					}
					
				}|ID { //正常
				    
						//printf("CONST_VARIABLE_: 	ID\n");
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
					reduceNode.Clear();
				}|ADDOP NUM { //正常
					if($$->val != "+" && $$->val != "-"){
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
						reduceNode.Delete();
					}else{
						
						//printf("CONST_VARIABLE_: 	ADDOP NUM\n");
						$$=new ParseNode;
						$$->token =Token::CONST_VARIABLE_;
						$$->children.push_back($1); $$->children.push_back($2);
						reduceNode.Clear();
					}
				}|NUM { //正常
				    
						//printf("CONST_VARIABLE_: 	NUM\n");
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
					reduceNode.Clear();
				}|LETTER{ //正常
				    
						//printf("CONST_VARIABLE_: 	LETTER\n");
					$$=new ParseNode;
					$$->token =Token::CONST_VARIABLE_;
					$$->children.push_back($1);
					reduceNode.Clear();
				};


TYPE_: 	STANDRAD_TYPE_{ //正常
            
						//printf("TYPE_: 	STANDRAD_TYPE_\n");
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			$$->children.push_back($1);
			reduceNode.Clear();
		}|RECORD VAR_DECLARATION_ SEMICOLON END{ //正常
		    
						//printf("TYPE_: 	RECORD VAR_DECLARATION_ SEMICOLON END\n");
			$$=new ParseNode;
			$$->token = Token::TYPE_;
            $$->children.push_back($1); $$->children.push_back($2); 
			$$->children.push_back($3); $$->children.push_back($4);
			reduceNode.Clear();
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_{ //正常
			
			//printf("TYPE_: 	ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF STANDRAD_TYPE_\n");
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);$$->children.push_back($4);
			$$->children.push_back($5);$$->children.push_back($6);
			reduceNode.Clear();
		}|ARRAY error PERIODS_ RIGHT_MEDIUM_PARENTHESES OF TYPE_{ //ERROR 缺少左中括号 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing a left square bracket here", @1.last_line, @1.last_column+1);
			reduceNode.Delete();
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES error TYPE_{ //ERROR 缺少OF关键字 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing keyword \"OF\" here", @4.last_line, @4.last_column+1, @6.first_line, @6.first_column-1);
			reduceNode.Delete();
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ RIGHT_MEDIUM_PARENTHESES OF error{ //ERROR 数组元素类型识别失败 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("missing a base TYPE_ keyword here", @5.last_line, @5.last_column+1);
			reduceNode.Delete();
		}|ARRAY error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
			reduceNode.Delete();
		}|ARRAY LEFT_MEDIUM_PARENTHESES error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
			reduceNode.Delete();
		}|ARRAY LEFT_MEDIUM_PARENTHESES PERIODS_ error{ //ERROR 不完整的数组类型 checked
			$$=new ParseNode;
			$$->token = Token::TYPE_;
			yyerror("incomplete array TYPE_", &@$);
			reduceNode.Delete();
		};

STANDRAD_TYPE_:     INTEGER{ //正常
                        
						//printf("STANDRAD_TYPE_:     INTEGER\n");
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
						reduceNode.Clear();
					}|REAL{ //正常
						
						//printf("STANDRAD_TYPE_:     REAL\n");
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
						reduceNode.Clear();
					}|CHAR{ //正常
					    
						//printf("STANDRAD_TYPE_:     CHAR\n");
						$$=new ParseNode;
						$$->token=Token::STANDRAD_TYPE_;
						$$->children.push_back($1);
						reduceNode.Clear();
					}|BOLLEAN{ //正常
					    
						//printf("STANDRAD_TYPE_:     BOLLEAN\n");
						$$=new ParseNode;
						$$->token =Token::STANDRAD_TYPE_;
                        $$->children.push_back($1);
						reduceNode.Clear();
					};

PERIODS_: PERIODS_ COMMA PERIOD_{ //正常
            
						//printf("PERIODS_: PERIODS_ COMMA PERIOD_\n");
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);
			reduceNode.Clear();
		}|PERIODS_ error PERIOD_{ //ERROR 缺少逗号 checked
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			yyerror("missing a comma here", @1.last_line, @1.last_column+1);
			reduceNode.Delete();
		}|PERIOD_{ //正常
		    
						//printf("PERIODS_: PERIOD_\n");
			$$=new ParseNode;
			$$->token=Token::PERIODS_;
			$$->children.push_back($1);
			reduceNode.Clear();
		};
		
PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_{ //正常
            
						//printf("PERIOD_: CONST_VARIABLE_ RANGE_DOT CONST_VARIABLE_\n");
			$$=new ParseNode;
			$$->token=Token::PERIOD_;
			$$->children.push_back($1);$$->children.push_back($2);
			$$->children.push_back($3);
			reduceNode.Clear();
		}|CONST_VARIABLE_ error CONST_VARIABLE_{ //ERROR 缺少.. checked
			$$=new ParseNode;
			$$->token=Token::PERIOD_;
			yyerror("missing a comma here", @1.last_line, @1.last_column+1);
			reduceNode.Delete();
		};



VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON{ //正常
                        
						//printf("VAR_DECLARATIONS_: 	VAR VAR_DECLARATION_ SEMICOLON\n");
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						$$->children.push_back($1); $$->children.push_back($2); $$->children.push_back($3);
						reduceNode.Clear();
					}|{ //正常
						
						//printf("VAR_DECLARATIONS_: 	null\n");
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						reduceNode.Clear();
					}|VAR error SEMICOLON{ //ERROR 变量定义出现错误 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						yyerror("fatal error in variant declarations", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
						reduceNode.Delete();
					}|VAR VAR_DECLARATION_ error{ //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATIONS_;
						yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
						reduceNode.Delete();
					};

VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_ { //正常
						
						//printf("VAR_DECLARATION_: 	VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON TYPE_\n");
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3); $$->children.push_back($4); $$->children.push_back($5);
						reduceNode.Clear();
					}| IDENTIFIER_LIST_ COLON TYPE_ { //正常
					    
						//printf("VAR_DECLARATION_: 	IDENTIFIER_LIST_ COLON TYPE_\n");
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						$$->children.push_back($1);$$->children.push_back($2); $$->children.push_back($3);
						reduceNode.Clear();
					}|VAR_DECLARATION_ error IDENTIFIER_LIST_ COLON TYPE_ { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
						reduceNode.Delete();
					}|VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ error TYPE_ { //ERROR 缺少冒号 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a colon here", @3.last_line, @3.last_column+1);
						reduceNode.Delete();
					}|VAR_DECLARATION_ SEMICOLON IDENTIFIER_LIST_ COLON error { //ERROR TYPE_识别失败 checked
						$$=new ParseNode;
						$$->token = Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", @4.last_line, @4.last_column+1);
						reduceNode.Delete();
					}| IDENTIFIER_LIST_ COLON error { //ERROR TYPE_识别失败 checked
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						yyerror("missing a TYPE_ here", @3.last_line, @3.last_column+1);
						reduceNode.Delete();
					}| IDENTIFIER_LIST_ error TYPE_ { //ERROR 缺少分号 checked
						$$=new ParseNode;
						$$->token =Token::VAR_DECLARATION_;
						yyerror("missing a colon here", @1.last_line, @1.last_column+1);
						reduceNode.Delete();
					};

SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON{ //正常
								
						//printf("SUBPROGRAM_DECLARATIONS_: 	SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ SEMICOLON\n");
								$$=new ParseNode;
								$$->token=Token::SUBPROGRAM_DECLARATIONS_;
								$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
								reduceNode.Clear();
							}|SUBPROGRAM_DECLARATIONS_ SUBPROGRAM_DECLARATION_ error{ //ERROR 缺少分号 checked
								$$=new ParseNode;
								$$->token=Token::SUBPROGRAM_DECLARATIONS_;
								yyerror("missing a semicolon here", @2.last_line, @2.last_column+1);
								reduceNode.Delete();
							}|{ //正常
							    
						//printf("SUBPROGRAM_DECLARATIONS_: 	null\n");
								$$=new ParseNode;
								$$->token =Token::SUBPROGRAM_DECLARATIONS_;
								reduceNode.Clear();
							};

SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_{ //正常
                
						//printf("SUBPROGRAM_DECLARATION_: SUBPROGRAM_HEAD_ PROGTAM_BODY_\n");
				$$=new ParseNode;
				$$->token=Token::SUBPROGRAM_DECLARATION_;
				$$->children.push_back($1);$$->children.push_back($2);
				reduceNode.Clear();
			};

SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON{ //正常
					    
						//printf("SUBPROGRAM_HEAD_: 	FUNCTION ID FORMAL_PARAMETER_ COLON STANDRAD_TYPE_ SEMICOLON\n");
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);$$->children.push_back($4);
						$$->children.push_back($5);$$->children.push_back($6);
						reduceNode.Clear();
					}| PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON{ //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID FORMAL_PARAMETER_ SEMICOLON\n");
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);$$->children.push_back($4);
						reduceNode.Clear();
					}| PROCEDURE ID SEMICOLON{ //正常
                        
						//printf("SUBPROGRAM_HEAD_: 	PROCEDURE ID SEMICOLON\n");
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);
						reduceNode.Clear();
					}|FUNCTION error FORMAL_PARAMETER_ COLON TYPE_{ //ERROR 函数名缺失 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing function name", @1.last_line, @1.last_column+1);
						reduceNode.Delete();
					}|FUNCTION ID FORMAL_PARAMETER_ error TYPE_{ //ERROR 缺少冒号 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a colon here", @3.last_line, @3.last_column);
						reduceNode.Delete();
					}|FUNCTION ID FORMAL_PARAMETER_ COLON error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", @4.last_line, @4.last_column+1);
						reduceNode.Delete();
					}|FUNCTION ID FORMAL_PARAMETER_ error{ //ERROR 缺少基本类型关键字 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("missing a base TYPE_ keyword here", @3.last_line, @3.last_column+1);
						reduceNode.Delete();
					}|FUNCTION error{ //ERROR 不完整的函数头 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete function head", &@$);
						reduceNode.Delete();
					}|PROCEDURE error{ //ERROR 不完整的过程头 checked
						$$=new ParseNode;
						$$->token=Token::SUBPROGRAM_HEAD_;
						yyerror("incomplete procedure head", &@$);
						reduceNode.Delete();
					};

FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES{ //正常
                        
						//printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES PARAMETER_LISTS_ RIGHT_PARENTHESES\n");
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						$$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
						reduceNode.Clear();
					}|LEFT_PARENTHESES RIGHT_PARENTHESES{ //正常
                        
						//printf("FORMAL_PARAMETER_: 	LEFT_PARENTHESES RIGHT_PARENTHESES\n");
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						$$->children.push_back($1);$$->children.push_back($2);
						reduceNode.Clear();
					}|{ //正常
					    
						//printf("FORMAL_PARAMETER_: 	null\n");
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						reduceNode.Clear();
					}|LEFT_PARENTHESES error{ //ERROR 不完整的形参列表
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						yyerror("incomplete formal PARAMETER_LIST_ list", &@$);
						reduceNode.Delete();
					}|LEFT_PARENTHESES PARAMETER_LISTS_ error{ //ERROR 右括号缺失
						$$=new ParseNode;
						$$->token=Token::FORMAL_PARAMETER_;
						yyerror("missing a right bracket here", @2.last_line, @2.last_column+1);
						reduceNode.Delete();
					};

PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_{ //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LISTS_ SEMICOLON PARAMETER_LIST_\n");
                                        $$=new ParseNode;
                                        $$->token=Token::PARAMETER_LISTS_;
                                        $$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
										reduceNode.Clear();
                                }|PARAMETER_LISTS_ error PARAMETER_LIST_{ //ERROR 缺少分号 checked
                                        $$=new ParseNode;
                                        $$->token=Token::PARAMETER_LISTS_;
                                        yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
										reduceNode.Delete();
                                }|PARAMETER_LIST_{ //正常
										
						//printf("PARAMETER_LISTS_: PARAMETER_LIST_\n");
                                        $$=new ParseNode;
                                        $$->token=Token::PARAMETER_LISTS_;
                                        $$->children.push_back($1);
										reduceNode.Clear();
                                };

PARAMETER_LIST_:         VAR_PARAMETER_ { //正常，非终结符PARAMETER_LIST_的产生式不打算加入error
                                
						//printf("PARAMETER_LIST_:         VAR_PARAMETER_ \n");
								$$=new ParseNode;
                                $$->token=Token::PARAMETER_LIST_;
                                $$->children.push_back($1);
								reduceNode.Clear();
                        }|VALUE_PARAMETER_{ //正常
								
						//printf("PARAMETER_LIST_:         VALUE_PARAMETER_ \n");
                                $$=new ParseNode;
                                $$->token=Token::PARAMETER_LIST_;
                                $$->children.push_back($1);
								reduceNode.Clear();
                        };

VAR_PARAMETER_:         VAR VALUE_PARAMETER_{ //正常
										
						//printf("VAR_PARAMETER_:         VAR VALUE_PARAMETER_\n");
                                        $$=new ParseNode;
                                        $$->token=Token::VAR_PARAMETER_;
                                        $$->children.push_back($1);$$->children.push_back($2);
										reduceNode.Clear();
                                }|VAR error{ //ERROR 不完整的引用参数列表 checked
                                        $$=new ParseNode;
                                        $$->token=Token::VAR_PARAMETER_;
                                        yyerror("incomplete refereced PARAMETER_LIST_ list", &@$);
										reduceNode.Delete();
                                };

VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_{ //正常
                                                
						//printf("VALUE_PARAMETER_:          IDENTIFIER_LIST_ COLON STANDRAD_TYPE_\n");
												$$=new ParseNode;
                                                $$->token=Token::VALUE_PARAMETER_;
                                                $$->children.push_back($1);$$->children.push_back($2);
												$$->children.push_back($3);
												reduceNode.Clear();
                                        }| IDENTIFIER_LIST_ error STANDRAD_TYPE_{ //ERROR 缺少分号 checked
                                                $$=new ParseNode;
                                                $$->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a colon here", @1.first_line, @1.last_column+1);
												reduceNode.Delete();
                                        }| IDENTIFIER_LIST_ COLON error{ //ERROR 缺少基本类型关键字 checked
                                                $$=new ParseNode;
                                                $$->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", @2.last_line, @2.last_column+1);
												reduceNode.Delete();
                                        }| IDENTIFIER_LIST_ error{ //ERROR 缺少基本类型关键字 checked
                                                $$=new ParseNode;
                                                $$->token=Token::VALUE_PARAMETER_;
                                                yyerror("missing a base TYPE_ keyword here", @1.last_line, @1.last_column+1);
												reduceNode.Delete();
                                        };


COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST_ END{ //正常
                                                
						//printf("COMPOUND_STATEMENT_: _BEGIN STATEMENT_LIST END\n");
												$$=new ParseNode;
                                                $$->token=Token::COMPOUND_STATEMENT_;
                                                $$->children.push_back($1);$$->children.push_back($2);$$->children.push_back($3);
												reduceNode.Clear();
                                        }|_BEGIN STATEMENT_LIST_ error{ //ERROR 缺少END关键字 checked
                                                $$=new ParseNode;
                                                $$->token=Token::COMPOUND_STATEMENT_;
                                                yyerror("missing keyword \"end\"", @2.last_line, @2.last_column+1);
												reduceNode.Delete();
                                        };

STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_{ //正常
										
						//printf("STATEMENT_LIST_: STATEMENT_LIST_ SEMICOLON STATEMENT_\n");
                                        $$=new ParseNode;
                                        $$->token=Token::STATEMENT_LIST_;
                                        $$->children.push_back($1);$$->children.push_back($2); $$->children.push_back($3);
										reduceNode.Clear();
                                }|STATEMENT_LIST_ error STATEMENT_{ //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
										
                                        $$=new ParseNode;
                                        $$->token=Token::STATEMENT_LIST_;
                                        yyerror("missing a semicolon here", @1.last_line, @1.last_column+1);
										reduceNode.Delete();
                                }|STATEMENT_{ //正常
                                        
						//printf("STATEMENT_LIST_: STATEMENT_\n");
										$$=new ParseNode;
                                        $$->token=Token::STATEMENT_LIST_;
                                        $$->children.push_back($1);
										reduceNode.Clear();
                                };

STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_{//正常
						
						
						//printf("STATEMENT_:  VARIABLE_ ASSIGNOP EXPRESSION_\n");
						$$=new ParseNode;
						$$->token=Token::STATEMENT_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);
						reduceNode.Clear();
            }|CALL_PROCEDURE_STATEMENT_{//正常
						
						//printf("STATEMENT_: CALL_PROCEDURE_STATEMENT_\n");
						$$=new ParseNode;
						$$->token=Token::STATEMENT_;
						$$->children.push_back($1);
						reduceNode.Clear();
            }|COMPOUND_STATEMENT_{//正常
						
						//printf("STATEMENT_:COMPOUND_STATEMENT_\n");
						$$=new ParseNode;
						$$->token=Token::STATEMENT_;
						$$->children.push_back($1);
						reduceNode.Clear();
            }|IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_{//正常
						
						//printf("STATEMENT_:IF EXPRESSION_ THEN STATEMENT_ ELSE_PART_\n");
						$$=new ParseNode;
						$$->token=Token::STATEMENT_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);$$->children.push_back($4);
						$$->children.push_back($5);
						reduceNode.Clear();
            }|CASE EXPRESSION_ OF CASE_BODY_ END{//正常
						
						//printf("STATEMENT_:CASE EXPRESSION_ OF CASE_BODY_ END\n");
						$$=new ParseNode;
						$$->token=Token::STATEMENT_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);$$->children.push_back($4);
						$$->children.push_back($5);
						reduceNode.Clear();
            }|WHILE EXPRESSION_ DO STATEMENT_{//正常
								
						//printf("STATEMENT_: WHILE EXPRESSION_ DO STATEMENT_\n");
								$$=new ParseNode;
                                 $$->token=Token::STATEMENT_;
                                 $$->children.push_back($1);$$->children.push_back($2);
                                 $$->children.push_back($3);$$->children.push_back($4);
								 reduceNode.Clear();
            }|REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_{//正常
                 
						//printf("STATEMENT_:REPEAT STATEMENT_LIST_ UNTIL EXPRESSION_\n");
				 $$=new ParseNode;
                                 $$->token=Token::STATEMENT_;
                                 $$->children.push_back($1);$$->children.push_back($2);
                                 $$->children.push_back($3);$$->children.push_back($4);
								 reduceNode.Clear();
            }|_READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES{//正常
						//printf("STATEMENT_:_READ LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
				 				$$=new ParseNode;
                                 $$->token=Token::STATEMENT_;
                                 $$->children.push_back($1);$$->children.push_back($2);
                                 $$->children.push_back($3);$$->children.push_back($4);
								 reduceNode.Clear();
            }|_WRITE LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES{//正常
                 
						//printf("STATEMENT_:_WRITE LEFT_PARENTHESES VARIABLE_LIST_ RIGHT_PARENTHESES\n");
								$$=new ParseNode;
                                 $$->token=Token::STATEMENT_;
                                 $$->children.push_back($1);$$->children.push_back($2);
                                 $$->children.push_back($3);$$->children.push_back($4);
								 reduceNode.Clear();
            }|IF EXPRESSION_ error STATEMENT_ ELSE_PART_{ //ERROR 缺少then关键字 checked
                                $$=new ParseNode;
                                $$->token=Token::STATEMENT_;
                                yyerror("missing keyword \"then\"", @2.last_line, @2.last_column+1);
								reduceNode.Delete();
                        }|WHILE EXPRESSION_ error STATEMENT_{ //ERROR 缺少关键字do checked
                                $$=new ParseNode;
                                $$->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"do\"", @2.last_line, @2.last_column+1);
								reduceNode.Delete();
                        }|REPEAT STATEMENT_LIST_ error EXPRESSION_{ //ERROR 缺少关键字until checked
                                $$=new ParseNode;
                                $$->token=Token::STATEMENT_;
                                yyerror("missing keywrod \"until\"", @4.first_line, @4.first_column);
								reduceNode.Delete();
                        }|FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_{//正常
								
						//printf("STATEMENT_:FOR ID ASSIGNOP EXPRESSION_ UPDOWN_ EXPRESSION_ DO STATEMENT_\n");
                                $$=new ParseNode;
                                $$->token=Token::STATEMENT_;
                                $$->children.push_back($1);$$->children.push_back($2);
                                $$->children.push_back($3);$$->children.push_back($4);
                                $$->children.push_back($5);$$->children.push_back($6);
                                $$->children.push_back($7);$$->children.push_back($8);
								reduceNode.Clear();
                        }|{  
								//printf("STATEMENT_:_NULL\n");
								$$=new ParseNode;
                                $$->token=Token::STATEMENT_;
								reduceNode.Clear();
                        };//不知道case那需不需要报错
VARIABLE_LIST_:  VARIABLE_{//正常
					//printf("VARIABLE_LIST_:  VARIABLE_\n");
					$$=new ParseNode;
					$$->token=Token::VARIABLE_LIST_;
					$$->children.push_back($1);
					reduceNode.Clear();
           }|VARIABLE_LIST_ COMMA VARIABLE_{   
						//printf("VARIABLE_LIST_:VARIABLE_LIST_ COMMA VARIABLE_\n");
								$$=new ParseNode;
                                $$->token=Token::VARIABLE_LIST_;
								$$->children.push_back($1);
								$$->children.push_back($2);
								$$->children.push_back($3);
								reduceNode.Clear();
                        };
VARIABLE_:  ID ID_VARPARTS_{//正常
					
						//printf("VARIABLE_:  ID ID_VARPARTS_\n");
					$$=new ParseNode;
					$$->token=Token::VARIABLE_;
					$$->children.push_back($1);$$->children.push_back($2);
					reduceNode.Clear();
           };
ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_{//正常
					
						//printf("ID_VARPARTS_:  ID_VARPARTS_ ID_VARPART_\n");
					$$=new ParseNode;
					$$->token=Token::ID_VARPARTS_;
					$$->children.push_back($1);$$->children.push_back($2);
					reduceNode.Clear();
               }|{
					
						//printf("ID_VARPARTS_:_NULL\n");
					$$=new ParseNode;
					$$->token=Token::ID_VARPARTS_;
					reduceNode.Clear();
                };
ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES{
					
						//printf("ID_VARPART_:  LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ RIGHT_MEDIUM_PARENTHESES\n");
					$$=new ParseNode;
					$$->token=Token::ID_VARPART_;
					$$->children.push_back($1);$$->children.push_back($2);
					$$->children.push_back($3);
					reduceNode.Clear();
               }|DOT ID{
					
						//printf("ID_VARPART_: DOT ID\n");
					$$=new ParseNode;
					$$->token=Token::ID_VARPART_;
					$$->children.push_back($1);$$->children.push_back($2);
					reduceNode.Clear();
               }|LEFT_MEDIUM_PARENTHESES error{ //ERROR 不完整的数组下标列表 checked
                                 $$=new ParseNode;
                                 $$->token=Token::ID_VARPART_;
                                 yyerror("incomplete EXPRESSION_ list of array subindex", &@$);
								 reduceNode.Delete();
                           }|LEFT_MEDIUM_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺失右中括号 checked
                                 $$=new ParseNode;
                                 $$->token=Token::ID_VARPART_;
                                 yyerror("missing a right square bracket here", @2.last_line, @2.last_column+1);
								 reduceNode.Delete();
                           };
ELSE_PART_:  ELSE STATEMENT_{//正常
				
						//printf("ELSE_PART_:  ELSE STATEMENT_\n");
				$$=new ParseNode;
				$$->token=Token::ELSE_PART_;
				$$->children.push_back($1);$$->children.push_back($2);
				reduceNode.Clear();
            }|{//正常
				
						//printf("ELSE_PART_: _NULL\n");
                $$=new ParseNode;
				$$->token=Token::ELSE_PART_;
				reduceNode.Clear();
            };
CASE_BODY_:  BRANCH_LIST_{
				
						//printf("CASE_BODY_:  BRANCH_LIST_\n");
				$$=new ParseNode;
				$$->token=Token::CASE_BODY_;
				$$->children.push_back($1);
				reduceNode.Clear();
            }|{
				
				//printf("CASE_BODY_:  _NULL\n");
				$$=new ParseNode;
				$$->token=Token::CASE_BODY_;
				reduceNode.Clear();
            };
BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_{
					
						//printf("BRANCH_LIST_:  BRANCH_LIST_ SEMICOLON BRANCH_\n");
					$$=new ParseNode;
					$$->token=Token::BRANCH_LIST_;
					$$->children.push_back($1);$$->children.push_back($2);
					$$->children.push_back($3);
					reduceNode.Clear();
                }|BRANCH_{
					
						//printf("BRANCH_LIST_: BRANCH_\n");
					$$=new ParseNode;
					$$->token=Token::BRANCH_LIST_;
					$$->children.push_back($1);
					reduceNode.Clear();
                };
BRANCH_:  CONST_LIST_ COLON STATEMENT_{//正常
					
						//printf("BRANCH_:  CONST_LIST_ COLON STATEMENT_\n");
					$$=new ParseNode;
					$$->token=Token::BRANCH_;
					$$->children.push_back($1);$$->children.push_back($2);
					$$->children.push_back($3);
					reduceNode.Clear();
};
CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_{
					
						//printf("CONST_LIST_:  CONST_LIST_ COMMA CONST_VARIABLE_\n");
					$$=new ParseNode;
					$$->token=Token::CONST_LIST_;
					$$->children.push_back($1);$$->children.push_back($2);
					$$->children.push_back($3);
					reduceNode.Clear();
            }|CONST_VARIABLE_{
					
						//printf("CONST_LIST_:  CONST_VARIABLE_\n");
					$$=new ParseNode;
					$$->token=Token::CONST_LIST_;
					$$->children.push_back($1);
					reduceNode.Clear();
            };//缺少逗号不知道算不算错
UPDOWN_: TO{
			
						//printf("UPDOWN_: TO\n");
			$$=new ParseNode;
			$$->token=Token::UPDOWN_;
			$$->children.push_back($1);
			reduceNode.Clear();
        }|DOWNTO{
			
						//printf("UPDOWN_: DOWNTO\n");
			$$=new ParseNode;
			$$->token=Token::UPDOWN_;
			$$->children.push_back($1);
			reduceNode.Clear();
        };
CALL_PROCEDURE_STATEMENT_:  ID{//正常
								
						//printf("CALL_PROCEDURE_STATEMENT_:  ID\n");
								$$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								$$->children.push_back($1);
								reduceNode.Clear();
                            }|ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES{//正常
                                
						//printf("CALL_PROCEDURE_STATEMENT_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
								$$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								$$->children.push_back($1);$$->children.push_back($2);
								$$->children.push_back($3);$$->children.push_back($4);
								reduceNode.Clear();
                            }|ID LEFT_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺少右括号 checked
								$$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								yyerror("missing a right bracket here", @3.last_line, @3.last_column+1);
								reduceNode.Delete();
							}|ID LEFT_PARENTHESES RIGHT_PARENTHESES{//正常
                                
								$$=new ParseNode;
								$$->token=Token::CALL_PROCEDURE_STATEMENT_;
								$$->children.push_back($1);$$->children.push_back($2);
								$$->children.push_back($3);
								reduceNode.Clear();
                            };
EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_{
	                  
						//printf("EXPRESSION_LIST_:  EXPRESSION_LIST_ COMMA EXPRESSION_\n");
                      $$=new ParseNode;
					  $$->token=Token::EXPRESSION_LIST_;
					  $$->children.push_back($1);$$->children.push_back($2);
					  $$->children.push_back($3);
					  reduceNode.Clear();
                    }|EXPRESSION_{
						
						//printf("EXPRESSION_LIST_:  EXPRESSION_\n");
                        $$=new ParseNode;
						$$->token=Token::EXPRESSION_LIST_;
						$$->children.push_back($1);
						reduceNode.Clear();
                    }|EXPRESSION_LIST_ error EXPRESSION_{ //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						$$=new ParseNode;
						$$->token=Token::EXPRESSION_LIST_;
						yyerror("missing a comma here", @1.last_line, @1.last_column+1);
						reduceNode.Delete();
					};
EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_{
	             
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_ RELOP SIMPLE_EXPRESSION_\n");
                 $$=new ParseNode;
				 $$->token=Token::EXPRESSION_;
				 $$->children.push_back($1);$$->children.push_back($2);
				 $$->children.push_back($3);
				 reduceNode.Clear();
               }|SIMPLE_EXPRESSION_{
				   
						//printf("EXPRESSION_:  SIMPLE_EXPRESSION_\n");
                   $$=new ParseNode;
				   $$->token=Token::EXPRESSION_;
				   $$->children.push_back($1);
				   reduceNode.Clear();
               };
SIMPLE_EXPRESSION_:  TERM_{
	                   
						//printf("SIMPLE_EXPRESSION_:  TERM_\n");
                       $$=new ParseNode;
					   $$->token=Token::SIMPLE_EXPRESSION_;
					   $$->children.push_back($1);
					   reduceNode.Clear();
                    }|SIMPLE_EXPRESSION_ ADDOP TERM_{
						
						//printf("SIMPLE_EXPRESSION_:  SIMPLE_EXPRESSION_ ADDOP TERM_\n");
                        $$=new ParseNode;
						$$->token=Token::SIMPLE_EXPRESSION_;
						$$->children.push_back($1);$$->children.push_back($2);
						$$->children.push_back($3);
						reduceNode.Clear();
                    }|SIMPLE_EXPRESSION_ ADDOP error TERM_ %prec ADDOP{//error，缺少操作数
						$$=new ParseNode;
						$$->token=Token::SIMPLE_EXPRESSION_;
						yyerror("missing operand",@2.last_line, @2.last_column+1);
						reduceNode.Delete();
					};
TERM_:  TERM_ MULOP FACTOR_{
	      
						//printf("TERM_:  TERM_ MULOP FACTOR_\n");
          $$=new ParseNode;
		  $$->token=Token::TERM_;
		  $$->children.push_back($1);$$->children.push_back($2);
		  $$->children.push_back($3);
		  reduceNode.Clear();
        }|FACTOR_{
		  
						//printf("TERM_:  FACTOR_\n");
          $$=new ParseNode;
		  $$->token=Token::TERM_;
		  $$->children.push_back($1);
		  reduceNode.Clear();
        }|TERM_ MULOP error FACTOR_ %prec MULOP{ //error,缺少操作数
			$$=new ParseNode;
			$$->token=Token::TERM_;
			yyerror("missing operand",@2.last_line, @2.last_column+1);
			reduceNode.Delete();
		};
FACTOR_:  UNSIGN_CONST_VARIABLE_{
	         
						//printf("FACTOR_:  UNSIGN_CONST_VARIABLE_\n");
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);
			 reduceNode.Clear();
          }|ADDOP FACTOR_{
				if($$->val != "+" && $$->val != "-"){
					$$=new ParseNode;
					$$->token =Token::FACTOR_;
					yyerror("fatal error in const variable", @1.first_line, @1.first_column, @1.last_line, @1.last_column);
					reduceNode.Delete();
				}else{
					
					//printf("SIMPLE_EXPRESSION_:  ADDOP TERM_\n");
					$$=new ParseNode;
					$$->token =Token::FACTOR_;
					$$->children.push_back($1); $$->children.push_back($2);
					reduceNode.Clear();
				}
                    }|VARIABLE_{
			 
						//printf("FACTOR_:  VARIABLE_\n");
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);
			 reduceNode.Clear();
          }|ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES{
			 
						//printf("FACTOR_:  ID LEFT_PARENTHESES EXPRESSION_LIST_ RIGHT_PARENTHESES\n");
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 $$->children.push_back($3);$$->children.push_back($4);
			 reduceNode.Clear();
          }|ID LEFT_PARENTHESES RIGHT_PARENTHESES{
			 
			 $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 $$->children.push_back($3);
			 reduceNode.Clear();
          }|LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES{
			 
						//printf("FACTOR_:  LEFT_PARENTHESES EXPRESSION_ RIGHT_PARENTHESES\n");
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 $$->children.push_back($3);
			 reduceNode.Clear();
          }|NOT FACTOR_{
			 
						//printf("FACTOR_:  NOT FACTOR_\n");
             $$=new ParseNode;
			 $$->token=Token::FACTOR_;
			 $$->children.push_back($1);$$->children.push_back($2);
			 reduceNode.Clear();
          }|ID LEFT_PARENTHESES EXPRESSION_LIST_ error{ //ERROR 缺少右括号 这里引发了一个移进规约冲突
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing a right bracket here", @3.last_line, @3.last_column+1);
			reduceNode.Delete();
		  }|ID LEFT_PARENTHESES error{ //ERROR 函数调用的表达式列表缺失
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing actual parameter list of function call", @2.last_line, @2.last_column+1);
			reduceNode.Delete();
		  }|LEFT_PARENTHESES EXPRESSION_ error{ //ERROR 缺少右括号
			$$=new ParseNode;
			$$->token=Token::FACTOR_;
			yyerror("missing a right bracket here", @2.last_line, @2.last_column+1);
			reduceNode.Delete();
		  };
UNSIGN_CONST_VARIABLE_:  NUM{
	                         
						//printf("UNSIGN_CONST_VARIABLE_:  NUM\n");
                             $$=new ParseNode;
							 $$->token=Token::UNSIGN_CONST_VARIABLE_;
							 $$->children.push_back($1);
							 reduceNode.Clear();
                         }|LETTER{
							 
						//printf("UNSIGN_CONST_VARIABLE_:  LETTER\n");
                             $$=new ParseNode;
							 $$->token=Token::UNSIGN_CONST_VARIABLE_;
							 $$->children.push_back($1);
							 reduceNode.Clear();
                         };


%%
// 函数定义


void yyerror(const char *s){
	ERROR_NUM++;
    haveSemanticError = true;//错误标志，含有语法错误
    string errorInformation;//定义错误信息
    errorInformation += string(s);//添加错误信息
    errorInformation += ", location: " + itos(yylineno) + "." + itos(yycolumn-yyleng);//添加错误位置
    syntaxErrorInformation.push_back(errorInformation);//存放错误信息
    cout << errorInformation << endl;
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) + "-" + itos(loc->last_line) + "." + itos(loc->last_column);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
	
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
	ERROR_NUM++;
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "SYNTAX error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" + itos(endLine) + "." + itos(endCol);
    
    syntaxErrorInformation.push_back(errorInformation);
    cout << errorInformation << endl;
}