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
#include <unordered_set>
using namespace ParseTree;
namespace AST
{
    // 设置一个全局变量用来记录当前是write，设置为1，然后在Expression中进行判断
    int StatementisWrite = 0;
    ProgramBody *curProgramBody = nullptr;
    SubProgram *curSubProgram = nullptr;
    SubProgram *preSubProgram = nullptr;
    FunctionDeclaration *functionDeclare = nullptr;

    void ReadVarDeclarations(ParseNode *var_declarations_, map<string, pair<int, VarDeclare *>> &varList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue);
    void ReadConstDeclarations(ParseNode *const_declarations_, map<string, ConstDeclare *> &constList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue);
    void ReadSubProgramDeclarations(ParseNode *subprogram_declarations_, map<string, SubProgram *> &subProgramList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue);
    Token::TokenType GetConstTypeFromParseTree(ParseNode *const_variable_, string &value);
    ProgramBody *FindDeclaration(string idName, int lineNum);
    int FindDeclarationInSubProgram(string idName, Token::TokenType &_type);
    int GetParameterNums(vector<FormalParameter *> formalParameterList);

    // program->program_head program_body .
    Program::Program(ParseNode *program_)
    {
        programHead = new ProgramHead(program_->children[0]);
        string name = programHead->GetProgramId();
        totalStruct = new FunctionDeclaration();
        functionDeclare = totalStruct;
        programBody = new ProgramBody(name, program_->children[1], nullptr);
    }
    Program::~Program()
    {
        if (programHead != nullptr)
            delete programHead;
        if (programBody != nullptr)
            delete programBody;
        if (totalStruct != nullptr)
            delete totalStruct;
    }
    // program_head->program id
    ProgramHead::ProgramHead(ParseNode *program_head_)
    {
        programId = make_pair(program_head_->children[1]->val,
                              program_head_->children[1]->lineNumber);
        if (program_head_->children.size() < 5)
            return;
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
    ProgramBody::ProgramBody(string name, ParseNode *program_body_, SubProgram *preSubProgram)
    {
        // 对于分析数的ProgramBody 0，1，2都是Declaration；3代表compound_statement_
        parent = curProgramBody;
        prefix = (parent ? parent->prefix : "") + name + "_";
        curProgramBody = this;
        if (parent == nullptr)
            programLayer = 0;
        else
            programLayer += parent->programLayer;
        declaration = new Declaration();
        declaration->SetDeclaration(program_body_);
        curSubProgram = preSubProgram;
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
    string ProgramBody::GetDeclarationNameAtIndex(int index)
    {
        for (int i = 0; i < declaration->declarationQueue.size(); i++) {

            if (index == i) {
                switch (declaration->declarationList.find(declaration->declarationQueue[i])->second) {
                case Token::VAR:
                case Token::CONST:
                    return prefix + declaration->declarationQueue[i];
                    break;
                case Token::FUNCTION:
                    return prefix + declaration->declarationQueue[i] + "_";
                    break;
                default:
                    break;
                }
            }
        }
        return "";
    }
    void *ProgramBody::GetDeclarationAtIndex(int index, Token::TokenType &_type)
    {
        for (int i = 0; i < declaration->declarationQueue.size(); i++) {

            if (index == i) {
                string idName = declaration->declarationQueue[i];
                switch (declaration->declarationList.find(idName)->second) {
                case Token::VAR:
                    _type = Token::VAR;
                    return declaration->varList.find(idName)->second.second;
                    break;
                case Token::CONST:
                    _type = Token::CONST;
                    return declaration->constList.find(idName)->second;
                    break;
                case Token::FUNCTION:
                    _type = Token::FUNCTION;
                    return declaration->subProgramList.find(idName)->second;
                    break;
                default:
                    break;
                }
            }
        }
        _type = Token::NULL_;
        return nullptr;
    }

    ProgramBody::~ProgramBody()
    {
        if (declaration != nullptr)
            delete declaration;
        for (int i = 0; i < statementList.size(); i++) {
            if (statementList[i] != nullptr)
                delete statementList[i];
        }
    }

    void Declaration::SetDeclaration(ParseNode *program_body_)
    {
        prefix = curProgramBody->prefix;
        // 只可以使用children的前三个，首先获得头，然后分别遍历
        ParseNode *const_declarations_ = program_body_->children[0];
        ParseNode *var_declarations_ = program_body_->children[1];
        ParseNode *subprogram_declarations_ = program_body_->children[2];

        // 遍历常量声明部分
        ReadConstDeclarations(const_declarations_, constList, declarationList, declarationQueue);
        // 遍历变量声明部分
        ReadVarDeclarations(var_declarations_, varList, declarationList, declarationQueue);
        // 遍历过程声明部分
        ReadSubProgramDeclarations(subprogram_declarations_, subProgramList, declarationList, declarationQueue);
        vector<VarDeclare *> temp1;
        for (int i = 0; i < declarationQueue.size(); i++) {
            Token::TokenType _type = declarationList.at(declarationQueue[i]);
            if (_type == Token::VAR) {
                temp1.emplace_back(varList.at(declarationQueue[i]).second);
            }
            break;
        }
        if (curProgramBody->parent != nullptr && (temp1.size() != 0)) {
            functionDeclare->InSert("_" + prefix, temp1);
        }
    }
    Declaration::~Declaration()
    {

        // 删除 constList 中的值
        for (auto &entry : constList) {
            delete entry.second;
        }
        constList.clear();

        // 删除 varList 中的值
        for (auto &entry : varList) {
            // 检查地址是否已经删除过
            if (entry.second.second != nullptr) {
                // 如果地址尚未删除过，则删除它并将其添加到已删除地址的集合中
                delete entry.second.second;
            }
        }
        varList.clear();

        // 删除 subProgramList 中的值
        for (auto &entry : subProgramList) {
            delete entry.second;
        }
        subProgramList.clear();
    }

    ConstDeclare::ConstDeclare(ParseNode *const_variable_, string _idVal)
    {
        idVal = _idVal;
        isUsed = 0;
        type = GetConstTypeFromParseTree(const_variable_, constVal);
        lineNum = const_variable_->children[0]->lineNumber; // 都是终极符号，可以直接得到
    }
    ConstDeclare::~ConstDeclare()
    {
    }
    /// @brief 获取记录类型中的某个值的类型定义
    /// @param name
    /// @return 返回一个新的变量定义，这个定义属于记录
    VarDeclare *VarDeclare::GetRecordTypeOfName(string name)
    {
        if (recordList.find(name) == recordList.end()) {
            return nullptr;
        }
        return recordList.find(name)->second.second;
    }

    VarDeclare::VarDeclare(ParseNode *type_, string _idVal)
    {
        idVal = _idVal;
        type = GetVarTypeFromTypeNode(type_);
        isAssignment = 0;
        isUsed = 0;
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
                string start_value, end_value;
                Token::TokenType start_type, end_type;
                start_type = GetConstTypeFromParseTree(start_const_, start_value);
                end_type = GetConstTypeFromParseTree(end_const_, end_value);
                if (start_type != Token::INTEGER || end_type != Token::INTEGER) {
                    // 报错，必须是整数类型的常量
                    CompilerError::reportError(period_->children[0]->lineNumber, CompilerError::ErrorType::ARRAY_INDEX_NOT_INTEGER);
                    return;
                } else {
                    // 将字符串转换为数字，然后保存；
                    int start = stoi(start_value);
                    int end = stoi(end_value);
                    if (start <= end) {
                        dimension.emplace_back(pair<int, int>(start, end - start + 1));
                    } else {
                        // 起始下标一定要小于等于结束下标
                        CompilerError::reportError(period_->children[0]->lineNumber, CompilerError::ErrorType::ARRAY_INDEX_OUT_OF_RANGE);
                        return;
                    }
                }
                period_ = periodStack.Pop();
            }
        } else if (type == Token::RECORD) {
            // 解析 record
            ParseNode *var_declaration_ = type_->children[1];
            ReadVarDeclarations(var_declaration_, recordList, declarationList, declarationQueue);
            // 虽然是私有变量但是执行完毕之后是会改变其值的
        }
    }
    VarDeclare::~VarDeclare()
    {
        for (auto iter = recordList.begin(); iter != recordList.end();) {
            if (iter->second.second != nullptr) {
                delete iter->second.second;
            }
            iter->second.second = nullptr;
            iter = recordList.erase(iter);
        }
    }

