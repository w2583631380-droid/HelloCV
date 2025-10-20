//
// Created by hlp on 2025/10/18.
//
// FileHandler.h - 负责读写文件
#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>

class FileHandler {
public:
    // 读取文件内容
    static bool readFile(const std::string& filePath, std::string& content);

    // 写入文件内容
    static bool writeFile(const std::string& filePath, const std::string& content);
};

#endif
#ifndef CODES_FILEHANDLER_H
#define CODES_FILEHANDLER_H

#endif //CODES_FILEHANDLER_H