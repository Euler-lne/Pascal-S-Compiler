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
#include <map>
#include <string>
#include <vector>

#include "TokenTypeEnum.h"
#include "main.h"
using namespace std;
namespace AST
{
    class Program;
    class ProgramHead;
    class ProgramBody;
    class Declaration;
    class ConstDeclare;
    class VarDeclare;
    class SubProgram;
    class FormalParameter;
    class Statement;
    class Expression;
    class VariantReference;
    class SubProgramCall;
    class WhileStatement;
    class IfStatement;
    class AssignStatement;
    class CaseStatement;
    extern ProgramBody *curProgramBody;
    // 这个变量只是作为一个中间变量，记录当前的ProgramBody
    // 这个变量只有在进行构建AST的时候有用，其他时候用不了，注意一定要等parent赋值完毕之后才可以更改这个值
    class Program // 程序
    {
    public:
        ProgramHead *programHead;
        ProgramBody *programBody;

        Program(ParseNode *);
        ~Program();
    };
    class ProgramHead
    {
    public:
        pair<string, int> programId;        // PASCAL程序名称标识符及行号
        vector<pair<string, int>> paraList; // PASCAL程序参数列表及行号
        ProgramHead(ParseNode *);
        ~ProgramHead();

        string GetProgramId() { return programId.first; };
    };
    class ProgramBody
    {
    public:
        // FIXME:不能只进入不退出
        ProgramBody *parent; // 上一个作用域，如果为null则代表为全局变量
        string prefix;       // 每一层添加的前缀
        Declaration *declaration;
        vector<Statement *> statementList;
        ProgramBody(string, ParseNode *);
        ~ProgramBody();
    };
#pragma region 定义

    class Declaration
    { // 这个类作为广义上的符号表
    public:
        // FIXME:每一层需要为其变量添加一个_后缀，第i层加i个_,匹配的时候需去除后缀进行匹配
        map<string, ConstDeclare *> constList;        // 真实名字 和 其值
        map<string, pair<int, VarDeclare *>> varList; // 注意其孩子
        map<string, SubProgram *> subProgramList;
        Declaration(ParseNode *);
        ~Declaration();
    };
    class ConstDeclare
    { // 输入的节点为 const_variable
    public:
        string constId;
        int lineNum;
        Token::TokenType type; // INT_NUM FLOAT_NUM LETTER
        ConstDeclare(ParseNode *);
        ~ConstDeclare();
    };
    class VarDeclare
    { // 传入type_，这里没有记录当前的ID，要看ID请到 Declaration 中
      // 这里只保存了这个变量对应的类型
    public:
        Token::TokenType type;
        int isArray; // 这个变量用于判断是否为数组，因为为数组的话，导致type也为标准类型，不可区分
        // 1 为数组，0非数组
        // array [1..25] 定义了一个长度为25的数组
        vector<pair<int, int>> dimension; // vector长度代表维数，第一个值为起始下标，第二个值为长度
        map<string, pair<int, VarDeclare *>> recordList;
        VarDeclare(ParseNode *);
        ~VarDeclare();
    };
    class SubProgram
    { // 传入 subprogram_declaration_
    public:
        string subProgramId;
        int lineNum;                                   // 函数/过程行号
        vector<FormalParameter *> formalParameterList; // 参数列表
        Token::TokenType returnType;                   // 返回值类型为基本类型，行号，没有代表为过程，已经声明了一个NULL的TokenType
        ProgramBody *programBody;
        SubProgram(ParseNode *);
        ~SubProgram();
    };
    class FormalParameter
    {
    public:
        pair<string, int> paraId; // 形式参数标识符和行号
        Token::TokenType type;    // 形式参数类型，形式参数一定是基本类型
        int flag;                 // flag=0表示传值调用，flag=1表示引用调用
        FormalParameter(ParseNode *);
        ~FormalParameter();
    };
#pragma endregion
    class Statement
    {
        // 一共可以只有4中语句类型，特定类型对特定的类进行赋值
        // 赋值语句、循环语句、条件语句、函数/过程 调用
        // 1.可以将while repeat for全部合并为while语句
        // 2.条件语句有if和switch（case）
    public:
        Token::TokenType statementType; // 形式参数标识符和行号
        WhileStatement *whileStatement;
        IfStatement *ifStatement;
        AssignStatement *assignStatement;
        SubProgramCall *subProgramCall;
        CaseStatement *caseStatement;
        Statement(ParseNode *);
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

        Expression(ParseNode *);
        ~Expression();
    };
    class VariantReference
    { // ID
    public:
        int lineNum; // 行号
        Token::TokenType type;
        vector<Expression *> expressionList; // 各维的变量显示
        string item;                         // 若为结构体这里为结构体，可能要使用的变量

        VariantReference(ParseNode *);
        ~VariantReference();

    private:
        string vartId; // 需要去符号表中查找
        string suffix; // 每一层添加的后缀
    };
    class SubProgramCall
    {
    public:
        pair<string, int> subProgramId; // 函数标识符和行号
        vector<Expression *> paraList;
        Token::TokenType returnType;
        int isStatement; // 如果是在语句中不用管返回值，在为1，不在为0
        // TODO:进行参数类型比较和返回值类型比较

        SubProgramCall(ParseNode *);
        ~SubProgramCall();
    };
    class WhileStatement
    {
        // 这里富含了 while repeat for 都写在While里
    public:
        AssignStatement *initAssign; // 如果为null就不用执行
        Expression *condition;
        vector<Statement *> statementList;

        WhileStatement(ParseNode *);
        ~WhileStatement();
    };
    class IfStatement
    {
    public:
        Expression *condition;
        vector<Statement *> thenStatementList;
        vector<Statement *> elseStatementList;

        IfStatement(ParseNode *);
        ~IfStatement();
    };
    class AssignStatement
    {
    public:
        VariantReference *leftVal; // 左值
        Expression *rightVal;      // 右值

        AssignStatement(ParseNode *);
        ~AssignStatement();
    };
    class CaseStatement
    {
    public:
        Expression *condition;
        // TODO:完善case语句

        CaseStatement(ParseNode *);
        ~CaseStatement();
    };
} // namespace AST

#endif