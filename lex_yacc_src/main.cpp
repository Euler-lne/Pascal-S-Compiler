#include "main.h"
// #include "yacc.tab.h"

using namespace std;

extern ParseNode *ParseTreeHead;        // 具体语法分析树树根
extern FILE *yyin;                      // lex的语法输入流指针
extern vector<string> errorInformation; // 报错信息

extern "C" {
int yyparse(); // yacc的启动函数
}

int main()
{
    char *inputFile = "input/path/pascal.pas";
    FILE *fp = fopen(inputFile, "r");
    if (fp == NULL) {
        cout << "Can't open " << inputFile << endl;
        return -1;
    }
    yyin = fp;
    yyparse();
    return 0;
}