    SubProgram::SubProgram(ParseNode *subprogram_declaration_)
    {
        ParseNode *subprogram_head_ = subprogram_declaration_->children[0];
        isUsed = 0;
        nestNum = curProgramBody->GetProgramLayer(); // 这里可以得到嵌套的层数
        ProgramBody *cur = curProgramBody;
        while (cur != nullptr && cur->parent != nullptr) {
            nestParList.emplace_back("_" + cur->prefix);
            cur = cur->parent;
        }
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
    }
    void SubProgram::SetSubProgram(ParseNode *subprogram_declaration_)
    {
        ParseNode *subprogram_head_ = subprogram_declaration_->children[0];
        Token::TokenType type = subprogram_head_->children[0]->token; // 判断是函数/过程
        if (type == Token::FUNCTION) {
            ParseNode *standard_type_ = subprogram_head_->children[4];
            returnType = standard_type_->children[0]->token;
        } else {
            returnType = Token::NULL_;
        }
        ParseNode *program_body_ = subprogram_declaration_->children[1];
        curSubProgram = this;
        programBody = new ProgramBody(subProgramId, program_body_, curSubProgram);
    }
    /// @brief 返回指定下标的参数列表的类型
    /// @param index 下标
    /// @return 参数类型，如果index过大会返回NULL_
    Token::TokenType SubProgram::GetParameterType(int index)
    {
        int num = 0;
        for (int i = 0; i < formalParameterList.size(); i++) {
            for (int j = 0; j < formalParameterList[i]->paraIdList.size(); j++) {
                if (num == index)
                    return formalParameterList[i]->type;
                num++;
            }
        }
        return Token::NULL_;
    }
    /**
     * @brief 返回指定位置是否是引用传参，是1 否0
     *
     * @param index
     * @return int 是1 否0
     */
    int SubProgram::IsVarParameterAtIndex(int index)
    {
        for (int i = 0; i < formalParameterList.size(); i++) {
            for (int j = 0; j < formalParameterList[i]->paraIdList.size(); j++) {
                if (formalParameterList[i]->flag == 1) // 引用传递
                    return 1;
                else
                    return 0;
            }
        }
        return 0;
    }
    SubProgram::~SubProgram()
    {
        if (programBody != nullptr)
            delete programBody;
        for (int i = 0; i < formalParameterList.size(); i++) {
            if (formalParameterList[i] != nullptr)
                delete formalParameterList[i];
        }
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
    /// @brief 如果全部语句都是空，那就返回1，因为可能推出空语句
    /// @return 为空返回1
    int Statement::IsEmpty()
    {
        if (whileStatement == nullptr &&
            ifStatement == nullptr &&
            assignStatement == nullptr &&
            subProgramCall == nullptr &&
            caseStatement == nullptr &&
            writeStatement == nullptr &&
            readStatement == nullptr &&
            statementList.size() == 0)
            return 1;
        return 0;
    }

    Statement::Statement(ParseNode *statement_)
    {
        // 注意这里可能推出了空，为空的时候不在构建Statment
        whileStatement = nullptr;
        ifStatement = nullptr;
        assignStatement = nullptr;
        subProgramCall = nullptr;
        caseStatement = nullptr;
        writeStatement = nullptr;
        readStatement = nullptr;
        if (statement_->children.size() == 0) {
            return;
        }
        ParseNode *node = statement_->children[0];
        statementType = node->token;
        if (node->token == Token::VARIABLE_) {
            assignStatement = new AssignStatement(statement_);
        } else if (node->token == Token::CALL_PROCEDURE_STATEMENT_) {
            subProgramCall = new SubProgramCall(statement_->children[0]);
        } else if (node->token == Token::COMPOUND_STATEMENT_) {
            ParseNode *compound_statement_ = statement_->children[0];
            ParseNode *statement_list_ = compound_statement_->children[1];
            Stack statementStack(statement_list_, 0, 2, 1, 0, Token::STATEMENT_, 1);
            ParseNode *statement_node_ = statementStack.Pop();
            while (statement_node_ != nullptr) {
                Statement *curStatement = new Statement(statement_node_);
                statementList.emplace_back(curStatement);
                statement_node_ = statementStack.Pop();
            }
        } else if (node->token == Token::IF) {
            ifStatement = new IfStatement(statement_);
        } else if (node->token == Token::CASE) {
            caseStatement = new CaseStatement(statement_);
        } else if (node->token == Token::_WRITE) {
            StatementisWrite = 1;
            writeStatement = new WriteStatement(statement_);
            StatementisWrite = 0;
        } else if (node->token == Token::_READ) {
            readStatement = new ReadStatement(statement_);
        } else {
            statementType = Token::WHILE;
            whileStatement = new WhileStatement(statement_);
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
                if (statementList[i] != nullptr)
                    delete statementList[i];
            }
            break;
        case Token::_WRITE:
            delete writeStatement;
            break;
        case Token::_READ:
            delete readStatement;
            break;
        default:
            break;
        }
    }

