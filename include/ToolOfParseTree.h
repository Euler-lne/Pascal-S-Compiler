#ifndef TOOLOFPARSETREE_H
#define TOOLOFPARSETREE_H
#include "main.h"
namespace ParseTree
{
    /// @brief 从type这个节点遍历树得到这个type的类型，注意type节点的类型为TYPE_
    /// @param type_node_
    /// @return
    Token::TokenType GetVarTypeFromTypeNode(ParseNode *type_node_);
    class Stack
    {
    public:
        ParseNode *Pop();
        int GetStackLen() { return stack.size(); }
        Stack(ParseNode *_rootNode, int nextPosition, int valPosition, int endSize, int endPosition, Token::TokenType expectType, int isEmpty = 0);
        ~Stack();

    private:
        ParseNode *curNode;
        vector<ParseNode *> stack;
        int TypeIncorrect(ParseNode *_curNode, ParseNode *rootNode, Token::TokenType expectType);
    };
} // namespace ParseTree

#endif