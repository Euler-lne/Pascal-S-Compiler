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
        this->ast = nullptr;
        this->outPutPath = "";
        this->generationType = Token::GenerationType::C;
    }

    C_Generater::~C_Generater(){};

    void C_Generater::run()
    {
        if (ast == nullptr) {
            std::cout << "ERROR::No AST For Generater" << std::endl;
            return;
        }

        if (this->generationType == Token::GenerationType::C) {
            C_Generate();
        } else if (this->generationType == Token::GenerationType::JAVA) {
            JAVA_Generate();
        } else if (this->generationType == Token::GenerationType::PYTHON) {
            PY_Generate();
        }
    }

    void C_Generater::C_Generate()
    {
    }
};