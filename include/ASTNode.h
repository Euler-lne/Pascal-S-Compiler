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
#pragma region 定义
    class Declaration
    { // 这个类作为广义上的符号表
    public:
        // FIXME:每一层需要为其变量添加一个_后缀，第i层加i个_,匹配的时候需去除后缀进行匹配
        map<string, ConstDeclare *> constList;
        map<string, TypeDeclare *> typeList;
        map<string, VarDeclare *> varList;
        map<string, SubProgram *> subProgramList;
        Declaration();
        ~Declaration();

    private:
        string suffix; // 每一层添加的后缀
    };
    class ConstDeclare
    {
    public:
        string id;
        int lineNum;
        Token::TokenType type; // INT_NUM FLOAT_NUM LETTER
        ConstDeclare();
        ~ConstDeclare();
    };
    class TypeDeclare
    { // 自己定义的类型和已有的类型进行绑定，可以将这个类作为符号表
    public:
        string id;
        int lineNum;           // 自己定义的类型名字，及其行号
        Token::TokenType type; // 该类型对应的基本类型 ARRAY RECORD INTEGER REAL ……
        vector<int> dimension; // 长度代表维数，其中的值代表对应维数的长度
        map<string, VarDeclare *> recordList;
        TypeDeclare();
        ~TypeDeclare();
    };
    class VarDeclare
    {
    public:
        string id;
        int lineNum;
        Token::TokenType type;
        VarDeclare();
        ~VarDeclare();
    };
    class SubProgram
    {
    public:
        string id;
        int lineNum;                                   // 函数/过程行号
        vector<FormalParameter *> formalParameterList; // 参数列表
        pair<Token::TokenType, int> returnType;        // 返回值类型为基本类型，行号，没有代表为过程，已经声明了一个NULL的TokenType
        ProgramBody *programBody;
        SubProgram();
        ~SubProgram();
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
#pragma endregion
    class Statement
    {
        // 一共可以只有4中语句类型
        // 赋值语句、循环语句、条件语句、函数/过程 调用
        // 1.可以将while repeat for全部合并为while语句
        // 2.条件语句有if和switch（case）
    public:
        pair<Token::TokenType, int> statementType; // 形式参数标识符和行号

        Statement();
        ~Statement();
    };
    class Expression
    {
    public:
        Token::TokenType type;              // 表达式的类型
        int lineNum;                        // 行号
        VariantReference *variantReference; // 变量或常量或数组 或者记录

        int intNum;      // 整数
        float realNum;   // 浮点数
        string strOfNum; // 初始的字符串
        char charVal;    // 常量字符

        SubProgramCall *subProgramCall;
        string opration;                // 具体操作符
        Token::TokenType operationType; // 表达式的类型
        Expression *operand1, *operand2;

        Expression();
        ~Expression();
    };
    class VariantReference
    { // 变量
    public:
        string id;   // 需要去符号表中查找
        int lineNum; // 行号
        Token::TokenType type;
        vector<Expression *> expressionList; // 各维的变量显示
        string item;                         // 若为结构体这里为结构体，可能要使用的变量

        VariantReference();
        ~VariantReference();
    };
    class SubProgramCall : public Statement
    {
    public:
        pair<string, int> subProgramId; // 函数标识符和行号
        vector<Expression *> paraList;
        Token::TokenType returnType;
        // TODO:进行参数类型比较和返回值类型比较

        SubProgramCall();
        ~SubProgramCall();
    };
    class WhileStatement : public Statement
    {
        // 这里富含了 while repeat for 都写在While里
    public:
        Expression *condition;
        vector<Statement *> statementList;

        WhileStatement();
        ~WhileStatement();
    };
    class IfStatement : public Statement
    {
    public:
        Expression *condition;
        vector<Statement *> thenStatementList;
        vector<Statement *> elseStatementList;

        IfStatement();
        ~IfStatement();
    };

    class AssignStatement : public Statement
    {
    public:
        pair<string, VariantReference *> leftVal; // 左值
        Expression *rightVal;                     // 右值

        AssignStatement();
        ~AssignStatement();
    };
} // namespace AST

#endif