/**
 * @file CodeGeneration.cpp
 * @author z_8_3_8
 * @brief AST To C Code
 * @version 0.0.1
 * @date 2024-03-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "../include/CodeGeneration.h"

namespace C_GEN
{
    C_Generater::C_Generater()
    {
        this->targetCodeStream.clear();
        this->ast = nullptr;
        this->outPutPath = "";
        this->generationType = Token::GenerationType::C;
    }

    C_Generater::~C_Generater(){};

    void C_Generater::run()
    {
        if (ast == nullptr)
        {
            std::cout << "ERROR::No AST For Generater" << std::endl;
            return;
        }

        if (this->generationType == Token::GenerationType::C)
        {
            pTargetCodeGen = new C_Code();
        }
        else if (this->generationType == Token::GenerationType::JAVA)
        {
            JAVA_Generate();
        }
        else if (this->generationType == Token::GenerationType::PYTHON)
        {
            PY_Generate();
        }

        targetCodeStream = pTargetCodeGen->GenerateTargetCode(outPutPath, ast);

        std::cout << targetCodeStream << std::endl;
    }

    std::string C_Code::GenerateTargetCode(std::string &outPutPath, AST::Program *ast)
    {
        outPutPath = ProcProgramHead(ast->GetProgramHead());
        targetCode << "#define bool int\n#define true 1\n#define false 0\n";
        return ProcProgramBody(ast->GetProgramBody());
    }

    std::string C_Code::ProcProgramHead(AST::ProgramHead *programHead)
    {
        return programHead->GetProgramId();
    }

    // main
    std::string C_Code::ProcProgramBody(AST::ProgramBody *programBody)
    {
        ProcDeclaration(programBody->GetDeclaration(), programBody->GetPrefix());
        targetCode << string("int main()\n");
        ProcStateMent(programBody->statementList, "");
        return targetCode.str();
    }

    // subprogrtam
    void C_Code::ProcProgramBody(AST::ProgramBody *programBody, std::string SubProgramDefine)
    {
        ProcDeclaration(programBody->GetDeclaration(), programBody->GetPrefix());
        targetCode << SubProgramDefine;
        ProcStateMent(programBody->statementList, "");
    }

    void C_Code::ProcStateMent(vector<AST::Statement *> &statementList, std::string extra)
    {
        targetCode << string("{\n");
        for (auto it : statementList)
        {
            switch (it->statementType)
            {
            case Token::TokenType::WHILE:
                ProcWhileStateMent(it->whileStatement);
                break;

            case Token::TokenType::CASE:
                break;

            case Token::TokenType::IF:
                ProcIfStateMent(it->ifStatement);
                break;

            case Token::TokenType::VARIABLE_:
                ProcAssignStateMent(it->assignStatement);
                targetCode << ";\n";
                break;

            case Token::TokenType::CALL_PROCEDURE_STATEMENT_:
                ProcSubProgramCallStateMent(it->subProgramCall);
                break;

            case Token::TokenType::COMPOUND_STATEMENT_:
                ProcStateMent(it->statementList, "");
                break;
            }
        }
        targetCode << extra;
        targetCode << "}\n";
    }

    void C_Code::ProcWhileStateMent(AST::WhileStatement *whileStatement)
    {
        switch (whileStatement->whileType)
        {
        case Token::TokenType::FOR:
            targetCode << "for(";
            ProcAssignStateMent(whileStatement->initAssign);
            targetCode << "; ";

            ProcVariantReference(whileStatement->initAssign->leftVal);
            if (whileStatement->isDownto == 0)
            {
                targetCode << " <= ";
            }
            else if (whileStatement->isDownto == 1)
            {
                targetCode << " >= ";
            }
            ProcExpression(whileStatement->condition);
            targetCode << "; ";

            ProcVariantReference(whileStatement->initAssign->leftVal);
            if (whileStatement->isDownto == 0)
            {
                targetCode << "++)\n";
            }
            else if (whileStatement->isDownto == 1)
            {
                targetCode << "--)\n";
            }
            ProcStateMent(whileStatement->statementList, "");
            break;

        case Token::TokenType::WHILE:
            targetCode << "while(";
            ProcExpression(whileStatement->condition);
            targetCode << ")\n";
            ProcStateMent(whileStatement->statementList, "");
            break;

        case Token::TokenType::REPEAT:
            targetCode << "do\n";
            ProcStateMent(whileStatement->statementList, "");
            targetCode << "while(!(";
            ProcExpression(whileStatement->condition);
            targetCode << "));\n";
            break;
        }
    }

    void C_Code::ProcIfStateMent(AST::IfStatement *ifStatement)
    {
        targetCode << "if (";
        ProcExpression(ifStatement->condition);
        targetCode << ")\n";
        if (!ifStatement->thenStatement)
        {
            targetCode << ";\n";
            return;
        }
        vector<AST::Statement *> temp = {ifStatement->thenStatement};
        ProcStateMent(temp, "");

        if (!ifStatement->elseStatement)
            return;
        targetCode << "else\n";
        temp = {ifStatement->elseStatement};
        ProcStateMent(temp, "");
    }

    void C_Code::ProcSubProgramCallStateMent(AST::SubProgramCall *subProgramCall)
    {
        targetCode << subProgramCall->subProgramId.first << "(";
        for (int i = 0; i < subProgramCall->paraList.size(); i++)
        {
            if (i > 0) // 不是第一个参数，需要加逗号
            {
                targetCode << ", ";
            }
            if (subProgramCall->subprogram->IsVarParameterAtIndex(i)) // 引用
            {
                targetCode << "&(";
                ProcExpression(subProgramCall->paraList[i]);
                targetCode << ")";
            }
            else
                ProcExpression(subProgramCall->paraList[i]);
        }
        targetCode << ");\n";
    }

    void C_Code::ProcAssignStateMent(AST::AssignStatement *assignStatement)
    {
        ProcVariantReference(assignStatement->leftVal);
        targetCode << " = ";
        ProcExpression(assignStatement->rightVal);
    }

    void C_Code::ProcExpression(AST::Expression *expression)
    {
        // 退出条件
        if (expression->operand1 == nullptr && expression->operand2 == nullptr)
        {
            switch (expression->GetValueType())
            {
            case 0:
                return;
            case 1:
                targetCode << expression->value;
                break;

            case 2:
                ProcVariantReference(expression->variantReference);
                break;

            case 3:
                ProcSubProgramCallStateMent(expression->subProgramCall);
                break;
            }
            return;
        }

        if (expression->operand1 && expression->operand2 == nullptr)
        {
            if (expression->isParentheses)
            {
                targetCode << "(";
                ProcExpression(expression->operand1);
                targetCode << ")";
            }
            else
                ProcExpression(expression->operand1);
            return;
        }

        if (expression->operand1 == nullptr && expression->operand2)
        {
            targetCode << " " << expression->opration;
            ProcExpression(expression->operand2);
            return;
        }

        ProcExpression(expression->operand1);
        targetCode << " ";
        if (expression->opration == "/")
            targetCode << "* 1.0 /";
        else if (expression->opration == "div")
            targetCode << "/";
        else
            targetCode << expression->opration;
        targetCode << " ";
        ProcExpression(expression->operand2);
    }

    void C_Code::ProcVariantReference(AST::VariantReference *variantReference)
    {
        if (variantReference->idType == Token::TokenType::RECORD)
        {
            /* code */
        }
        else if (variantReference->idType == Token::TokenType::ARRAY)
        {
            targetCode << variantReference->GetIDToCodeGenerator();
            for (int i = 0; i < variantReference->arrayPart.size(); i++)
            {
                targetCode << "[";
                ProcExpression(variantReference->arrayPart[i]);
                targetCode << "-" << variantReference->varDeclare->GetDimension()[i].first;
                targetCode << "]";
            }
        }
        else
        {
            if (variantReference->isFunction)
            {
                targetCode << "return ";
            }
            switch (variantReference->isFormalParameter)
            {
            case 0:
                targetCode << variantReference->GetIDToCodeGenerator();
                break;
            case 1:
                targetCode << variantReference->GetIDToCodeGenerator();
                break;
            case 2:
                targetCode << "(*" << variantReference->GetIDToCodeGenerator() << ")";
                break;
            }
        }
    }

    void C_Code::ProcDeclaration(AST::Declaration *declaration, std::string prefix)
    {
        ProcConstDeclare(declaration, prefix);
        ProcVarDeclare(declaration->GetVarList(), prefix);

        if (!declaration->subProgramList.empty())
        {
            ProcSubProgram(declaration->subProgramList);
        }
    }

    void C_Code::ProcVarDeclare(std::map<string, pair<int, AST::VarDeclare *>> &varList, const std::string &prefix)
    {
        for (auto it : varList)
        {
            switch (it.second.second->GetVarDeclareType())
            {
            case Token::TokenType::INTEGER:
                targetCode << "int " << prefix << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;

            case Token::TokenType::REAL:
                targetCode << "double " << prefix << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;

            case Token::TokenType::CHAR:
                targetCode << "char " << prefix << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;
            case Token::TokenType::BOLLEAN:
                targetCode << "bool " << prefix << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;
            case Token::TokenType::RECORD:
                targetCode << "struct " << prefix << it.first << "\n{";
                ProcVarDeclare(it.second.second->GetRecordList(), prefix);
                targetCode << "} " << it.first;
                break;
            }
            targetCode << ";\n";
        }
    }

    void C_Code::ProcConstDeclare(AST::Declaration *declaration, const std::string &prefix)
    {
        auto &declarationList = declaration->GetConstList();
        for (auto it : declaration->GetDeclarationQueue())
        {
            if (declarationList.end() == declarationList.find(it))
            {
                break;
            }

            targetCode << "const ";

            switch (declarationList[it]->GetConstDeclareType())
            {
            case Token::TokenType::INTEGER:
                targetCode << "int ";
                break;

            case Token::TokenType::REAL:
                targetCode << "double ";
                break;

            case Token::TokenType::CHAR:
                targetCode << "char ";
                break;
            }
            targetCode << prefix << it << " = " << declarationList[it]->GetConstVal() << ";\n";
        }
    }

    void C_Code::ProcArray(vector<pair<int, int>> dimension)
    {
        for (auto it : dimension)
        {
            targetCode << "[" << it.first + it.second << "]";
        }
    }

    void C_Code::ProcSubProgram(map<string, AST::SubProgram *> &subProgramList)
    {
        bool IsFirstPara = true; // 判断是否是第一个参数
        for (auto it : subProgramList)
        {

            std::string SubProgramDefine = "";
            switch (it.second->GetReturnType())
            {
            case Token::TokenType::NULL_:
                SubProgramDefine += "void ";
                break;
            case Token::TokenType::INTEGER:
                SubProgramDefine += "int ";
                break;
            case Token::TokenType::BOLLEAN:
                SubProgramDefine += "bool ";
                break;
            case Token::TokenType::REAL:
                SubProgramDefine += "double ";
                break;

            case Token::TokenType::CHAR:
                SubProgramDefine += "char ";
            }
            SubProgramDefine += (it.first + "(");
            for (auto _it : it.second->GetFormalPataList())
            {

                for (auto __it : _it->paraIdList)
                {
                    if (!IsFirstPara) // 不是第一个参数，需要加逗号
                    {
                        SubProgramDefine += ", ";
                    }
                    else
                    {
                        IsFirstPara = false;
                    }
                    switch (_it->type)
                    {
                        {
                        case Token::TokenType::INTEGER:
                        case Token::TokenType::BOLLEAN:
                            SubProgramDefine += "int ";
                            break;

                        case Token::TokenType::REAL:
                            SubProgramDefine += "double ";
                            break;

                        case Token::TokenType::CHAR:
                            SubProgramDefine += "char ";
                        }
                    }

                    if (_it->flag) // 引用传参
                        SubProgramDefine += "*";
                    SubProgramDefine += __it.first;
                }
            }
            SubProgramDefine += ")\n";
            IsFirstPara = true;
            ProcProgramBody(it.second->programBody, SubProgramDefine);
        }
    }
};