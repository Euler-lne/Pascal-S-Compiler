#include "id2id.h"

std::string NameManager::renameId(const std::string& idName) {
    // 检查 idName 是否已经在 nameMap 中
    auto it = nameMap.find(idName);
    if (it != nameMap.end()) {
        // 如果找到了, 返回当前对应的 index
        return "Trans" + it->second;
    } else {
        // 如果没找到, 添加新的 idName 并返回新的 index
        std::string newIndex = "Trans" + std::to_string(currentIndex);
        nameMap[idName] = newIndex;
        return newIndex;
    }
}

void NameManager::insert(const std::string& idName) {
    // 如果 idName 不在 nameMap 中, 则添加新的 idName
    if (nameMap.find(idName) == nameMap.end()) {
        nameMap[idName] = "Trans" + std::to_string(currentIndex++);
    }
}

std::string NameManager::get(const std::string& idName) {
    // 查找 idName 在 nameMap 中的 index
    auto it = nameMap.find(idName);
    if (it != nameMap.end()) {
        return it->second;
    } else {
        // 如果 idName 不存在, 返回空字符串
        return "";
    }
}