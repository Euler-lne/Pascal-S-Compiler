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
        if (ast == nullptr) {
            std::cout << "ERROR::No AST For Generater" << std::endl;
            //return;
        }

        if (this->generationType == Token::GenerationType::C) {
            pTargetCodeGen = new C_Code();
        } else if (this->generationType == Token::GenerationType::JAVA) {
            JAVA_Generate();
        } else if (this->generationType == Token::GenerationType::PYTHON) {
            PY_Generate();
        }
        
        targetCodeStream = pTargetCodeGen->GenerateTargetCode(outPutPath, ast);

        std::cout << targetCodeStream <<std::endl;
        
    }

    std::string C_Code::GenerateTargetCode(std::string &outPutPath, AST::Program *ast)
    {
        std::cout << outPutPath;
        outPutPath = ProcProgramHead(ast->GetProgramHead());
        return "outPutPath";
    }

    std::string C_Code::ProcProgramHead (AST::ProgramHead *programHead)
    {
        return programHead->GetProgramId();
    }
};