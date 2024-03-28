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
    class Program // 程序
    {
    public:
        ProgramHead *programHead;
        ProgramBody *programBody;

        Program()
        {
            programHead = nullptr;
            programBody = nullptr;
        };
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
        map<string, ConstDeclare *> constList;        // 真实名字 和 其值
        map<string, pair<int, VarDeclare *>> varList; // 注意其孩子
        map<string, SubProgram *> subProgramList;
        map<string, Token::TokenType> declarationList; // 用于快速检查是否重定义
        // 这里的Token::TokenType取值为 VAR CONST FUNCTION（包括过程）
        Declaration(ParseNode *);
        ~Declaration();
    };
    class ConstDeclare
    { // 输入的节点为 const_variable
    public:
        Token::TokenType GetConstDeclareType() { return type; }
        ConstDeclare(ParseNode *);
        ~ConstDeclare();

    private:
        string constVal; // 得到的num都是无符号的数
        int lineNum;
        Token::TokenType type; // INT_NUM FLOAT_NUM LETTER
    };
    class VarDeclare
    { // 传入type_，这里没有记录当前的ID，要看ID请到 Declaration 中
      // 这里只保存了这个变量对应的类型
    public:
        Token::TokenType GetVarDeclareType() { return type; }
        int GetArrayDimension() { return dimension.size(); }
        VarDeclare *GetRecordTypeOfName(string name);
        void SetAssignment() { isAssignment = 1; }
        int IsArray() { return isArray; }
        int IsAssignment() { return isAssignment; }
        void SetUsed() { isUsed = 1; }
        int IsUsed() { return isUsed; }
        VarDeclare(ParseNode *);
        ~VarDeclare();

    private:
        Token::TokenType type; // 没有ARRAY 类型，如果为array已经变成了标准类型
        int isArray;           // 这个变量用于判断是否为数组，因为为数组的话，导致type也为标准类型，不可区分
        // 1 为数组，0非数组
        // array [1..25] 定义了一个长度为25的数组
        // 规定数组下标必须为整数或者一个整数类型的const，且起始下标要小于结束下标
        vector<pair<int, int>> dimension;
        // vector长度代表维数，第一个值为起始下标，第二个值为长度
        map<string, pair<int, VarDeclare *>> recordList;
        int isAssignment; // 如果赋值了就为1，没有就为0，用于报错
        int isUsed;       // 这个变量是否被使用
    };
    class SubProgram
    { // 传入 subprogram_declaration_
    public:
        ProgramBody *programBody;
        Token::TokenType GetReturnType() { return returnType; }
        void SetUsed() { isUsed = 1; }
        int IsUsed() { return isUsed; } // TODO:用于代码生成时候的优化
        SubProgram(ParseNode *);
        ~SubProgram();

    private:
        string subProgramId;
        int lineNum;                                   // 函数/过程行号
        vector<FormalParameter *> formalParameterList; // 参数列表
        Token::TokenType returnType;
        // 返回值类型为基本类型，行号，没有代表为过程，已经声明了一个NULL的TokenType
        int isUsed; // 是否被调用了，如果被调用了就为1，没有为0；
    };
    class FormalParameter
    {
    public:
        vector<pair<string, int>> paraIdList; // 形式参数标识符和行号
        Token::TokenType type;                // 形式参数类型，形式参数一定是基本类型
        int flag;                             // flag=0表示传值调用，flag=1表示引用调用
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
        vector<Statement *> statementList;
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
        int isLeft;  // 是否为左值，左值不可以为函数
        Token::TokenType type;
        // 当前变量的类型，这个类型如果为ARRAY需要将 全部的[]读入然后再记录标准类型
        vector<string> recordPart; // 第一个为record的id
        int isArrayAtRecordEnd;    // record的最后一位是否为数组
        vector<Expression *> arrayPart;
        // 如果为数组或者记录 记录接下来的内容（a[1]; a.b）
        // 就是记录[1] 和 b 写入的时候判断类型是否合法
        string GetIDToCodeGenerator() { prefix + id; }
        VariantReference(ParseNode *, int);
        ~VariantReference();

    private:
        string prefix; // 对应的前缀
        string id;     // id值
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