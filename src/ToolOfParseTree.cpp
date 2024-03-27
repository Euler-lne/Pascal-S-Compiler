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
    ParseNode *Stack::Pop()
    {
        if (stack.size() == 0)
            return NULL;
        ParseNode *node = stack[stack.size() - 1];
        stack.pop_back();
        return node;
    }
    /// @brief 构造函数
    /// @param _rootNode 需要遍历的根节点
    /// @param nextPosition 下一个需要遍历的位置
    /// @param valPosition 遍历时的值所在的位置
    /// @param endSize 结束的长度
    /// @param endPosition 推出最后一个节点的位置，为-1代表推出空，也就是endSize为0
    /// @param expectType 目前想要的节点的类型
    /// @param isEmpty 是否需要考虑长度为空的情况 默认不用判断为0
    Stack::Stack(ParseNode *_rootNode, int nextPosition, int valPosition, int endSize, int endPosition, Token::TokenType expectType, int isEmpty = 0)
    {
        curNode = _rootNode;
        if (curNode->children.size() == 0)
            return; // 遍历节点本生没有孩子，退出
        ParseNode *pushNode;
        while (curNode->children.size() != endSize) {
            pushNode = curNode->children[valPosition];
            // 传入一个空值的原因是，有时候需要对非终结符号进行拓展，中介符号和非终结符号不一样
            if ((!isEmpty || pushNode->children.size() != 0)) {
                if (!TypeIncorrect(pushNode, _rootNode, expectType)) {
                    stack.push_back(pushNode);
                }
            }
            curNode = curNode->children[nextPosition];
        }
        if (endPosition == -1)
            return; // 为-1代表推出空，也就是结束的时候是空节点，不用插入栈中。
        pushNode = curNode->children[endPosition];
        // 不用插入的情况：空且长度为0；反条件 非空或者长度不为0
        if (!isEmpty || pushNode->children.size() != 0) {
            if (!TypeIncorrect(pushNode, _rootNode, expectType)) {
                stack.push_back(pushNode);
            }
        }
    }
    Stack::~Stack()
    {
        stack.clear();
    }

    /// @brief 类型匹配不正确报错
    /// @param _curNode 当前要插入到栈里面的节点
    /// @param rootNode 当前根节点
    /// @param expectType 目前想要的节点的类型
    /// @return 类型不真缺返回1，正确返回0
    int Stack::TypeIncorrect(ParseNode *_curNode, ParseNode *rootNode, Token::TokenType expectType)
    {
        if (_curNode->token != expectType) {
            cout << "Errors that shouldn't appear, please check. The initial node type: " << _curNode->token << endl;
            cout << "The initial node type: " << rootNode->token << endl;
            return 1;
        }
        return 0;
    }
}