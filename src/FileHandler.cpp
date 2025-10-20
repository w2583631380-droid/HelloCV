//

// FileHandler.cpp - 实现文件读写
#include "FileHandler.h"
#include <fstream>
#include <iostream>

bool FileHandler::readFile(const std::string& filePath, std::string& content) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cout << "错误：无法打开文件 " << filePath << std::endl;
        return false;
    }

    content = "";
    std::string line;
    while (getline(file, line)) {
        content += line + "\n";
    }
    file.close();
    return true;
}

bool FileHandler::writeFile(const std::string& filePath, const std::string& content) {
    std::ofstream file(filePath);
    if (!file.is_open()) {
        std::cout << "错误：无法创建文件 " << filePath << std::endl;
        return false;
    }

    file << content;
    file.close();
    return true;
}