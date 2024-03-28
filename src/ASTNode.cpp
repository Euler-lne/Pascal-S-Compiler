/**
 * @file ASTNode.cpp
 * @author Euler_lne
 * @brief 抽象语法分析树的方法实现
 * @version 0.1
 * @date 2024-03-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "ASTNode.h"
#include "ToolOfParseTree.h"
#include <cassert>
#include <iostream>
using namespace ParseTree;
namespace AST
{
    ProgramBody *curProgramBody = nullptr;
    void ReadVarDeclarations(ParseNode *var_declarations_, map<string, pair<int, VarDeclare *>> &varList);
    void ReadConstDeclarations(ParseNode *const_declarations_, map<string, ConstDeclare *> &constList);
    void ReadSubProgramDeclarations(ParseNode *subprogram_declarations_, map<string, SubProgram *> &subProgramList);
    int CheckConstValType(ParseNode *const_variable_, Token::TokenType _type);
    Token::TokenType GetConstType(ParseNode *const_variable_);
    // program->program_head program_body .
    Program::Program(ParseNode *program_)
    {
        programHead = new ProgramHead(program_->children[0]);
        string name = programHead->GetProgramId();
        programBody = new ProgramBody(name, program_->children[1]);
    }
    Program::~Program()
    {
        if (programHead != nullptr)
            delete programHead;
        if (programBody != nullptr)
            delete programBody;
    }
    // program_head->program id
    ProgramHead::ProgramHead(ParseNode *program_head_)
    {
        // 第1个子结点应该是PROGRAM
        assert(program_head_->children[0]->token == Token::PROGRAM);
        // 第2个子结点是程序名称
        programId = make_pair(program_head_->children[1]->val,
                              program_head_->children[1]->lineNumber);

        // 从第3个子结点开始是参数列表
        ParseNode *identifier_list_ = program_head_->children[3];
        Stack idStack(identifier_list_, 0, 2, 1, 0, Token::ID);
        ParseNode *idNode = idStack.Pop();
        while (idNode != nullptr) {
            paraList.emplace_back(idNode->val, idNode->lineNumber);
            idNode = idStack.Pop();
        }
    }
    ProgramHead::~ProgramHead() {}
    // program_body->declaration declaration declaration compound_statement_
    ProgramBody::ProgramBody(string name, ParseNode *program_body_)
    {
        // 对于分析数的ProgramBody 0，1，2都是Declaration；3代表compound_statement_
        parent = curProgramBody;
        prefix = (parent ? parent->prefix : "") + name;
        curProgramBody = this;

        declaration = new Declaration(program_body_);
        ParseNode *compound_statement_ = program_body_->children[3];   // 得到符合语句
        ParseNode *statement_list_ = compound_statement_->children[1]; // 得到语句列表
        Stack statementStack(statement_list_, 0, 2, 1, 0, Token::STATEMENT_, 1);
        ParseNode *statement_ = statementStack.Pop();
        while (statement_ != nullptr) {
            Statement *curStatement = new Statement(statement_);
            statementList.emplace_back(curStatement);
            statement_ = statementStack.Pop();
        }

        curProgramBody = parent;
    }
    ProgramBody::~ProgramBody()
    {
        delete parent;
        delete declaration;
        for (int i = 0; i < statementList.size(); i++) {
            delete statementList[i];
        }
    }

    Declaration::Declaration(ParseNode *program_body_)
    {
        // 只可以使用children的前三个，首先获得头，然后分别遍历
        ParseNode *const_declarations_ = program_body_->children[0];
        ParseNode *var_declarations_ = program_body_->children[1];
        ParseNode *subprogram_declarations_ = program_body_->children[2];

        // 遍历常量声明部分
        ReadConstDeclarations(const_declarations_, constList);
        // 遍历变量声明部分
        ReadVarDeclarations(var_declarations_, varList);
        // 遍历过程声明部分
        ReadSubProgramDeclarations(subprogram_declarations_, subProgramList);
    }
    Declaration::~Declaration()
    {
        for (auto iter = constList.begin(); iter != constList.end(); iter++) {
            delete iter->second;
        }
        for (auto iter = varList.begin(); iter != varList.end(); iter++) {
            if (iter->second.second != nullptr) {
                delete iter->second.second;
                iter->second.second = nullptr;
            }
        }
        for (auto iter = subProgramList.begin(); iter != subProgramList.end(); iter++) {
            delete iter->second;
        }
    }

    ConstDeclare::ConstDeclare(ParseNode *const_variable_)
    {
        // TODO:常量检测读取常量
        type = GetConstType(const_variable_);
    }

    ConstDeclare::~ConstDeclare()
    {
    }

    VarDeclare::VarDeclare(ParseNode *type_)
    {
        type = GetVarTypeFromTypeNode(type_);
        isArray = 0;
        if (type == Token::ARRAY) {
            // 解析array
            isArray = 1;
            type = type_->children[5]->children[0]->token;
            ParseNode *periods_ = type_->children[2];
            Stack periodStack(periods_, 0, 2, 1, 0, Token::PERIOD_);
            ParseNode *period_ = periodStack.Pop();
            while (period_ != nullptr) {
                ParseNode *start_const_ = period_->children[0];
                ParseNode *end_const_ = period_->children[2];
                // FIXME:常量检测，判断是否为数字，不清楚是否可以为负数，起始值是否可用大于结束值
                // TODO:这个函数应该和ConstDeclare中的一样
            }
        } else if (type == Token::RECORD) {
            // 解析 record
            ParseNode *var_declarations_ = type_->children[1];
            ReadVarDeclarations(var_declarations_, recordList);
        }
    }

    VarDeclare::~VarDeclare()
    {
    }
    SubProgram::SubProgram(ParseNode *subprogram_declaration_)
    {
        ParseNode *subprogram_head_ = subprogram_declaration_->children[0];
        Token::TokenType type = subprogram_head_->children[0]->token; // 判断是函数/过程
        subProgramId = subprogram_head_->children[1]->val;            // 得到函数名字
        lineNum = subprogram_head_->children[0]->lineNumber;
        ParseNode *formal_parameter_ = subprogram_head_->children[2];
        if (formal_parameter_->children.size() != 0) {
            ParseNode *parameter_lists_ = formal_parameter_->children[1];
            Stack parameterListStack(parameter_lists_, 0, 2, 1, 0, Token::PARAMETER_LIST_);
            ParseNode *parameter_list_ = parameterListStack.Pop();
            while (parameter_list_) {
                FormalParameter *formalParameter = new FormalParameter(parameter_list_);
                formalParameterList.emplace_back(formalParameter);
                parameter_list_ = parameterListStack.Pop();
            }
        }
        if (type == Token::FUNCTION) {
            ParseNode *standard_type_ = subprogram_head_->children[4];
            returnType = standard_type_->children[0]->token;
        } else {
            returnType = Token::NULL_;
        }
        ParseNode *program_body_ = subprogram_declaration_->children[1];
        programBody = new ProgramBody(subProgramId, program_body_);
    }

    SubProgram::~SubProgram()
    {
    }

    FormalParameter::FormalParameter(ParseNode *parameter_list_)
    {
        // 这里的参数列表为单个参数列表，引用传参/值传参
        ParseNode *node = parameter_list_->children[0]; // 只有一个，但是有两中选择
        if (node->token == Token::VAR_PARAMETER_) {     // 引用传递
            flag = 1;
            node = node->children[1];
        } else {
            flag = 0;
        }
        // 至此，node指向了 value_parameter_
        ParseNode *identifier_list_ = node->children[0]; // 位于0号位置

        Stack idStack(identifier_list_, 0, 2, 1, 0, Token::ID);
        ParseNode *idNode = idStack.Pop();
        while (idNode != nullptr) {
            paraIdList.emplace_back(idNode->val, idNode->lineNumber);
            idNode = idStack.Pop();
        }

        ParseNode *standard_type_ = node->children[2]; // 位于2号位置
        type = standard_type_->children[0]->token;
    }

    FormalParameter::~FormalParameter()
    {
    }

    Statement::Statement(ParseNode *statement_)
    {
        // 注意这里可能推出了空，为空的时候不在构建Statment
        whileStatement = nullptr;
        ifStatement = nullptr;
        assignStatement = nullptr;
        subProgramCall = nullptr;
        caseStatement = nullptr;
        ParseNode *node = statement_->children[0];
        statementType = node->token;
        switch (node->token) {
        case Token::VARIABLE_:
            assignStatement = new AssignStatement(node);
            break;
        case Token::CALL_PROCEDURE_STATEMENT_:
            subProgramCall = new SubProgramCall(node);
            break;
        case Token::COMPOUND_STATEMENT_: {
            ParseNode *compound_statement_ = statement_->children[0];
            ParseNode *statement_list_ = compound_statement_->children[1];
            Stack statementStack(statement_list_, 0, 2, 1, 0, Token::STATEMENT_, 1);
            ParseNode *statement_ = statementStack.Pop();
            while (statement_ != nullptr) {
                Statement *curStatement = new Statement(statement_);
                statementList.emplace_back(curStatement);
                statement_ = statementStack.Pop();
            }
            break;
        }
        case Token::IF:
            ifStatement = new IfStatement(node);
            break;
        case Token::CASE:
            caseStatement = new CaseStatement(node);
            break;
        case Token::WHILE:
        case Token::REPEAT:
        case Token::FOR:
            statementType = Token::WHILE;
            whileStatement = new WhileStatement(node);
            break;
        default:
            break;
        }
    }

    Statement::~Statement()
    {
        switch (statementType) {
        case Token::VARIABLE_:
            delete assignStatement;
            break;
        case Token::CALL_PROCEDURE_STATEMENT_:
            delete subProgramCall;
            break;
        case Token::IF:
            delete ifStatement;
            break;
        case Token::CASE:
            delete caseStatement;
            break;
        case Token::WHILE:
            delete whileStatement;
            break;
        case Token::COMPOUND_STATEMENT_:
            for (int i = 0; i < statementList.size(); i++) {
                delete statementList[i];
            }
            break;
        default:
            break;
        }
    }

    Expression::Expression(ParseNode *expression_)
    {
    }

    Expression::~Expression()
    {
    }

    VariantReference::VariantReference(ParseNode *variable_)
    {
        // 这里识别的是ID
    }

    VariantReference::~VariantReference()
    {
    }

    SubProgramCall::SubProgramCall(ParseNode *call_subprogram_statement_)
    {
    }

    SubProgramCall::~SubProgramCall()
    {
    }

    WhileStatement::WhileStatement(ParseNode *while_statement_)
    {
        // TODO:注意这里将三个循环语句合并了
    }

    WhileStatement::~WhileStatement()
    {
    }

    IfStatement::IfStatement(ParseNode *if_statement_)
    {
    }

    IfStatement::~IfStatement()
    {
    }

    AssignStatement::AssignStatement(ParseNode *assign_statement_)
    {
    }

    AssignStatement::~AssignStatement()
    {
    }
    CaseStatement::CaseStatement(ParseNode *)
    {
    }
    CaseStatement::~CaseStatement() {}
#pragma region 遍历声明相关节点树
    void
    ReadVarDeclarations(ParseNode *var_declarations_, map<string, pair<int, VarDeclare *>> &varList)
    {
        if (var_declarations_->children.size() != 0) {
            ParseNode *var_declaration_ = var_declarations_->children[1];
            Stack typeStack(var_declaration_, 0, 4, 3, 2, Token::TYPE_);
            Stack identifierListStack(var_declaration_, 0, 2, 3, 0, Token::IDENTIFIER_LIST_);
            ParseNode *type_ = typeStack.Pop();
            ParseNode *identifier_list_ = identifierListStack.Pop();
            while (type_ != nullptr) {
                VarDeclare *varDeclare = new VarDeclare(type_);
                Stack idStack(identifier_list_, 0, 2, 1, 0, Token::ID);
                ParseNode *idNode = idStack.Pop();
                while (idNode != nullptr) {
                    map<string, Token::TokenType> list = curProgramBody->declaration->declarationList;
                    if (list.find(idNode->val) != list.end()) {
                        // 之前有声明过这个变量，这里要报错
                        // FIXME：报错变量重定义
                    }
                    pair<int, VarDeclare *> temp = pair<int, VarDeclare *>(idNode->lineNumber, varDeclare);
                    varList.insert(pair<string, pair<int, VarDeclare *>>(idNode->val, temp));
                    curProgramBody->declaration->declarationList.insert(pair<string, Token::TokenType>(idNode->val, Token::VAR));
                    idNode = idStack.Pop();
                }
                type_ = typeStack.Pop();
                identifier_list_ = identifierListStack.Pop();
            }
        }
    }
    void ReadConstDeclarations(ParseNode *const_declarations_, map<string, ConstDeclare *> &constList)
    {
        if (const_declarations_->children.size() != 0) {
            ParseNode *const_declaration_ = const_declarations_->children[1];
            Stack idStack(const_declaration_, 0, 2, 3, 0, Token::ID);
            Stack constVariableStack(const_declaration_, 0, 4, 3, 2, Token::CONST_VARIABLE_);
            ParseNode *idNode = idStack.Pop();
            ParseNode *const_variable = constVariableStack.Pop();
            while (idNode != nullptr) {
                map<string, Token::TokenType> list = curProgramBody->declaration->declarationList;
                if (list.find(idNode->val) != list.end()) {
                    // 之前有声明过这个变量，这里要报错
                    // FIXME：报错常量重定义
                }
                ConstDeclare *constDeclare = new ConstDeclare(const_variable);
                constList.insert(pair<string, ConstDeclare *>(idNode->val, constDeclare));
                curProgramBody->declaration->declarationList.insert(pair<string, Token::TokenType>(idNode->val, Token::CONST));
                idNode = idStack.Pop();
                const_variable = constVariableStack.Pop();
            }
        }
    }
    void ReadSubProgramDeclarations(ParseNode *subprogram_declarations_, map<string, SubProgram *> &subProgramList)
    {
        if (subprogram_declarations_->children.size() != 0) {
            Stack subprogramDeclarationStack(subprogram_declarations_, 0, 1, 0, -1, Token::SUBPROGRAM_DECLARATION_);
            ParseNode *subprogram_declaration_ = subprogramDeclarationStack.Pop();
            ParseNode *subprogram_head = subprogram_declaration_->children[0];
            while (subprogram_declaration_ != nullptr) {
                string name = subprogram_head->children[1]->val;
                map<string, Token::TokenType> list = curProgramBody->declaration->declarationList;
                if (list.find(name) != list.end()) {
                    // 之前有声明过这个变量，这里要报错
                    // FIXME：报错函数重定义
                }
                SubProgram *subProgram = new SubProgram(subprogram_declaration_);
                subProgramList.insert(pair<string, SubProgram *>(name, subProgram));
                curProgramBody->declaration->declarationList.insert(pair<string, Token::TokenType>(name, Token::FUNCTION));
                subprogram_declaration_ = subprogramDeclarationStack.Pop();
            }
        }
    }
#pragma endregion
    /// @brief 判断当前的const的类型是否和传入的一样
    /// @param const_variable_ const节点
    /// @param _type 传入的类型
    /// @return 匹配返回1，否则为0
    int CheckConstValType(ParseNode *const_variable_, Token::TokenType _type)
    {
        return _type == GetConstType(const_variable_) ? 1 : 0;
    }
    /// @brief 获取当前const的节点的类型
    /// @param const_variable_  const节点对应的值
    /// @return 返回 INT_NUM FLOAT_NUM LETTER 这些Token
    Token::TokenType GetConstType(ParseNode *const_variable_)
    {
        // 注意如果为嵌套的定义则需要进入到 curProgramBody中寻找。
        ParseNode *item = nullptr;
        if (const_variable_->children.size() == 2) {
            // 跳过 + - 符号
            item = const_variable_->children[1];
        } else if (const_variable_->children.size() == 1) {
            item = const_variable_->children[0];
        }
        // FIXME:这里由于letter不确定，所以之后需要考虑
        if (item != nullptr) {
            if (item->token != Token::ID) {
                return item->token;
            } else {
                // 此时不为 为ID，这个ID必须是之前定义过的，且必须是常量
                string idName = item->val;
                ProgramBody *cur = curProgramBody;
                while (cur != nullptr) {
                    map<string, ConstDeclare *> constList = cur->declaration->constList;
                    if (constList.find(idName) != constList.end()) {
                        // 找到了这个值
                        ConstDeclare *constId = constList.find(idName)->second;
                        return constId->type;
                    }
                    cur = cur->parent;
                }
                // FIXME:没有找到就要报错，因为const variable必须是一个const类型的鼻梁
            }
        }
        return Token::LETTER;
    }
} // namespace AST
