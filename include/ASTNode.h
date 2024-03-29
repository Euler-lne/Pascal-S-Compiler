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

        ProgramHead * GetProgramHead(){return programHead;};
        ProgramBody *GetProgramBody(){return programBody;};
    };
    class ProgramHead
    {
    public:
        pair<string, int> programId;        // PASCAL程序名称标识符及行号
        vector<pair<string, int>> paraList; // PASCAL程序参数列表及行号

        ProgramHead(){};
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
        void SetUsed() { isUsed = 1; }
        int IsUsed() { return isUsed; }
        Token::TokenType GetConstDeclareType() { return type; }
        ConstDeclare(ParseNode *);
        ~ConstDeclare();

    private:
        string constVal; // 得到的num都是无符号的数
        int lineNum;
        Token::TokenType type; // INTEGER REAL CHAR
        int isUsed;            // 这个变量是否被使用
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
        vector<FormalParameter *> formalParameterList; // 参数列表
        Token::TokenType GetReturnType() { return returnType; }
        void SetUsed() { isUsed = 1; }
        int IsUsed() { return isUsed; } // TODO:用于代码生成时候的优化
        int GetParameterNums() { return formalParameterList.size(); }
        SubProgram(ParseNode *);
        ~SubProgram();

    private:
        string subProgramId;
        int lineNum; // 函数/过程行号
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
        // 代码生成需要考虑两个操作数，到到达最底层才可用使用相应的值
        // 若只有一个操作数 那么这两个操作数 都可能为空，若后者为空代表 -(-1)这种情况
        // 一定只有两个操作数同为nullptr，方可使用 value, variantReference, subProgarmCall
        // 若没有到达两个操作数同为nullptr，不保证上述变量可用
        // 至于用谁通过函数GetValueType
        // TODO：待完善
        string opration; // 具体操作符
        Expression *operand1, *operand2;
        string value;                       // 当前表达式的值，如果有的话
        VariantReference *variantReference; // 变量或常量或数组 或者记录
        SubProgramCall *subProgramCall;
        /// @brief 1.value 2.variantReference 3.subProgramCall
        int GetValueType() { return valueType; }
        Token::TokenType GetValueToken() { return type; }
        Expression(ParseNode *);
        ~Expression();

    private:
        Token::TokenType type; // 表达式的类型
        // 如果两个操作数的值均为空则代表已经到达最底部，可用使用该值
        int lineNum;                    // 行号
        Token::TokenType operationType; // 表达式的类型
        int valueType;                  // 0.未赋值 1.value 2.vari 3.subProgramCall
    };
    class VariantReference
    { // ID，不含Function
    public:
        Token::TokenType idType; // 这个id对应的类型，借助这个变量判断如何展开变量
        // INTEGER BOOLEAN REAL CHAR ARRAY RECORD
        vector<string> recordPart; // 第一个为record的id
        int isArrayAtRecordEnd;    // record的最后一位是否为数组
        vector<Expression *> arrayPart;
        // 如果为数组或者记录 记录接下来的内容（a[1]; a.b）
        // 就是记录[1] 和 b 写入的时候判断类型是否合法
        string GetIDToCodeGenerator() { return prefix + id; } // TODO:如果是记录的话需要遍历
        Token::TokenType GetFinalType() { return finalType; }
        VariantReference(ParseNode *, int);
        VariantReference(ParseNode *idNode);
        ~VariantReference();

    private:
        Token::TokenType finalType; // 最终这个值是一个标准类型，不能从该值判断除是否为Array和record
        // INTEGER BOOLEAN REAL CHAR
        string prefix; // 对应的前缀
        string id;     // id值
        int lineNum;   // 行号
        int isLeft;    // 是否为左值，左值不可以为函数，1代表为左值，0则不是
    };
    class SubProgramCall
    {
    public:
        pair<string, int> subProgramId; // 函数标识符和行号
        vector<Expression *> paraList;
        Token::TokenType GetReturnType() { return returnType; }
        SubProgramCall(ParseNode *);
        ~SubProgramCall();

    private:
        Token::TokenType returnType; // 一定是标准类型
    };
    class WhileStatement
    {
        // 这里富含了 while repeat for 都写在While里
    public:
        AssignStatement *initAssign; // 如果为null就不用执行
        Expression *condition;       // 如果为 for 的话这个是结束的expression
        vector<Statement *> statementList;
        Token::TokenType whileType;
        int isDownto; // -1,0,1 ; -1 非for，0 不是downto，1是downto
        WhileStatement(ParseNode *);
        ~WhileStatement();
    };
    class IfStatement
    {
    public:
        Expression *condition;
        Statement *thenStatement;
        Statement *elseStatement;

        IfStatement(ParseNode *);
        ~IfStatement();
    };
    class AssignStatement
    {
    public:
        VariantReference *leftVal; // 左值
        Expression *rightVal;      // 右值

        AssignStatement(ParseNode *);
        AssignStatement(ParseNode *idNode, Expression expression_);
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