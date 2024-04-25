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
#include <fstream>

namespace C_GEN
{

    void C_Code::PreProcDeclaration(AST::ProgramBody *programBody)
    {
        for (int i = 0; i < programBody->declaration->declarationQueue.size(); i++)
        {
            Token::TokenType type;
            programBody->GetDeclarationAtIndex(i, type);
            switch (type)
            {
            case Token::TokenType::VAR:
                // RePlaceMap(programBody->declaration->varList, programBody->declaration->declarationQueue[i], programBody->GetDeclarationNameAtIndex(i));
                break;

            case Token::TokenType::CONST:
                RePlaceMap(programBody->declaration->constList, programBody->declaration->declarationQueue[i], programBody->GetDeclarationNameAtIndex(i));
                break;
            case Token::TokenType::FUNCTION:
                RePlaceMap(programBody->declaration->subProgramList, programBody->declaration->declarationQueue[i], programBody->GetDeclarationNameAtIndex(i));
                break;
            }
        }
    }

    void C_Code::RePlaceMap(map<string, AST::ConstDeclare *> &constList, std::string before, std::string after)
    {
        auto node = constList.extract(before);
        if (!node.empty())
        {
            node.key() = after;
            constList.insert(std::move(node));
        }
    }

    void C_Code::RePlaceMap(map<string, pair<int, AST::VarDeclare *>> &varList, std::string before, std::string after)
    {
        auto node = varList.extract(before);
        if (!node.empty())
        {
            node.key() = after;
            varList.insert(std::move(node));
        }
    }

