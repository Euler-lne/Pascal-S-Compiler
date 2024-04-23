#include "main.h"
#include "ASTNode.h"
#include "CodeGeneration.h"
#include <fstream>
#include <sstream>
int ERROR_NUM = 0;
ReduceParseNode reduceNode;
extern ParseNode *ParseTreeHead;
extern FILE *yyin;
extern int yyparse();

string itos(int num)
{
    stringstream sin;
    sin << num;
    return sin.str();
}
int main()
{
    // blog.csdn.net/cscmaker/article/details/7042718
    string inName = "../../open_set/48_n_queens.pas"; // 默认输入文件名
    FILE *fp = NULL;
    fp = fopen(inName.c_str(), "r");
    if (fp == NULL) {
        cout << "Cannot open PASCAL-S file " << inName.c_str() << " , please check it." << endl;
        exit(0);
    }
    yyin = fp;
    cout << "Now start lex and syntax analyse..." << endl;
    yyparse(); // 调用语法分析程序
    fclose(fp);
    if (ERROR_NUM == 0) {
        // --------- 进入语义分析 ---------
        cout << "Now start semantic analysis..." << endl;
        AST::Program program(ParseTreeHead);
        reduceNode.Clear();
        delete ParseTreeHead;
        if (ERROR_NUM == 0) {
            // --------- 进入代码生成 ---------
            cout << "Now start code generation..." << endl;
            C_GEN::C_Generater gen(&program, "../../Ccode/234.c");
            gen.run();
        }
    } else {
        reduceNode.Clear();
        delete ParseTreeHead;
    }
    return 0;
}
