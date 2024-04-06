/**
 * @file id2id.h
 * @brief 提供了一个简单的名称管理工具,支持名称的自动编号和查询
 *
 * 该头文件定义了 NameManager 类,该类用于管理字符串类型的 ID 名称。
 * 当新的 ID 名称进入时,会自动为其分配一个从 0 开始依次递增的整数编号,
 * 并在编号前添加 "T" 前缀(Translate的缩写)。
 * 同时支持查询指定 ID 名称对应的编号。
 * 整个类的实现都采用了静态成员函数的方式,因此可以直接使用类名调用。
 *
 * @author zsz
 * @date 2023-04-06
 * @version 1.0
 */

#ifndef ID2ID_H
#define ID2ID_H

#include <iostream>
#include <string>
#include <map>

namespace id_management
{
    class NameManager
    {
    private:
        static std::map<std::string, std::string> nameMap;
        static int currentIndex;

    public:
        /**
         * @brief 插入一个新的 ID 名称,并返回分配的编号
         * @param idName 需要插入的 ID 名称
         * @return 分配给该 ID 名称的编号(字符串形式,前缀为 "Trans")
         */
        static std::string insert(const std::string &idName);

        /**
         * @brief 查询指定 ID 名称对应的编号
         * @param idName 需要查询的 ID 名称
         * @return 如果 ID 名称存在,返回对应的编号(字符串形式),否则返回空字符串
         */
        static std::string get(const std::string &idName);
    };

    // 初始化静态成员变量
    std::map<std::string, std::string> NameManager::nameMap;
    int NameManager::currentIndex = 0;
}

#endif // ID2ID_H