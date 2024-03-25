/**
 * @file CodeGeneration.h
 * @author z_8_3_8
 * @brief AST To Target Code
 * @version 0.0.1
 * @date 2024-03-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once
#include <iostream>
#include <string>
#include "TokenTypeEnum.h"
#include "ASTNode.h"

namespace C_GEN
{
    class C_Generater
    {
    private:
        std::string outPutPath;
        Token::GenerationType generationType;
        AST::Program *ast;

    public:
        C_Generater();
        C_Generater(AST::Program *pAST, std::string _filePath, Token::GenerationType _generationType = Token::GenerationType::C) : ast(pAST), outPutPath(_filePath), generationType(_generationType){};
        ~C_Generater();

        void SetPath(std::string _filePath) { outPutPath = _filePath; };
        void SetGenType(Token::GenerationType _generationType) { generationType = _generationType; };
        void SetAST(AST::Program *pAST) { ast = pAST; };

        void run();

    private:
        void C_Generate();
        void PY_Generate(){};
        void JAVA_Generate(){};
    };
} // namespace C_G