    void C_Code::RePlaceMap(map<string, AST::SubProgram *> &subProgramList, std::string before, std::string after)
    {
        auto node = subProgramList.extract(before);
        if (!node.empty())
        {
            node.key() = after;
            subProgramList.insert(std::move(node));
        }
    }

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
        std::ofstream file(outPutPath);
        file << targetCodeStream;
        file.close();
        // std::cout << targetCodeStream << std::endl;
    }

    std::string C_Code::GenerateTargetCode(std::string &outPutPath, AST::Program *ast)
    {
        ProcProgramHead(ast->GetProgramHead());
        targetCode << "#include <stdio.h>\n";
        targetCode << "#define bool int\n#define true 1\n#define false 0\n";
        return ProcProgramBody(ast->GetProgramBody());
    }

    std::string C_Code::ProcProgramHead(AST::ProgramHead *programHead)
    {
        return programHead->GetProgramId() + ".c";
    }

    // main
    std::string C_Code::ProcProgramBody(AST::ProgramBody *programBody)
    {
        PreProcDeclaration(programBody);
        ProcConstDeclare(programBody->declaration, programBody->GetPrefix());
        ProcVarDeclare(programBody->declaration->GetVarList(), programBody->GetPrefix());
        ProcSubProgramDeclare(programBody->declaration->subProgramList, programBody->GetPrefix());

        if (!programBody->declaration->subProgramList.empty())
        {
            ProcSubProgram(programBody->declaration->subProgramList, programBody->GetPrefix());
        }
        targetCode << string("int main()\n");
        ProcStateMent(programBody->statementList, false, NULL);
        return targetCode.str();
    }

    // subprogrtam
    void C_Code::ProcProgramBody(AST::ProgramBody *programBody, std::string SubProgramDefine)
    {
        PreProcDeclaration(programBody);
        ProcDeclaration(programBody->GetDeclaration(), programBody->GetPrefix());
        targetCode << SubProgramDefine;
        ProcStateMent(programBody->statementList, true, programBody);
    }

    void C_Code::ProcStateMent(vector<AST::Statement *> &statementList, bool isFuntion, AST::ProgramBody *programBody)
    {
        targetCode << string("{\n");
        if (isFuntion)
        {
            ProcVarDeclare(programBody->declaration->GetVarList(), "");
        }

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

                break;

            case Token::TokenType::CALL_PROCEDURE_STATEMENT_:
                ProcSubProgramCallStateMent(it->subProgramCall);
                targetCode << ";\n";
                break;

            case Token::TokenType::COMPOUND_STATEMENT_:
                ProcStateMent(it->statementList, false, NULL);
                break;

            case Token::TokenType::_READ:
                ProcReadStatement(it->readStatement);
                break;

            case Token::TokenType::_WRITE:
                ProcWriteStatement(it->writeStatement);
            }
        }
        targetCode << "}\n";
    }

    void C_Code::ProcWhileStateMent(AST::WhileStatement *whileStatement)
    {
        switch (whileStatement->whileType)
        {
        case Token::TokenType::FOR:
            targetCode << "for(";
            ProcAssignStateMent(whileStatement->initAssign);

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
            targetCode << ";\n";

            ProcVariantReference(whileStatement->initAssign->leftVal);
            if (whileStatement->isDownto == 0)
            {
                targetCode << "++)\n";
            }
            else if (whileStatement->isDownto == 1)
            {
                targetCode << "--)\n";
            }
            ProcStateMent(whileStatement->statementList, false, NULL);
            break;

        case Token::TokenType::WHILE:
            targetCode << "while(";
            ProcExpression(whileStatement->condition);
            targetCode << ")\n";
            ProcStateMent(whileStatement->statementList, false, NULL);
            break;

        case Token::TokenType::REPEAT:
            targetCode << "do\n";
            ProcStateMent(whileStatement->statementList, false, NULL);
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
        ProcStateMent(temp, false, NULL);

        if (!ifStatement->elseStatement)
            return;
        targetCode << "else\n";
        temp = {ifStatement->elseStatement};
        ProcStateMent(temp, false, NULL);
    }

    void C_Code::ProcSubProgramCallStateMent(AST::SubProgramCall *subProgramCall)
    {
        targetCode << subProgramCall->GetPrefixId() << "(";
        for (int i = 0; i < subProgramCall->paraList.size(); i++)
        {
            if (i > 0) // 不是第一个参数，需要加逗号
            {
                targetCode << ", ";
            }
            // cout << subProgramCall->subprogram->IsVarParameterAtIndex(i) << " " << endl;
            if (subProgramCall->subprogram->IsVarParameterAtIndex(i)) // 引用
            {
                targetCode << "&(";
                ProcExpression(subProgramCall->paraList[i]);
                targetCode << ")";
            }
            else
                ProcExpression(subProgramCall->paraList[i]);
        }
        targetCode << ")";
    }

    void C_Code::ProcAssignStateMent(AST::AssignStatement *assignStatement)
    {
        ProcVariantReference(assignStatement->leftVal);
        if (!(assignStatement->leftVal->isFunction))
            targetCode << " = ";
        ProcExpression(assignStatement->rightVal);
        targetCode << ";\n";
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
                if (expression->GetValueToken() == Token::TokenType::CHAR)
                {
                    targetCode << "\'" << expression->value << "\'";
                }
                else if (expression->GetValueToken() == Token::TokenType::LETTER)
                {
                    targetCode << "\"" << expression->value << "\"";
                }
                else
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
            {
                ProcExpression(expression->operand1);
            }

            return;
        }

        if (expression->operand1 == nullptr && expression->operand2)
        {
            targetCode << " ";
            ProcOpration(expression);
            ProcExpression(expression->operand2);
            return;
        }

        ProcExpression(expression->operand1);
        targetCode << " ";
        ProcOpration(expression);
        targetCode << " ";
        ProcExpression(expression->operand2);
    }

    void C_Code::ProcOpration(AST::Expression *expression)
    {
        if (expression->opration == "/")
            targetCode << "* 1.0 /";
        else if (expression->opration == "div")
            targetCode << "/";
        else if (expression->opration == "mod")
            targetCode << "%";
        else if (expression->opration == "=")
            targetCode << "==";
        else if (expression->opration == "<>")
            targetCode << "!=";
        else if (expression->opration == "not")
            if (expression->operand2->GetValueToken() == Token::TokenType::INTEGER)
                targetCode << "~";
            else
                targetCode << "!";
        else if (expression->opration == "and")
            if (expression->operand2->GetValueToken() == Token::TokenType::INTEGER)
                targetCode << "^";
            else
                targetCode << "&&";
        else if (expression->opration == "or")
            if (expression->operand2->GetValueToken() == Token::TokenType::INTEGER)
                targetCode << "|";
            else
                targetCode << "||";
        else
            targetCode << expression->opration;
    }

    void C_Code::ProcVariantReference(AST::VariantReference *variantReference)
    {
        if (variantReference->idType == Token::TokenType::RECORD)
        {
            targetCode << variantReference->GetIDToCodeGenerator();
            for (int i = 0; i < variantReference->recordPart.size(); i++)
            {
                targetCode << "." << variantReference->recordPart[i];
                if (variantReference->isArrayAtRecordEnd)
                {
                    targetCode << "[";
                    ProcExpression(variantReference->arrayPart[i]);
                    targetCode << "-(" << variantReference->varDeclare->GetDimension()[i].first;
                    targetCode << ")]";
                }
            }
        }
        else if (variantReference->idType == Token::TokenType::ARRAY)
        {
            targetCode << variantReference->GetIDToCodeGenerator();
            for (int i = 0; i < variantReference->arrayPart.size(); i++)
            {
                targetCode << "[";
                ProcExpression(variantReference->arrayPart[i]);
                targetCode << "-(" << variantReference->varDeclare->GetDimension()[i].first;
                targetCode << ")]";
            }
        }
        else
        {
            if (variantReference->isFunction && variantReference->GetIsLeft())
            {
                targetCode << "return ";
                return;
            }
            else if (variantReference->isFunction && !variantReference->GetIsLeft())
            {
                targetCode << variantReference->GetIDToCodeGenerator() << "()";
                return;
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
        ProcSubProgramDeclare(declaration->subProgramList, prefix);

        if (!declaration->subProgramList.empty())
        {
            ProcSubProgram(declaration->subProgramList, prefix);
        }
    }

    void C_Code::ProcVarDeclare(std::map<string, pair<int, AST::VarDeclare *>> &varList, const std::string &prefix)
    {
        for (auto it : varList)
        {
            switch (it.second.second->GetVarDeclareType())
            {
            case Token::TokenType::INTEGER:
                targetCode << "int " << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;

            case Token::TokenType::REAL:
                targetCode << "double " << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;

            case Token::TokenType::CHAR:
                targetCode << "char " << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;
            case Token::TokenType::BOLLEAN:
                targetCode << "bool " << it.first;
                if (it.second.second->IsArray())
                {
                    ProcArray(it.second.second->GetDimension());
                }
                break;
            case Token::TokenType::RECORD:
                targetCode << "struct " << it.first << "\n{";
                ProcVarDeclare(it.second.second->GetRecordList(), "");
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
            auto key = declaration->prefix + it;
            if (declarationList.end() == declarationList.find(key))
            {
                break;
            }

            targetCode << "const ";

            switch (declarationList[key]->GetConstDeclareType())
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
            case Token::TokenType::LETTER:
                targetCode << "char ";
                break;
            }
            targetCode << key;
            if (declarationList[key]->GetConstDeclareType() == Token::TokenType::LETTER)
                targetCode << "[]";

            targetCode << " = ";
            if (declarationList[key]->GetConstDeclareType() == Token::TokenType::LETTER)
                targetCode << "\"" << declarationList[key]->GetConstVal() << "\"";
            else if (declarationList[key]->GetConstDeclareType() == Token::TokenType::CHAR)
                targetCode << "\'" << declarationList[key]->GetConstVal() << "\'";
            else
                targetCode << declarationList[key]->GetConstVal();
            targetCode << ";\n";
        }
    }

    void C_Code::ProcArray(vector<pair<int, int>> dimension)
    {
        for (auto it : dimension)
        {
            targetCode << "[" << it.first + it.second << "]";
        }
    }

    void C_Code::ProcSubProgramDeclare(map<string, AST::SubProgram *> &subProgramList, std::string prefix)
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
            SubProgramDefine += ");\n";
            targetCode << SubProgramDefine;
            IsFirstPara = true;
        }
    }
    void C_Code::ProcSubProgram(map<string, AST::SubProgram *> &subProgramList, std::string prefix)
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

    void C_Code::ProcReadStatement(AST::ReadStatement *readStatment)
    {
        targetCode << "scanf(\"";
        bool isFirst = true;
        for (auto it : readStatment->variantList)
        {
            if (!isFirst)
            {
                targetCode << " ";
            }
            switch (it->GetFinalType())
            {
            case Token::TokenType::INTEGER:
                targetCode << "%d";
                break;
            case Token::TokenType::BOLLEAN:
                targetCode << "%d";
                break;
            case Token::TokenType::REAL:
                targetCode << "%f";
                break;
            case Token::TokenType::CHAR:
                targetCode << "%c";
                break;
            case Token::TokenType::LETTER:
                targetCode << "%s";
                break;
            }
            isFirst = false;
        }
        targetCode << "\"";
        for (auto it : readStatment->variantList)
        {
            targetCode << ", &(";
            ProcVariantReference(it);
            targetCode << ")";
        }
        targetCode << ");\n";
    }

    void C_Code::ProcWriteStatement(AST::WriteStatement *writeStatement)
    {
        targetCode << "printf(\"";
        bool isFirst = true;
        for (auto it : writeStatement->expressionList)
        {
            if (!isFirst)
            {
                targetCode << "";
            }
            switch (it->GetValueToken())
            {
            case Token::TokenType::INTEGER:
                targetCode << "%d";
                break;
            case Token::TokenType::BOLLEAN:
                targetCode << "%d";
                break;
            case Token::TokenType::REAL:
                targetCode << "%f";
                break;
            case Token::TokenType::CHAR:
                targetCode << "%c";
                break;
            case Token::TokenType::LETTER:
                targetCode << "%s";
                break;
            }
            isFirst = false;
        }
        targetCode << "\"";
        for (auto it : writeStatement->expressionList)
        {
            targetCode << ", ";
            ProcExpression(it);
        }
        targetCode << ");\n";
    }
};