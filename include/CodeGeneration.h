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

namespace C_GEN
{
    class C_Generater
    {
    private:
        std::string outPutPath;
        Token::GenerationType generationType;

    public:
        C_Generater();
        C_Generater(std::string _filePath, Token::GenerationType _generationType = Token::GenerationType::C) : outPutPath(_filePath), generationType(_generationType){};
        ~C_Generater();

        void SetPath(std::string _filePath) { outPutPath = _filePath; };
        void SetGenType(Token::GenerationType _generationType) { generationType = _generationType; };
    };
} // namespace C_GEN
