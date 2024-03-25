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
        this->outPutPath = "";
        this->generationType = Token::GenerationType::C;
    }

    C_Generater::~C_Generater(){};
};