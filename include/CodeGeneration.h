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
#include <sstream>
#include "TokenTypeEnum.h"
#include "ASTNode.h"
#include <map>

namespace C_GEN
{
    class C_Generater;
    class TargetCode;

    class C_Generater // code generation mode
    {
    private:
        std::string outPutPath;               // output file path
        Token::GenerationType generationType; // target code type
        AST::Program *ast;                    // AST tree
        std::string targetCodeStream;         // target code stream
        TargetCode *pTargetCodeGen;

    public:
        C_Generater();
        C_Generater(AST::Program *pAST, std::string _filePath, Token::GenerationType _generationType = Token::GenerationType::C) : ast(pAST), outPutPath(_filePath), generationType(_generationType) { targetCodeStream.clear(); };
        ~C_Generater();

        void SetPath(std::string _filePath) { outPutPath = _filePath; };
        void SetGenType(Token::GenerationType _generationType) { generationType = _generationType; };
        void SetAST(AST::Program *pAST) { ast = pAST; };

        // generate code
        void run();

    private:
        void PY_Generate(){};
        void JAVA_Generate(){};
    };

    class TargetCode
    {
    protected:
        std::stringstream targetCode;

    public:
        TargetCode()
        {
            targetCode.clear();
        };
        virtual std::string GenerateTargetCode(std::string &outPutPath, AST::Program *ast) = 0;

    private:
    };

    class C_Code : public TargetCode
    {
    public:
        std::string GenerateTargetCode(std::string &outPutPath, AST::Program *ast);

    private:
        std::string ProcProgramHead(AST::ProgramHead *programHead);
        std::string ProcProgramBody(AST::ProgramBody *programBody);
        void ProcProgramBody(AST::ProgramBody *programBody, std::string programBodyId);
        void ProcDeclaration(AST::Declaration *declaration, std::string prefix);
        void ProcConstDeclare(AST::Declaration *declaration, const std::string &prefix);
        void ProcVarDeclare(std::map<string, pair<int, AST::VarDeclare *>> &varList, const std::string &prefix);
        void ProcArray(vector<pair<int, int>> dimension);
        void ProcSubProgram(map<string, AST::SubProgram *> &subProgramList, std::string prefix);
        void ProcStateMent(vector<AST::Statement *> &statementList, std::string extra);
        void ProcAssignStateMent(AST::AssignStatement *assignStatement);
        void ProcVariantReference(AST::VariantReference *variantReference);
        void ProcSubProgramCallStateMent(AST::SubProgramCall *subProgramCall);
        void ProcExpression(AST::Expression *expression);
        void ProcIfStateMent(AST::IfStatement *ifStatement);
        void ProcWhileStateMent(AST::WhileStatement *whileStatement);
    };
} // namespace C_G
