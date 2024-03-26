#ifndef TOOLOFPARSETREE_H
#define TOOLOFPARSETREE_H
#include "main.h"
namespace ParseTree
{
    /// @brief 从type这个节点遍历树得到这个type的类型，注意type节点的类型为TYPE_
    /// @param type_node_
    /// @return
    Token::TokenType GetVarTypeFromTypeNode(ParseNode *type_node_);
} // namespace ParseTree

#endif