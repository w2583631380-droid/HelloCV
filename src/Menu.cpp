//
// Created by hlp on 2025/10/18.
// Menu.cpp - 实现菜单功能
#include "Menu.h"
#include "Crypto.h"
#include "FileHandler.h"
#include <iostream>
#include <string>
#include <limits>

void Menu::showMainMenu() {
    while (true) {
        std::cout << "\n========== 文本加密解密工具 ==========\n";
        std::cout << "1. 文本加密\n";
        std::cout << "2. 文本解密\n";
        std::cout << "3. 文件加密\n";
        std::cout << "4. 文件解密\n";
        std::cout << "0. 退出\n";
        std::cout << "请选择功能：";

        int choice = getChoice();
        switch (choice) {
            case 1:
                handleTextEncryption();
                break;
            case 2:
                handleTextDecryption();
                break;
            case 3:
                handleFileEncryption();
                break;
            case 4:
                handleFileDecryption();
                break;
            case 0:
                std::cout << "感谢使用，再见！\n";
                return;
            default:
                std::cout << "无效选择，请重新输入！\n";
        }
    }
}

void Menu::handleTextEncryption() {
    std::string text, keyStr;
    int key;
    std::cout << "\n--- 文本加密 ---\n";
    std::cout << "请输入要加密的文本：";
    std::cin.ignore();  // 忽略之前输入留下的换行符
    std::getline(std::cin, text);

    std::cout << "请选择加密方式（1=凯撒密码，2=XOR加密）：";
    int method = getChoice();
    if (method == 1) {
        std::cout << "请输入密钥（整数）：";
        std::cin >> key;
        std::string encrypted = Crypto::caesarEncrypt(text, key);
        std::cout << "加密结果：" << encrypted << std::endl;
    } else if (method == 2) {
        std::cout << "请输入密钥（字符串）：";
        std::cin.ignore();
        std::getline(std::cin, keyStr);
        std::string encrypted = Crypto::xorEncrypt(text, keyStr);
        std::cout << "加密结果（可能包含不可见字符）：" << encrypted << std::endl;
    } else {
        std::cout << "无效选择！\n";
    }
    pressAnyKeyToContinue();
}

void Menu::handleTextDecryption() {
    std::string text, keyStr;
    int key;
    std::cout << "\n--- 文本解密 ---\n";
    std::cout << "请输入要解密的文本：";
    std::cin.ignore();
    std::getline(std::cin, text);

    std::cout << "请选择解密方式（1=凯撒密码，2=XOR解密）：";
    int method = getChoice();
    if (method == 1) {
        std::cout << "请输入密钥（整数）：";
        std::cin >> key;
        std::string decrypted = Crypto::caesarDecrypt(text, key);
        std::cout << "解密结果：" << decrypted << std::endl;
    } else if (method == 2) {
        std::cout << "请输入密钥（字符串）：";
        std::cin.ignore();
        std::getline(std::cin, keyStr);
        std::string decrypted = Crypto::xorDecrypt(text, keyStr);
        std::cout << "解密结果：" << decrypted << std::endl;
    } else {
        std::cout << "无效选择！\n";
    }
    pressAnyKeyToContinue();
}

void Menu::handleFileEncryption() {
    std::string inputPath, outputPath, keyStr;
    int key;
    std::cout << "\n--- 文件加密 ---\n";
    std::cout << "请输入要加密的文件路径：";
    std::cin.ignore();
    std::getline(std::cin, inputPath);

    std::cout << "请选择加密方式（1=凯撒密码，2=XOR加密）：";
    int method = getChoice();
    std::string content;
    if (!FileHandler::readFile(inputPath, content)) {
        pressAnyKeyToContinue();
        return;
    }

    if (method == 1) {
        std::cout << "请输入密钥（整数）：";
        std::cin >> key;
        content = Crypto::caesarEncrypt(content, key);
    } else if (method == 2) {
        std::cout << "请输入密钥（字符串）：";
        std::cin.ignore();
        std::getline(std::cin, keyStr);
        content = Crypto::xorEncrypt(content, keyStr);
    } else {
        std::cout << "无效选择！\n";
        pressAnyKeyToContinue();
        return;
    }

    std::cout << "请输入输出文件路径：";
    std::cin.ignore();
    std::getline(std::cin, outputPath);

    if (FileHandler::writeFile(outputPath, content)) {
        std::cout << "加密结果已保存到：" << outputPath << std::endl;
    }
    pressAnyKeyToContinue();
}

void Menu::handleFileDecryption() {
    std::string inputPath, outputPath, keyStr;
    int key;
    std::cout << "\n--- 文件解密 ---\n";
    std::cout << "请输入要解密的文件路径：";
    std::cin.ignore();
    std::getline(std::cin, inputPath);

    std::cout << "请选择解密方式（1=凯撒密码，2=XOR解密）：";
    int method = getChoice();
    std::string content;
    if (!FileHandler::readFile(inputPath, content)) {
        pressAnyKeyToContinue();
        return;
    }

    if (method == 1) {
        std::cout << "请输入密钥（整数）：";
        std::cin >> key;
        content = Crypto::caesarDecrypt(content, key);
    } else if (method == 2) {
        std::cout << "请输入密钥（字符串）：";
        std::cin.ignore();
        std::getline(std::cin, keyStr);
        content = Crypto::xorDecrypt(content, keyStr);
    } else {
        std::cout << "无效选择！\n";
        pressAnyKeyToContinue();
        return;
    }

    std::cout << "请输入输出文件路径：";
    std::cin.ignore();
    std::getline(std::cin, outputPath);

    if (FileHandler::writeFile(outputPath, content)) {
        std::cout << "解密结果已保存到：" << outputPath << std::endl;
    }
    pressAnyKeyToContinue();
}

int Menu::getChoice() {
    int choice;
    std::cin >> choice;
    // 清除输入错误和多余字符
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }
    return choice;
}

void Menu::pressAnyKeyToContinue() {
    std::cout << "按回车键继续...";
    std::cin.ignore();
    std::cin.get();
}