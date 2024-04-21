#ifndef MAIN_H
#define MAIN_H
#include "TokenTypeEnum.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class ParseNode
{
public:
    string val;                   // 终结符号的具体属性值，非终结符号没有改属性
    Token::TokenType token;       // 终结符号或非终结符号本身的名称，这里用常量表示
    int lineNumber;               // 终结符号的行号，用于之后错误处理报错行数
    vector<ParseNode *> children; // 该节点对应的子节点

    ParseNode() {}
    ParseNode(string _val, Token::TokenType _name, int _lineNum) : val(_val), token(_name), lineNumber(_lineNum) {}
    ParseNode(Token::TokenType _name, vector<ParseNode *> _child) : token(_name), children(_child) {}
    ~ParseNode()
    {
        for (int i = 0; i < children.size(); i++) {
            if (children[i] != nullptr) {
                delete children[i];
                children[i] = nullptr;
            }
        }
    }
};
class ReduceParseNode
{
private:
    vector<ParseNode *> reduceList;

public:
    /// @brief 向规约列表中加入节点
    /// @param node 待加入的节点
    void Insert(ParseNode *node) { reduceList.emplace_back(node); }
    /// @brief 清空规约列表
    void Clear() { reduceList.clear(); }
    /// @brief 遇到语法错误 删除节点并清空列表
    void Delete()
    {
        for (int i = 0; i < reduceList.size(); i++) {
            delete reduceList[i];
        }
        reduceList.clear();
    }
    ReduceParseNode() {}
    ~ReduceParseNode()
    {
        reduceList.clear();
    }
};
#define YYSTYPE ParseNode *
extern int ERROR_NUM;
extern ReduceParseNode reduceNode;
#endif