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
            // return;
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
        targetCode << string("int main()\n{\n");

        ProcStateMent(programBody->statementList);

        targetCode << string("return 0;\n}");
        return targetCode.str();
    }

    void C_Code::ProcStateMent(vector<AST::Statement *> &statementList)
    {
        for (auto it : statementList)
        {
            switch (it->statementType)
            {
            }
        }
    }

    void C_Code::ProcDeclaration(AST::Declaration *declaration, std::string prefix)
    {
        ProcConstDeclare(declaration, prefix);
        ProcVarDeclare(declaration->GetVarList(), prefix);
    }

    void C_Code::ProcVarDeclare(std::map<string, pair<int, AST::VarDeclare *>> &varList, const std::string &prefix)
    {
        for (auto it : varList)
        {
            switch (it.second.second->GetVarDeclareType())
            {
            case Token::TokenType::INTEGER:
            case Token::TokenType::REAL:
                targetCode << "int " << prefix << it.first;
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
                targetCode << "}";
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
            targetCode << string("const ");

            switch (declarationList[it]->GetConstDeclareType())
            {
            case Token::TokenType::INTEGER:
            case Token::TokenType::REAL:
                targetCode << string("int ");
                break;

            case Token::TokenType::CHAR:
                targetCode << string("char ");
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
            switch (it.second->GetReturnType())
            {
            case Token::TokenType::INTEGER:
            case Token::TokenType::REAL:
            case Token::TokenType::BOLLEAN:
                targetCode << "int ";
                break;

            case Token::TokenType::CHAR:
                targetCode << "char ";
            }
            targetCode << it.first << "(";
            for (auto _it : it.second->GetFormalPataList())
            {
                if (!IsFirstPara) // 不是第一个参数，需要加逗号
                {
                    targetCode << ", ";
                    IsFirstPara = false;
                }

                for (auto __it : _it->paraIdList)
                {
                    switch (_it->type)
                    {
                        {
                        case Token::TokenType::INTEGER:
                        case Token::TokenType::REAL:
                        case Token::TokenType::BOLLEAN:
                            targetCode << "int ";
                            break;

                        case Token::TokenType::CHAR:
                            targetCode << "char ";
                        }
                    }
                    targetCode << __it.first;
                }
            }
            targetCode << ")\n{\n";
            IsFirstPara = true;

            // 定义

            targetCode << "}";
        }
    }
};