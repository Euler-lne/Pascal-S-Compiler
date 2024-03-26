#include "ToolOfParseTree.h"

namespace ParseTree
{
    Token::TokenType GetVarTypeFromTypeNode(ParseNode *type_node_)
    {
        Token::TokenType returnType;
        if (type_node_->children.size() == 1) {
            // 此处代表为标准类型，还要再进入一层再可以得到
            returnType = type_node_->children[0]->children[0]->token;
        } else {
            // 此处为record或者array类型，直接获取其0子节点
            returnType = type_node_->children[0]->token;
        }
        return returnType;
    }
}