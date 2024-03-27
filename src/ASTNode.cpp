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
    // program->program_head program_body .
    Program::Program(ParseNode *program_)
    {
        curProgramBody = NULL;
        programHead = new ProgramHead(program_->children[0]);
        string name = programHead->GetProgramId();
        programBody = new ProgramBody(name, program_->children[1]);
    }
    Program::~Program()
    {
        delete programHead;
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
        ParseNode *identifier_list_;
        Stack idSatck(identifier_list_, 0, 2, 1, 0, Token::ID);
        ParseNode *idNode = idSatck.Pop();
        while (idNode != NULL) {
            paraList.emplace_back(idNode->val, idNode->lineNumber);
            idNode = idSatck.Pop();
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
        while (statement_ != NULL) {
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
        // TODO: 赋值完毕后分别遍历，得到对应单个语句，注意构建的是单个语句
        // FIXME:注意为孩子长度为0的情况，对应推出空，为空不构建
        // 遍历常量声明部分
        if (const_declarations_->children.size() != 0) {
        }

        // 遍历变量声明部分
        // TODO：两次嵌套：找到一个var_declaration；从identifier_list中找到 id；
        if (var_declarations_->children.size() != 0) {
        }

        // 遍历过程声明部分
        Stack subprogramDeclarationStack(subprogram_declarations_, 0, 1, 0, -1, Token::SUBPROGRAM_DECLARATION_);
        // TODO:完善遍历
    }
    Declaration::~Declaration()
    {
        for (auto iter = constList.begin(); iter != constList.end(); iter++) {
            delete iter->second;
        }
    }

    ConstDeclare::ConstDeclare(ParseNode *const_declaration_)
    {
    }

    ConstDeclare::~ConstDeclare()
    {
    }

    VarDeclare::VarDeclare(ParseNode *var_declaration_)
    {
        // TODO:修改构造函数，传入类型信息
        // 得到的是单个语句
        varId = var_declaration_->val;
        lineNum = var_declaration_->lineNumber;
        type = var_declaration_->token; // FIXME:错误
        // TODO:对type的类型进行判断，生成不同的类型，例如ARRAY
        // 判断是数组还是普通变量
        if (type == Token::ARRAY) {
            // 解析array的维度
            ParseNode *array_dimension_ = var_declaration_->children[0];
        }
    }

    VarDeclare::~VarDeclare()
    {
    }
    SubProgram::SubProgram(ParseNode *subprogram_declaration_)
    {
        /**
         * @brief 当前函数/过程的名字，
         * 当前定义函数的行号，参数列表，
         * 返回值类型，主体部分
         * 单个语句，所以其children只有两个值，head 和 body
         */
        ParseNode *subprogram_head_ = subprogram_declaration_->children[0];
        Token::TokenType type = subprogram_head_->children[0]->token; // 判断是函数/过程
        subProgramId = subprogram_head_->children[1]->val;            // 得到函数名字
        lineNum = subprogram_head_->children[0]->lineNumber;
        ParseNode *formal_parameter_ = subprogram_head_->children[2];
        // TODO:传入参数列表，需要遍历
        // FIXME:注意为孩子长度为0的情况，对应推出空，为空不构建
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
        // TODO:遍历identifier_list_，得到id，插入paraId中
        ParseNode *standard_type_ = node->children[2]; // 位于2号位置
        type = standard_type_->children[0]->token;
    }

    FormalParameter::~FormalParameter()
    {
    }

    Statement::Statement(ParseNode *statement_)
    {
        // TODO:判断当前的类型生成相应的语句
        // 注意这里可能推出了空，为空的时候不在构建Statment
        whileStatement = NULL;
        ifStatement = NULL;
        assignStatement = NULL;
        subProgramCall = NULL;
        caseStatement = NULL;
        ParseNode *node = statement_->children[0];
        switch (node->token) {
        case Token::VARIABLE_:
            statementType = Token::VARIABLE_;
            assignStatement = new AssignStatement(node);
            break;
        case Token::CALL_PROCEDURE_STATEMENT_:
            statementType = Token::CALL_PROCEDURE_STATEMENT_;
            subProgramCall = new SubProgramCall(node);
            break;
        case Token::COMPOUND_STATEMENT_:
            // TODO:这里要遍历COMPOUND_STATEMENT_，类似于拆包
            break;
        case Token::IF:
            statementType = Token::IF;
            ifStatement = new IfStatement(node);
            break;
        case Token::CASE:
            statementType = Token::CASE;
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

} // namespace AST
