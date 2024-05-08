/***
 * @addindex
 * @ $ g++ main.cpp -o translator
 * @ $ ./translator input.pas output.c
 */
#include "main.h"
#include "ASTNode.h"
#include "CodeGeneration.h"
#include <fstream>
#include <sstream>
#include <iostream>

int ERROR_NUM = 0;
ReduceParseNode reduceNode;
extern ParseNode *ParseTreeHead;
extern FILE *yyin;
extern int yyparse();

std::string itos(int num)
{
    std::stringstream sin;
    sin << num;
    return sin.str();
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " <input_file> <output_file>" << std::endl;
        return 1;
    }

    std::string inputPath = argv[1];
    std::string outputPath = argv[2];

    FILE *fp = fopen(inputPath.c_str(), "r");
    if (fp == NULL)
    {
        std::cout << "Cannot open PASCAL-S file " << inputPath << ", please check it." << std::endl;
        return 1;
    }
    yyin = fp;

    yyparse(); // 调用语法分析程序

    fclose(fp);

    if (ERROR_NUM == 0)
    {
        // 进入语义分析
        AST::Program program(ParseTreeHead);
        reduceNode.Clear();
        delete ParseTreeHead;
        if (ERROR_NUM == 0)
        {
            // 进入代码生成
            C_GEN::C_Generater gen(&program, outputPath);
            gen.run();
        }
    }
    else
    {
        reduceNode.Clear();
        delete ParseTreeHead;
    }

    return 0;
}