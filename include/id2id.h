/**
 * @file id2id.h
 * @brief 提供了一个简单的名称管理工具,支持名称的自动编号和查询
 * 
 * 该头文件定义了 NameManager 类,该类用于管理字符串类型的 ID 名称。
 * 当新的 ID 名称进入时,会自动为其分配一个从 0 开始依次递增的整数编号,
 * 并在编号前添加 "Trans" 前缀。
 * 同时支持查询指定 ID 名称对应的编号,以及插入新的 ID 名称。
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

class NameManager {
private:
    static std::map<std::string, std::string> nameMap;
    static int currentIndex;

public:
    static std::string renameId(const std::string& idName);
    static void insert(const std::string& idName);
    static std::string get(const std::string& idName);
};

// 初始化静态成员变量
std::map<std::string, std::string> NameManager::nameMap;
int NameManager::currentIndex = 0;

#endif // ID2ID_H