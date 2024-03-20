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
    string token;                 // 终结符号或非终结符号本身的名称
    int lineNumber;               // 终结符号的行号，用于之后错误处理报错行数
    vector<ParseNode *> children; // 该节点对应的子节点

    ParseNode() {}
    ParseNode(string _val, string _name, int _lineNum) : val(_val), token(_name), lineNumber(_lineNum) {}
    ParseNode(string _name, vector<ParseNode *> _child) : token(_name), children(_child) {}
};

#define YYSTYPE ParseNode *