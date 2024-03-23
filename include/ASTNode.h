/**
 * @file ASTNode.h
 * @author Euler_lne
 * @brief 构建抽象语法数的头文件
 * @version 0.1
 * @date 2024-03-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef ASTNODE_H
#define ASTNODE_H
#include "TokenTypeEnum.h"
#include <map>
#include <string>
#include <vector>
using namespace std;
namespace AST
{
    ProgramBody *curProgramBody = NULL; // 这个变量只是作为一个中间变量，记录当前的ProgramBody
    // 这个变量只有在进行构建AST的时候有用，其他时候用不了，注意一定要等parent赋值完毕之后才可以更改这个值
    class Program // 程序
    {
    public:
        ProgramHead *programHead;
        ProgramBody *programBody;

        Program();
        ~Program();
    };
    class ProgramHead
    {
        pair<string, int> programId;        // PASCAL程序名称标识符及行号
        vector<pair<string, int>> paraList; // PASCAL程序参数列表及行号
        ProgramHead();
        ~ProgramHead();
    };
    class ProgramBody
    {
    public:
        ProgramBody *parent; // 上一个作用域，如果为null则代表为全局变量
        Declaration *declaration;
        vector<Statement *> statementList;
        ProgramBody();
        ~ProgramBody();
    };
    class Declaration
    { // 这个类作为广义上的符号表
    public:
        map<string, ConstDeclare *> constList;
        map<string, TypeDeclare *> typeList;
        map<string, VarDeclare *> varList;
        map<string, Subprogram *> subProgramList;
        Declaration();
        ~Declaration();
    };
    class ConstDeclare
    {
    public:
        int lineNum;
        Token::TokenType type; // INT_NUM FLOAT_NUM LETTER
        ConstDeclare();
        ~ConstDeclare();
    };
    class TypeDeclare
    { // 自己定义的类型和已有的类型进行绑定，可以将这个类作为符号表
    public:
        int lineNum;           // 自己定义的类型名字，及其行号
        Token::TokenType type; // 该类型对应的基本类型
        // TODO：数组和记录类型
        // TODO:构建类型对应表
        TypeDeclare();
        ~TypeDeclare();
    };
    class VarDeclare
    {
    public:
        int lineNum;
        Token::TokenType type;
        VarDeclare();
        ~VarDeclare();
    };
    class Subprogram
    {
        int lineNum;                                   // 函数/过程行号
        vector<FormalParameter *> formalParameterList; // 参数列表
        pair<Token::TokenType, int> returnType;        // 返回值类型为基本类型，没有代表为过程，已经声明了一个NULL的TokenType
        ProgramBody *programBody;
        Subprogram();
        ~Subprogram();
    };
    class FormalParameter
    {
    public:
        pair<string, int> paraId; // 形式参数标识符和行号
        Token::TokenType type;    // 形式参数类型，形式参数一定是基本类型
        int flag;                 // flag=0表示传值调用，flag=1表示引用调用
        FormalParameter();
        ~FormalParameter();
    };
    class Statement
    {
        // 一共可以只有4中语句类型
        // 赋值语句、循环语句、条件语句、函数/过程 调用
        // 1.可以将while repeat for全部合并为while语句
        // 2.条件语句有if和switch（case）
    public:
        pair<Token::TokenType, int> statementType; // 形式参数标识符和行号
    };
} // namespace AST

#endif