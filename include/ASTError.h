#ifndef ASTERROR_H
#define ASTERROR_H
#include "main.h"
#include <iostream>
#include <string>
extern int ERROR_NUM;
class CompilerError
{
public:
    enum class ErrorType {
        ARRAY_INDEX_NOT_INTEGER,
        ARRAY_INDEX_OUT_OF_RANGE,
        OPERAND_TYPE_MISMATCH,
        UNDEFINED_VARIABLE,
        CONST_CANNOT_BE_ASSIGNED,
        RECORD_OR_ARRAY_CANNOT_BE_ASSIGNED,
        RECORD_FIELD_NOT_FOUND,
        ARRAY_INDEX_MISMATCH,
        VARIABLE_NOT_ALLOWED,
        FUNCTION_NOT_FOUND,
        PARAMETER_NUMBER_MISMATCH,
        PARAMETER_TYPE_MISMATCH,
        CONDITION_NOT_BOOLEAN,
        FOR_LOOP_VAR_NOT_INTEGER,
        FOR_LOOP_CONDITION_NOT_INTEGER,
        ASSIGNMENT_TYPE_MISMATCH,
        REDEFINED_VARIABLE,
        REDEFINED_CONSTANT,
        REDEFINED_FUNCTION,
        CONST_NOT_FOUND,
        UNASSIGNED_VARIABLE,
        CHAR_LENGTH_ERROR,
        VAR_PARAMETER_NOT_ID
    };

    static void reportError(int lineNum, ErrorType errorType, const std::string &additionalInfo = "")
    {
        std::string errorMessage;
        switch (errorType) {
        case ErrorType::ARRAY_INDEX_NOT_INTEGER:
            errorMessage = "Array index should be INTEGER";
            break;
        case ErrorType::ARRAY_INDEX_OUT_OF_RANGE:
            errorMessage = "Array index out of range";
            break;
        case ErrorType::OPERAND_TYPE_MISMATCH:
            errorMessage = "Operand type mismatch: " + additionalInfo;
            break;
        case ErrorType::UNDEFINED_VARIABLE:
            errorMessage = "Undefined variable: " + additionalInfo;
            break;
        case ErrorType::CONST_CANNOT_BE_ASSIGNED:
            errorMessage = "Constant cannot be assigned: " + additionalInfo;
            break;
        case ErrorType::RECORD_OR_ARRAY_CANNOT_BE_ASSIGNED:
            errorMessage = "Record or array cannot be assigned directly: " + additionalInfo;
            break;
        case ErrorType::RECORD_FIELD_NOT_FOUND:
            errorMessage = "Record has no such field: " + additionalInfo;
            break;
        case ErrorType::ARRAY_INDEX_MISMATCH:
            errorMessage = "Array dimension mismatch";
            break;
        case ErrorType::VARIABLE_NOT_ALLOWED:
            errorMessage = "Variable is not allowed: " + additionalInfo;
            break;
        case ErrorType::FUNCTION_NOT_FOUND:
            errorMessage = "Function not found: " + additionalInfo;
            break;
        case ErrorType::PARAMETER_NUMBER_MISMATCH:
            errorMessage = "Parameter number mismatch";
            break;
        case ErrorType::PARAMETER_TYPE_MISMATCH:
            errorMessage = "Parameter type mismatch";
            break;
        case ErrorType::CONDITION_NOT_BOOLEAN:
            errorMessage = "Condition should be boolean";
            break;
        case ErrorType::FOR_LOOP_VAR_NOT_INTEGER:
            errorMessage = "For loop variable should be integer";
            break;
        case ErrorType::FOR_LOOP_CONDITION_NOT_INTEGER:
            errorMessage = "For loop condition should be integer";
            break;
        case ErrorType::ASSIGNMENT_TYPE_MISMATCH:
            errorMessage = "Assignment type mismatch";
            break;
        case ErrorType::REDEFINED_VARIABLE:
            errorMessage = "Variable redefined: " + additionalInfo;
            break;
        case ErrorType::REDEFINED_CONSTANT:
            errorMessage = "Constant redefined: " + additionalInfo;
            break;
        case ErrorType::REDEFINED_FUNCTION:
            errorMessage = "Function redefined: " + additionalInfo;
            break;
        case ErrorType::CONST_NOT_FOUND:
            errorMessage = "Constant not found: " + additionalInfo;
            break;
        case ErrorType::UNASSIGNED_VARIABLE:
            errorMessage = "Variable not assigned: " + additionalInfo;
            break;
        case ErrorType::CHAR_LENGTH_ERROR:
            errorMessage = "Char length error";
            break;
        case ErrorType::VAR_PARAMETER_NOT_ID:
            errorMessage = "Var parameter should be an ID";
            break;
        default:
            errorMessage = "Unknown error";
            break;
        }

        std::cerr << "Error at line " << lineNum << ": " << errorMessage << std::endl;
        ERROR_NUM++;
    }
};
#endif