    Expression::Expression(ParseNode *expression_)
    {
        Token::TokenType nodeType = expression_->token;
        valueType = 0;
        isId = 0;
        isParentheses = 0;
        operand1 = nullptr;
        operand2 = nullptr;
        if (nodeType == Token::EXPRESSION_) {
            if (expression_->children.size() == 3) {
                // “=”、“<>”、“<”、“<=”、“>”、“>=” 比大小
                operand1 = new Expression(expression_->children[0]);
                operationType = expression_->children[1]->token;
                opration = expression_->children[1]->val;
                operand2 = new Expression(expression_->children[2]);
                if (!((operand1->type == Token::INTEGER || operand1->type == Token::REAL) &&
                      (operand2->type == Token::INTEGER || operand2->type == Token::REAL))) {
                    // 报错处理，这里必须是整数或者实数
                    CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER or REAL");
                    return;
                } else {
                    type = Token::BOLLEAN;
                }
            } else {
                operand1 = new Expression(expression_->children[0]);
                operand2 = nullptr;
                type = operand1->type;
                isId = operand1->isId;
            }
        } else if (nodeType == Token::SIMPLE_EXPRESSION_) {
            if (expression_->children.size() == 2) {
                operand1 = nullptr;
                operationType = Token::ADDOP;
                opration = expression_->children[0]->val;
                operand2 = new Expression(expression_->children[1]);
                if (!(operand2->type == Token::INTEGER || operand2->type == Token::REAL)) {
                    // 报错处理，这里必须是整数或者实数
                    CompilerError::reportError(expression_->children[0]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER or REAL");
                    return;
                } else {
                    type = operand2->type;
                }
            } else if (expression_->children.size() == 1) {
                operand1 = new Expression(expression_->children[0]);
                operand2 = nullptr;
                type = operand1->type;
                isId = operand1->isId;
            } else {
                // “十”、“一”和“or”
                operand1 = new Expression(expression_->children[0]);
                operationType = expression_->children[1]->token;
                opration = expression_->children[1]->val;
                operand2 = new Expression(expression_->children[2]);
                if (opration == "or") {
                    if (operand1->type == Token::BOLLEAN && operand2->type == Token::BOLLEAN) {
                        type = Token::BOLLEAN;
                    } else if (operand1->type == Token::INTEGER && operand2->type == Token::INTEGER) {
                        type = Token::INTEGER;
                    } else {
                        // FIXME:报错处理，两边类型必须相同，都是boolean或者两边都是int，否则报错
                        CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::INCOMPATIBLE_OPERAND_TYPES, "BOOLEAN or INTEGER");

                        return;
                    }
                } else {
                    if (!((operand1->type == Token::INTEGER || operand1->type == Token::REAL) &&
                          (operand2->type == Token::INTEGER || operand2->type == Token::REAL))) {
                        // 报错处理，这里必须是整数或者实数
                        CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER or REAL");
                        return;
                    } else {
                        if (operand1->type == Token::REAL || operand2->type == Token::REAL) {
                            type = Token::REAL; // 其中一个是实数就是实数
                        } else {
                            type = Token::INTEGER;
                        }
                    }
                }
            }
        } else if (nodeType == Token::TERM_) {
            if (expression_->children.size() == 3) {
                // “*”、“/"'、"div”、"mod”和“and”
                operand1 = new Expression(expression_->children[0]);
                operationType = expression_->children[1]->token;
                opration = expression_->children[1]->val;
                operand2 = new Expression(expression_->children[2]);
                if (opration == "and") {
                    if (operand1->type == Token::BOLLEAN && operand2->type == Token::BOLLEAN) {
                        type = Token::BOLLEAN;
                    } else if (operand1->type == Token::INTEGER && operand2->type == Token::INTEGER) {
                        type = Token::INTEGER;
                    } else {
                        // FIXME:报错处理，这里必须两边都是布尔或者两边都是int
                        CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::INCOMPATIBLE_OPERAND_TYPES, "BOOLEAN or INTEGER");
                        return;
                    }
                } else if (opration == "div" || opration == "mod") {
                    if (!(operand1->type == Token::INTEGER) && (operand2->type == Token::INTEGER)) {
                        // 报错处理，这里必须是整数类型
                        CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER");
                        return;
                    } else {
                        type = Token::INTEGER;
                    }
                } else {
                    if (!((operand1->type == Token::INTEGER || operand1->type == Token::REAL) &&
                          (operand2->type == Token::INTEGER || operand2->type == Token::REAL))) {
                        // 报错处理，这里必须是整数或者实数
                        CompilerError::reportError(expression_->children[1]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER or REAL");
                        return;
                    } else if (operand1->type == Token::REAL || operand2->type == Token::REAL) {
                        type = Token::REAL; // 其中一个是实数就是实数
                    } else {
                        type = Token::INTEGER;
                    }
                }
            } else {
                operand1 = new Expression(expression_->children[0]);
                operand2 = nullptr;
                type = operand1->type;
                isId = operand1->isId;
            }
        } else if (nodeType == Token::FACTOR_) {
            operand1 = nullptr;
            operand2 = nullptr;
            Token::TokenType factorType = expression_->children[0]->token;
            if (factorType == Token::UNSIGN_CONST_VARIABLE_) {
                ParseNode *unsign_const_variable_ = expression_->children[0];
                value = unsign_const_variable_->children[0]->val;
                switch (unsign_const_variable_->children[0]->token) {
                case Token::INT_NUM:
                    type = Token::INTEGER;
                    break;
                case Token::FLOAT_NUM:
                    type = Token::REAL;
                    break;
                case Token::LETTER:
                    // 对类型进行检测 只有是WRITE语句的时候这个长度才可能大于1；
                    // 也就是对value的值的长度进行检测，这里需要知道当前的语句是什么语句。
                    if (value.length() > 1) {
                        if (StatementisWrite == 0) {
                            // 报错，字符长度不对
                            CompilerError::reportError(expression_->children[0]->lineNumber, CompilerError::ErrorType::CHAR_LENGTH_ERROR);
                            return;
                        }
                        type = Token::LETTER;
                    } else
                        type = Token::CHAR;
                    break;
                default:
                    break;
                }
                valueType = 1;
            } else if (factorType == Token::VARIABLE_) {
                variantReference = new VariantReference(expression_->children[0], 0);
                isId = 1;
                type = variantReference->GetFinalType();
                valueType = 2;
            } else if (factorType == Token::ID) {
                subProgramCall = new SubProgramCall(expression_);
                type = subProgramCall->GetReturnType();
                if (type == Token::NULL_) {
                    // 报错不能没有返回值
                    CompilerError::reportError(expression_->children[0]->lineNumber, CompilerError::ErrorType::FUNCTION_NOT_FOUND, subProgramCall->subProgramId.first + "has no return value");
                    return;
                }
                valueType = 3;
            } else if (factorType == Token::LEFT_PARENTHESES) {
                operand1 = new Expression(expression_->children[1]);
                isParentheses = 1;
                type = operand1->type;
            } else if (factorType == Token::NOT) {
                operationType = expression_->children[0]->token;
                opration = expression_->children[0]->val;
                operand2 = new Expression(expression_->children[1]);
                type = operand2->type;
                if (type != Token::INTEGER && type != Token::BOLLEAN) {
                    // FIXME:报错处理，not 后面不能是字符或者字符串类型
                    CompilerError::reportError(expression_->children[0]->lineNumber, CompilerError::ErrorType::OPERAND_TYPE_MISMATCH, "INTEGER or BOOLEAN");
                    return;
                }
            }
        }
    }
    Expression::~Expression()
    {
        if (valueType == 2) {
            delete variantReference;
        } else if (valueType == 3) {
            delete subProgramCall;
        }
        if (operand1 != nullptr) {
            delete operand1;
        }
        if (operand2 != nullptr) {
            delete operand2;
        }
    }
    /// @brief 构造函数
    /// @param variable_ 指向variable
    /// @param _isLeft 1代表左值 0 代表右值
    VariantReference::VariantReference(ParseNode *variable_, int _isLeft)
    {
        isLeft = _isLeft;
        isFunction = 0;
        isArrayAtRecordEnd = 0;
        prefix = "";
        isCurId = 0;
        isGlobal = 0;
        lineNum = variable_->children[0]->lineNumber;
        structName = "";
        varDeclare = nullptr;
        string idName = variable_->children[0]->val;
        isFormalParameter = FindDeclarationInSubProgram(idName, idType);
        if (isFormalParameter) {
            id = idName;
        } else {
            ProgramBody *cur = nullptr;
            cur = FindDeclaration(idName, lineNum);
            if (cur == nullptr) {
                // 报错 使用了没有声明的变量，并返回，不执行下面的语句
                CompilerError::reportError(lineNum, CompilerError::ErrorType::UNDEFINED_VARIABLE, idName);
                return;
            }
            // 寻找idName，判断其类型，最开始的id
            map<string, Token::TokenType> list = cur->declaration->declarationList;

            idType = list.find(idName)->second;
            id = idName;
            prefix = cur->prefix;
            switch (idType) {
            case Token::VAR: {
                varDeclare = cur->declaration->varList.find(idName)->second.second;
                if (isLeft) {
                    varDeclare->SetUsed();
                    varDeclare->SetAssignment();
                }
                // TODO: 是否开启赋初值的检测
                // } else if (varDeclare->IsAssignment() == 0) {
                //     // :报错，使用了一个没有赋值的变量
                //     CompilerError::reportError(lineNum, CompilerError::ErrorType::UNASSIGNED_VARIABLE, idName);
                //     return;
                // }
                idType = varDeclare->GetVarDeclareType();
                if (varDeclare->IsArray())
                    idType = Token::ARRAY;
                break;
            }
            case Token::CONST:
                if (isLeft) {
                    // 报错，左值不可以是常量，常量不可以修改
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::CONST_CANNOT_BE_ASSIGNED, idName);
                    return;
                } else {
                    ConstDeclare *constDeclare = cur->declaration->constList.find(idName)->second;
                    constDeclare->SetUsed();
                    idType = constDeclare->GetConstDeclareType();
                    isGlobal = 1;
                }
                break;
            case Token::FUNCTION:
                isFunction = 1;
                idType = cur->declaration->subProgramList.find(idName)->second->GetReturnType();
                if (isLeft && cur != curProgramBody->parent) {
                    // 报错 当前作用域下的Function才可以作为一个左赋值语句，这里对应的是函数返回语句
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::FUNCTION_NOT_FOUND, idName);
                    return;
                }
                if (isLeft == 0 && cur->declaration->subProgramList.find(idName)->second->formalParameterList.size() != 0) {
                    // 报错 一个为右值的函数变量不能有为需要接受参数的函数
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::FUNCTION_PARAMETER_MISMATCH, idName);
                    return;
                }
                break;
            default:
                break;
            }
            if (isFunction == 1) {
            } else if (cur == curProgramBody)
                isCurId = 1;
            else
                structName = "_" + cur->prefix;
        }
        finalType = idType;

        ParseNode *id_varparts_ = variable_->children[1];
        Stack idVarpartsStack(id_varparts_, 0, 1, 0, -1, Token::ID_VARPART_);
        ParseNode *id_varpart_ = idVarpartsStack.Pop();
        if (finalType == Token::RECORD || finalType == Token::ARRAY) {
            if (id_varpart_ == nullptr) {
                // 报错，不可以直接对记录 或者 数组赋值
                CompilerError::reportError(lineNum, CompilerError::ErrorType::RECORD_OR_ARRAY_CANNOT_BE_ASSIGNED, idName);
                return;
            }
        } else {
            if (id_varpart_ != nullptr) {
                // 报错，只有记录和数组才可能有id_varpart
                CompilerError::reportError(lineNum, CompilerError::ErrorType::RECORD_FIELD_NOT_FOUND, idName);
                return;
            }
        }
        if (finalType == Token::RECORD) {
            while (id_varpart_ != nullptr) {
                if (finalType == Token::RECORD) {
                    if (id_varpart_->children[0]->token != Token::DOT) {
                        // 报错
                        CompilerError::reportError(lineNum, CompilerError::ErrorType::RECORD_FIELD_NOT_FOUND, idName);
                        return;
                    } else {
                        idName = id_varpart_->children[1]->val;
                        recordPart.emplace_back(idName);
                        varDeclare = varDeclare->GetRecordTypeOfName(idName);
                        finalType = varDeclare->GetVarDeclareType();
                        if (varDeclare->IsArray()) { // 如果为数组将其转换为数组类型
                            finalType = Token::ARRAY;
                            isArrayAtRecordEnd = 1;
                        }
                    }
                } else if (finalType == Token::ARRAY) {
                    if (id_varpart_->children[0]->token != Token::LEFT_MEDIUM_PARENTHESES) {
                        // 报错
                        CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_MISMATCH, "missing LEFT_MEDIUM_PARENTHESES ");
                        return;
                    } else {
                        ParseNode *expression_list_ = id_varpart_->children[1];
                        Stack expressionListStack(expression_list_, 0, 2, 1, 0, Token::EXPRESSION_);
                        if (expressionListStack.GetStackLen() != varDeclare->GetArrayDimension()) {
                            // expression的数目和数组维度不匹配
                            CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_MISMATCH), "dimension mismatch";
                            return;
                        } else {
                            ParseNode *expression_ = expressionListStack.Pop();
                            while (expression_ != nullptr) {
                                Expression *expression = new Expression(expression_);
                                if (expression->GetValueToken() != Token::INTEGER) {
                                    // 报错，需要为INTEGER
                                    CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_NOT_INTEGER);
                                    return;
                                }
                                arrayPart.emplace_back(expression);
                                expression_ = expressionListStack.Pop();
                            }
                            finalType = varDeclare->GetVarDeclareType(); // 返回的是标准类型
                        }
                    }
                } else if (finalType == Token::INTEGER ||
                           finalType == Token::BOLLEAN ||
                           finalType == Token::REAL ||
                           finalType == Token::CHAR) {
                    // 报错，接下来的变量不能有id_varpart
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::VARIABLE_NOT_ALLOWED, idName);
                    return;
                } else if (finalType == Token::NULL_) {
                    // 报错，没有在记录中找到这个id名字
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::RECORD_FIELD_NOT_FOUND, idName);
                    return;
                }
                id_varpart_ = idVarpartsStack.Pop();
            }
        } else if (finalType == Token::ARRAY) {
            if (id_varpart_->children[0]->token != Token::LEFT_MEDIUM_PARENTHESES) {
                // 报错，已经是数组类型了不可能是其他
                CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_MISMATCH, "missing LEFT_MEDIUM_PARENTHESES ");
                return;
            } else {
                ParseNode *expression_list_ = id_varpart_->children[1];
                Stack expressionListStack(expression_list_, 0, 2, 1, 0, Token::EXPRESSION_);
                if (expressionListStack.GetStackLen() != varDeclare->GetArrayDimension()) {
                    // expression的数目和数组维度不匹配
                    CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_MISMATCH, "dimension mismatch");
                    return;
                } else {
                    ParseNode *expression_ = expressionListStack.Pop();
                    while (expression_ != nullptr) {
                        Expression *expression = new Expression(expression_);
                        if (expression->GetValueToken() != Token::INTEGER) {
                            // 报错，需要为INTEGER
                            CompilerError::reportError(lineNum, CompilerError::ErrorType::ARRAY_INDEX_NOT_INTEGER);
                            return;
                        }
                        arrayPart.emplace_back(expression);
                        expression_ = expressionListStack.Pop();
                    }
                    finalType = varDeclare->GetVarDeclareType();
                }
            }
        }
    }
    VariantReference::~VariantReference()
    {
        for (int i = 0; i < arrayPart.size(); i++) {
            if (arrayPart[i] != nullptr)
                delete arrayPart[i];
        }
    }
    /// @brief 由一个id推到出的，出现再for语句中
    /// @param idNode
    VariantReference::VariantReference(ParseNode *idNode)
    {
        isLeft = 1;
        isArrayAtRecordEnd = 0;
        isFunction = 0;
        isFormalParameter = 0;
        isCurId = 0;
        isGlobal = 0;
        lineNum = idNode->lineNumber;
        structName = "";
        prefix = "";
        string idName = idNode->val;
        isFormalParameter = FindDeclarationInSubProgram(idName, idType);
        if (isFormalParameter) {
            id = idName;
            finalType = idType;
            return;
        }
        ProgramBody *cur = FindDeclaration(idName, lineNum);
        if (cur == nullptr) {
            return;
        }
        if (cur == curProgramBody)
            isCurId = 1;
        else
            structName = "_" + cur->prefix;

        map<string, Token::TokenType> list = cur->declaration->declarationList;

        idType = list.find(idName)->second;
        id = idName;
        prefix = cur->prefix;
        if (idType != Token::VAR) {
            // 报错，只能是变量
            CompilerError::reportError(lineNum, CompilerError::ErrorType::VARIABLE_NOT_ALLOWED, idName + " is not a variable");
            return;
        }
        VarDeclare *varDeclare = cur->declaration->varList.find(idName)->second.second;
        if (varDeclare->IsArray() || varDeclare->GetVarDeclareType() == Token::RECORD) {
            // 报错，只能是普通类型
            CompilerError::reportError(lineNum, CompilerError::ErrorType::VARIABLE_NOT_ALLOWED, idName + " shouldn't be an array or record");
            return;
        }
        idType = varDeclare->GetVarDeclareType();
        varDeclare->SetUsed();
        varDeclare->SetAssignment();
        finalType = idType;
    }

    SubProgramCall::SubProgramCall(ParseNode *call_subprogram_statement_)
    {
        subprogram = nullptr;
        string name = call_subprogram_statement_->children[0]->val;
        int line = call_subprogram_statement_->children[0]->lineNumber;
        subProgramId = pair<string, int>(name, line);
        ProgramBody *cur = FindDeclaration(name, line);
        if (cur == nullptr) {
            return;
        }

        map<string, SubProgram *> subList = cur->declaration->subProgramList;
        if (subList.find(name) == subList.end()) {
            // 报错找到了这个变量但是不是函数名
            CompilerError::reportError(line, CompilerError::ErrorType::FUNCTION_NOT_FOUND, name + "should be a function name");
            return;
        }
        subprogram = subList.find(name)->second;
        returnType = subprogram->GetReturnType();
        subprogram->SetUsed();
        if (call_subprogram_statement_->children.size() == 1)
            return;
        ParseNode *expression_list_ = call_subprogram_statement_->children[2];
        Stack expressionListStack(expression_list_, 0, 2, 1, 0, Token::EXPRESSION_);
        if (expressionListStack.GetStackLen() != GetParameterNums(subprogram->formalParameterList)) {
            // expression的数目和参数长度不匹配
            CompilerError::reportError(line, CompilerError::ErrorType::PARAMETER_NUMBER_MISMATCH, name + "parameter number mismatch");
            return;
        } else {
            ParseNode *expression_ = expressionListStack.Pop();
            int i = 0;
            while (expression_ != nullptr) {
                Expression *expression = new Expression(expression_);
                if (expression->GetValueToken() != subprogram->GetParameterType(i)) {
                    // 报错，参数类不匹配
                    CompilerError::reportError(line, CompilerError::ErrorType::PARAMETER_TYPE_MISMATCH, name + "parameter type mismatch");
                    return;
                }
                if (subprogram->IsVarParameterAtIndex(i) && expression->isId == 0) {
                    // 是引用传参且表达式的值不是单独的ID，那么就要报错
                    // 报错，引用传参的函数调用必须是一个id类型，不能是表达式
                    CompilerError::reportError(line, CompilerError::ErrorType::VAR_PARAMETER_NOT_ID, name + "var parameter must be an id");
                    return;
                }
                paraList.emplace_back(expression);
                i++;
                expression_ = expressionListStack.Pop();
            }
        }
    }
    SubProgramCall::~SubProgramCall()
    {
        for (int i = 0; i < paraList.size(); i++) {
            if (paraList[i] != nullptr)
                delete paraList[i];
        }
    }

    WhileStatement::WhileStatement(ParseNode *while_statement_)
    {
        initAssign = nullptr;
        isDownto = -1;
        whileType = while_statement_->children[0]->token;
        ParseNode *statement_node_ = nullptr;
        Statement *statement_ = nullptr;
        if (whileType == Token::WHILE) {
            condition = new Expression(while_statement_->children[1]);
            if (condition->GetValueToken() != Token::BOLLEAN) {
                // 不为布尔类型报错
                CompilerError::reportError(while_statement_->children[1]->lineNumber, CompilerError::ErrorType::CONDITION_NOT_BOOLEAN, "while condition must be boolean");
                return;
            }
            statement_ = new Statement(while_statement_->children[3]);
            if (statement_->IsEmpty()) {
                delete statement_;
            } else {
                statementList.emplace_back(statement_);
            }
        } else if (whileType == Token::REPEAT) {
            condition = new Expression(while_statement_->children[3]);
            if (condition->GetValueToken() != Token::BOLLEAN) {
                // 不为布尔类型报错
                CompilerError::reportError(while_statement_->children[3]->lineNumber, CompilerError::ErrorType::CONDITION_NOT_BOOLEAN, "repeat condition must be boolean");
                return;
            }
            ParseNode *statement_list_ = while_statement_->children[1]; // 得到语句列表
            Stack statementStack(statement_list_, 0, 2, 1, 0, Token::STATEMENT_, 1);
            statement_node_ = statementStack.Pop();
            while (statement_node_ != nullptr) {
                Statement *curStatement = new Statement(statement_node_);
                statementList.emplace_back(curStatement);
                statement_node_ = statementStack.Pop();
            }
        } else if (whileType == Token::FOR) {
            ParseNode *idNode = while_statement_->children[1];
            ParseNode *expression1_ = while_statement_->children[3];
            initAssign = new AssignStatement(idNode, expression1_);
            if (initAssign->leftVal->GetFinalType() != Token::INTEGER) {
                // 报错，必须是整数
                CompilerError::reportError(while_statement_->children[1]->lineNumber, CompilerError::ErrorType::FOR_LOOP_VAR_NOT_INTEGER);
                return;
            }
            ParseNode *updown_ = while_statement_->children[4];
            if (updown_->children[0]->token == Token::DOWNTO)
                isDownto = 1;
            else
                isDownto = 0;
            condition = new Expression(while_statement_->children[5]);
            if (condition->GetValueToken() != Token::INTEGER) {
                // 不为整数类型报错
                CompilerError::reportError(while_statement_->children[5]->lineNumber, CompilerError::ErrorType::FOR_LOOP_CONDITION_NOT_INTEGER);
                return;
            }
            statement_ = new Statement(while_statement_->children[7]);
            if (statement_->IsEmpty()) {
                delete statement_;
            } else {
                statementList.emplace_back(statement_);
            }
        }
    }
    WhileStatement::~WhileStatement()
    {
        if (initAssign)
            delete initAssign;
        if (condition)
            delete condition;
        for (int i = 0; i < statementList.size(); i++) {
            delete statementList[i];
        }
    }

    IfStatement::IfStatement(ParseNode *if_statement_)
    {
        ParseNode *expression_ = if_statement_->children[1];
        ParseNode *statement_ = if_statement_->children[3];
        ParseNode *else_part_ = if_statement_->children[4];
        condition = nullptr;
        thenStatement = nullptr;
        elseStatement = nullptr;
        condition = new Expression(expression_);
        if (condition->GetValueToken() != Token::BOLLEAN) {
            // 不为布尔类型报错
            CompilerError::reportError(if_statement_->children[0]->lineNumber, CompilerError::ErrorType::CONDITION_NOT_BOOLEAN, "if condition must be boolean");
            return;
        }
        thenStatement = new Statement(statement_);
        if (thenStatement->IsEmpty()) {
            delete thenStatement;
            thenStatement = nullptr;
        }
        if (else_part_->children.size() == 0)
            return;
        statement_ = else_part_->children[1];
        elseStatement = new Statement(statement_);
        if (elseStatement->IsEmpty()) {
            delete elseStatement;
            elseStatement = nullptr;
        }
    }
    IfStatement::~IfStatement()
    {
        if (condition)
            delete condition;
        if (thenStatement)
            delete thenStatement;
        if (elseStatement)
            delete elseStatement;
    }

    AssignStatement::AssignStatement(ParseNode *assign_statement_)
    {
        leftVal = new VariantReference(assign_statement_->children[0], 1);
        rightVal = new Expression(assign_statement_->children[2]);
        if (leftVal->GetFinalType() != rightVal->GetValueToken()) {
            if (!((leftVal->GetFinalType() == Token::REAL) &&
                  rightVal->GetValueToken() == Token::INTEGER)) { // int 可以 赋值给 real
                // 类型不同报错处理，这里需要修改
                CompilerError::reportError(assign_statement_->children[1]->lineNumber, CompilerError::ErrorType::ASSIGNMENT_TYPE_MISMATCH, "left value type and right value type mismatch");
                return;
            }
        }
    }
    AssignStatement::AssignStatement(ParseNode *idNode, ParseNode *expression_)
    {
        leftVal = new VariantReference(idNode);
        rightVal = new Expression(expression_);
    }
    AssignStatement::~AssignStatement()
    {
        delete leftVal;
        delete rightVal;
    }
    Branch::Branch(ParseNode *branch_)
    {
        // branch -> const_lilst : statement
        // const_list -> const_list , const | const
        // const -> +id | -id | id | +num | -num | num | 'letter'
        statement = new Statement(branch_->children[2]);
        if (statement->IsEmpty()) {
            delete statement;
            statement = nullptr;
        }
        ParseNode *const_list_ = branch_->children[0];
        Stack constListStack(const_list_, 0, 2, 1, 0, Token::CONST_LIST_);
        ParseNode *const_ = constListStack.Pop();
        while (const_ != nullptr) {
            // ConstDeclare::ConstDeclare(ParseNode *const_variable_)
            ConstDeclare *const_val = new ConstDeclare(const_, "");
            constList.emplace_back(const_val);
            const_ = constListStack.Pop();
        }
    }
    Branch::~Branch()
    {
        delete statement;
        for (int i = 0; i < constList.size(); i++) {
            delete constList[i];
        }
    }
    CaseStatement::CaseStatement(ParseNode *case_statement_)
    {
        condition = new Expression(case_statement_->children[1]);
        // 判断casebody是否为空
        if (case_statement_->children.size() == 0) {
            // 为空则不用构造
            // branchList = nullptr;
        } else {
            // 不为空则构造
            ParseNode *branch_list_ = case_statement_->children[3];
            Stack branchListStack(branch_list_, 0, 2, 1, 0, Token::BRANCH_);
            ParseNode *branch_ = branchListStack.Pop();
            while (branch_ != nullptr) {
                Branch *curBranch = new Branch(branch_);
                branchList.emplace_back(curBranch);
                branch_ = branchListStack.Pop();
            }
        }
    }
    CaseStatement::~CaseStatement()
    {
        delete condition;
        for (int i = 0; i < branchList.size(); i++) {
            delete branchList[i];
        }
    }
    WriteStatement::WriteStatement(ParseNode *writestatement)
    {
        ParseNode *expression_list_ = writestatement->children[2];
        Stack expressionListStack(expression_list_, 0, 2, 1, 0, Token::EXPRESSION_);
        ParseNode *expression_ = expressionListStack.Pop();
        int i = 0;
        while (expression_ != nullptr) {
            Expression *expression = new Expression(expression_);
            expressionList.emplace_back(expression);
            i++;
            expression_ = expressionListStack.Pop();
        }
    }
    WriteStatement::~WriteStatement()
    {
        for (int i = 0; i < expressionList.size(); i++) {
            delete expressionList[i];
        }
    }
    ReadStatement::ReadStatement(ParseNode *read_statement_)
    {
        ParseNode *variable_list_ = read_statement_->children[2];
        Stack variableListStack(variable_list_, 0, 2, 1, 0, Token::VARIABLE_);
        ParseNode *variable_ = variableListStack.Pop();
        while (variable_ != nullptr) {
            VariantReference *variable = new VariantReference(variable_, 1);
            variantList.emplace_back(variable);
            variable_ = variableListStack.Pop();
        }
    }
    ReadStatement::~ReadStatement()
    {
        for (int i = 0; i < variantList.size(); i++) {
            delete variantList[i];
        }
    }
