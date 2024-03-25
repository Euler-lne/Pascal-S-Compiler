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

namespace AST
{
    Program::Program(ParseNode *program_)
    {
        ParseNode *program_head_; // TODO:为其赋值
        programHead = new ProgramHead(program_head_);
        ParseNode *program_body_; // TODO:为其赋值
        string name = programHead->GetProgramId();
        programBody = new ProgramBody(name, program_body_);
    }
    Program::~Program()
    {
        delete programHead;
        delete programBody;
    }

    ProgramHead::ProgramHead(ParseNode *program_head_)
    {
    }
    ProgramHead::~ProgramHead()
    {
    }
    ProgramBody::ProgramBody(string name, ParseNode *program_body_)
    {
        parent = curProgramBody;
        prefix = (parent ? parent->prefix : "") + name;
        curProgramBody = this;

        ParseNode *declaration_; // TODO:为其赋值
        declaration = new Declaration(declaration_);
        ParseNode *compound_statement_; // TODO:为其赋值，这里对应的是 COMPOUND_STATEMENT_
        // ParseNode *statement_;          // 为其赋值，单个语句
        // TODO:这里需要遍历 compound_statement_ 注意其语法树结构，该结构的最后一个child为end关键字

        curProgramBody = parent;
    }
    ProgramBody::~ProgramBody()
    {
    }

    Declaration::Declaration(ParseNode *declaration_)
    {
        ParseNode *const_declaration_;      // TODO:为其赋值
        ParseNode *var_declaration_;        // TODO:为其赋值
        ParseNode *subprogram_declaration_; // TODO:为其赋值
        // TODO: 赋值完毕后分别遍历，得到对应单个语句
    }
    Declaration::~Declaration()
    {
    }
    SubProgram::SubProgram(ParseNode *subprogram_declaration_)
    {
        /**
         * @brief 当前函数/过程的名字，
         * 当前定义函数的行号，参数列表，
         * 返回值类型，主体部分
         *
         */
        ParseNode *program_body_; // TODO:为其赋值
        programBody = new ProgramBody(subProgramId, program_body_);
    }
} // namespace AST
