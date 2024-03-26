#ifndef TOKENTYPEENUM_H
#define TOKENTYPEENUM_H
namespace Token
{
    enum TokenType
    {
        PROGRAM_,
        // 头部
        PROGRAM_HEAD_,
        IDENTIFIER_LIST_,

        // 程序
        PROGTAM_BODY_,
        // 常量定义
        CONST_DECLARATIONS_,
        CONST_DECLARATION_,
        CONST_VARIABLE_,
        // 类型定义
        TYPE_DECLARATIONS_,
        TYPE_DECLARATION_,
        TYPE_,
        STANDRAD_TYPE_,
        RECORD_BODY_,
        PERIODS_,
        PERIOD_,
        // 变量定义
        VAR_DECLARATIONS_,
        VAR_DECLARATION_,
        // 函数/记录定义
        SUBPROGRAM_DECLARATIONS_,
        SUBPROGRAM_DECLARATION_,
        SUBPROGRAM_HEAD_,
        FORMAL_PARAMETER_,
        PARAMETER_LISTS_,
        PARAMETER_LIST_,
        VAR_PARAMETER_,   // 引用传递
        VALUE_PARAMETER_, // 值传递

        // 程序/函数主体
        COMPOUND_STATEMENT_,
        STATEMENT_LIST_,
        STATEMENT_,
        // 调用函数或者过程
        CALL_PROCEDURE_STATEMENT_,
        // IF 语句
        ELSE_PART_,
        // CASE 语句
        CASE_BODY_,
        // FOR
        UPDOWN_,
        // 赋值语句
        VARIABLE_,
        ID_VARPARTS_,
        ID_VARPART_,
        EXPRESSION_LIST_,
        EXPRESSION_,
        SIMPLE_EXPRESSION_,
        TERM_,
        FACTOR_,
        UNSIGN_CONST_VARIABLE_,

        // 关键字&符号
        PROGRAM,
        CONST,
        RECORD,
        END,
        ARRAY,
        OF,
        INTEGER,
        REAL,
        BOLLEAN,
        CHAR,
        VAR,
        FUNCTION,
        PROCEDURE,
        BEGIN,
        IF,
        THEN,
        ELSE,
        CASE,
        WHILE,
        DO,
        REPEAT,
        UNTIL,
        FOR,
        TO,
        DOWNTO,

        NOT,
        // AND,
        // OR,
        // DIV,
        // MOD,

        DOT,       // .
        RANGE_DOT, //..
        COMMA,     // ,
        // EQUAL,                    // =
        LEFT_PARENTHESES,         //(
        RIGHT_PARENTHESES,        // )
        LEFT_MEDIUM_PARENTHESES,  // [
        RIGHT_MEDIUM_PARENTHESES, // ]
        SEMICOLON,                // ;
        ASSIGNOP,                 // :—
        COLON,                    //:
        // ADD,                      // +
        // MINUS,                    //-

        RELOP, // “=”、“<>”、“<”、“<=”、“>”、“>=”
        ADDOP, // “十”、“一”和“or”
        MULOP, // “*”、“/"'、"div”、"mod”和“and”

        ID,        // ID
        INT_NUM,   // 整数
        FLOAT_NUM, // 浮点数
        LETTER,    // 字符串

        // 一下类型供构建抽象语法树以及之后的步骤使用
        NULL_, // 添加一个返回值类型，代表这个为一个记录类型
    };
} // namespace token

#endif /* TokenTypeEnum_h */