#pragma region 遍历声明相关节点树
    void ReadVarDeclarations(ParseNode *var_declarations_, map<string, pair<int, VarDeclare *>> &varList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue)
    {
        if (var_declarations_->children.size() != 0) {
            ParseNode *var_declaration_ = var_declarations_;
            if (var_declarations_->children[0]->token == Token::VAR) {
                var_declaration_ = var_declarations_->children[1];
            }
            Stack typeStack(var_declaration_, 0, 4, 3, 2, Token::TYPE_);
            Stack identifierListStack(var_declaration_, 0, 2, 3, 0, Token::IDENTIFIER_LIST_);
            ParseNode *type_ = typeStack.Pop();
            ParseNode *identifier_list_ = identifierListStack.Pop();
            while (type_ != nullptr) {
                Stack idStack(identifier_list_, 0, 2, 1, 0, Token::ID);
                ParseNode *idNode = idStack.Pop();
                while (idNode != nullptr) {
                    if (declarationList.find(idNode->val) != declarationList.end()) {
                        // 之前有声明过这个变量，这里要报错
                        // 报错变量重定义
                        CompilerError::reportError(idNode->lineNumber, CompilerError::ErrorType::REDEFINED_VARIABLE, idNode->val);
                        return;
                    }
                    VarDeclare *varDeclare = new VarDeclare(type_, idNode->val);
                    pair<int, VarDeclare *> temp = pair<int, VarDeclare *>(idNode->lineNumber, varDeclare);
                    varList.insert(pair<string, pair<int, VarDeclare *>>(idNode->val, temp));
                    declarationList.insert(pair<string, Token::TokenType>(idNode->val, Token::VAR));
                    declarationQueue.emplace_back(idNode->val);
                    idNode = idStack.Pop();
                }
                type_ = typeStack.Pop();
                identifier_list_ = identifierListStack.Pop();
            }
        }
    }
    void ReadConstDeclarations(ParseNode *const_declarations_, map<string, ConstDeclare *> &constList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue)
    {
        if (const_declarations_->children.size() != 0) {
            ParseNode *const_declaration_ = const_declarations_->children[1];
            Stack idStack(const_declaration_, 0, 2, 3, 0, Token::ID);
            Stack constVariableStack(const_declaration_, 0, 4, 3, 2, Token::CONST_VARIABLE_);
            ParseNode *idNode = idStack.Pop();
            ParseNode *const_variable = constVariableStack.Pop();
            while (idNode != nullptr) {
                if (declarationList.find(idNode->val) != declarationList.end()) {
                    // 之前有声明过这个变量，这里要报错
                    // 报错常量重定义
                    CompilerError::reportError(idNode->lineNumber, CompilerError::ErrorType::REDEFINED_VARIABLE, idNode->val);
                    return;
                }
                ConstDeclare *constDeclare = new ConstDeclare(const_variable, idNode->val);
                constList.insert(pair<string, ConstDeclare *>(idNode->val, constDeclare));
                declarationList.insert(pair<string, Token::TokenType>(idNode->val, Token::CONST));
                declarationQueue.emplace_back(idNode->val);

                idNode = idStack.Pop();
                const_variable = constVariableStack.Pop();
            }
        }
    }
    void ReadSubProgramDeclarations(ParseNode *subprogram_declarations_, map<string, SubProgram *> &subProgramList, map<string, Token::TokenType> &declarationList, vector<string> &declarationQueue)
    {
        if (subprogram_declarations_->children.size() != 0) {
            Stack subprogramDeclarationStack(subprogram_declarations_, 0, 1, 0, -1, Token::SUBPROGRAM_DECLARATION_);
            ParseNode *subprogram_declaration_ = subprogramDeclarationStack.Pop();
            ParseNode *subprogram_head = subprogram_declaration_->children[0];
            while (subprogram_declaration_ != nullptr) {
                subprogram_head = subprogram_declaration_->children[0];
                string name = subprogram_head->children[1]->val;
                if (declarationList.find(name) != declarationList.end()) {
                    // 之前有声明过这个变量，这里要报错
                    // 报错函数重定义
                    CompilerError::reportError(subprogram_head->children[1]->lineNumber, CompilerError::ErrorType::REDEFINED_VARIABLE, name);
                    return;
                }
                SubProgram *subProgram = new SubProgram(subprogram_declaration_);
                subProgramList.insert(pair<string, SubProgram *>(name, subProgram));
                declarationList.insert(pair<string, Token::TokenType>(name, Token::FUNCTION));
                declarationQueue.emplace_back(name);
                subProgram->SetSubProgram(subprogram_declaration_);
                subprogram_declaration_ = subprogramDeclarationStack.Pop();
            }
        }
    }
