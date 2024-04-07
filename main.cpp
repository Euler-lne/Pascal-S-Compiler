#include "main.h"
#include "ASTNode.h"
#include "CodeGeneration.h"
#include <fstream>
#include <sstream>

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
    string inName = "../../test/1.pas"; // 默认输入文件名
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
    AST::Program program(ParseTreeHead); // 有问题，只有一个节点没有孩子节点

    C_GEN::C_Generater gen(&program, "");
    gen.run();
    return 0;
}