#pragma endregion

    /// @brief 获取当前const的节点的类型
    /// @param const_variable_  const节点对应的值
    /// @param value 当前的const对应的值，字符串类型
    /// @return 返回 INTEGER REAL CHAR 这些Token
    Token::TokenType GetConstTypeFromParseTree(ParseNode *const_variable_, string &value)
    {
        // 注意如果为嵌套的定义则需要进入到 curProgramBody中寻找。
        ParseNode *item = nullptr;
        value = "";
        if (const_variable_->children.size() == 2) {
            // 跳过 + - 符号
            value += const_variable_->children[0]->val; // + - 符号
            item = const_variable_->children[1];
        } else if (const_variable_->children.size() == 1) {
            item = const_variable_->children[0];
        }
        if (item != nullptr) {
            if (item->token != Token::ID) {
                value += item->val;
                Token::TokenType token = Token::NULL_;
                switch (item->token) {
                case Token::INT_NUM:
                    token = Token::INTEGER;
                    break;
                case Token::FLOAT_NUM:
                    token = Token::REAL;
                    break;
                case Token::LETTER:
                    if (value.size() == 1)
                        token = Token::CHAR;
                    else
                        token = Token::LETTER;
                    break;
                default:
                    break;
                }
                return token;
            } else {
                // 此时不为 为ID，这个ID必须是之前定义过的，且必须是常量
                string idName = item->val;

                ProgramBody *cur = FindDeclaration(idName, item->lineNumber);
                if (cur == nullptr) {
                    return Token::NULL_;
                }

                map<string, ConstDeclare *> constList = cur->declaration->constList;
                if (constList.find(idName) != constList.end()) {
                    // 找到了这个值
                    ConstDeclare *constId = constList.find(idName)->second;
                    value += item->val;
                    return constId->GetConstDeclareType();
                } else {
                    // 报错找到了这个变量但是不是常量
                    CompilerError::reportError(item->lineNumber, CompilerError::ErrorType::CONST_NOT_FOUND, idName + " is not a const variable");
                    return Token::NULL_;
                }
            }
            // 出现错误，item理论上不可能为nullptr，可能是语法建树问题
        }
        return Token::NULL_;
    }

    /// @brief 沿着定义链寻找变量
    /// @param idName 变量的名字
    /// @return 返回这个变量所在的定义域
    ProgramBody *FindDeclaration(string idName, int lineNum)
    {
        ProgramBody *cur = curProgramBody;
        while (cur != nullptr) {
            map<string, Token::TokenType> list = cur->declaration->declarationList;
            if (list.find(idName) != list.end()) {
                // 找到了这个值
                return cur;
            }
            cur = cur->parent;
        }
        // 没有找到就要报错，因为const variable必须是一个const类型的变量
        CompilerError::reportError(lineNum, CompilerError::ErrorType::CONST_NOT_FOUND, idName + " is not found in the declaration list");
        return nullptr;
    }
    /// @brief 在当前的作用域的参数列表中查找这个id名字
    /// @param idName
    /// @return 0代表不是函数参数；1代表值传递；2代表引用传递
    int FindDeclarationInSubProgram(string idName, Token::TokenType &_type)
    {
        if (curSubProgram == nullptr)
            return 0;
        for (int i = 0; i < curSubProgram->formalParameterList.size(); i++) {
            for (int j = 0; j < curSubProgram->formalParameterList[i]->paraIdList.size(); j++) {
                if (idName == curSubProgram->formalParameterList[i]->paraIdList[j].first) {
                    _type = curSubProgram->formalParameterList[i]->type;
                    if (curSubProgram->formalParameterList[i]->flag) // 引用传递
                        return 2;
                    else
                        return 1;
                }
            }
        }
        return 0;
    }
    int GetParameterNums(vector<FormalParameter *> formalParameterList)
    {
        int num = 0;
        for (int i = 0; i < formalParameterList.size(); i++) {
            num += formalParameterList[i]->paraIdList.size();
        }
        return num;
    }

} // namespace AST
