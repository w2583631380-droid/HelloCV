//
// Created by hlp on 2025/10/18.
//
// Menu.h - 负责显示菜单和处理用户输入
#ifndef MENU_H
#define MENU_H

class Menu {
public:
    void showMainMenu();                    // 显示主菜单
    void handleTextEncryption();           // 处理文本加密
    void handleTextDecryption();           // 处理文本解密
    void handleFileEncryption();           // 处理文件加密
    void handleFileDecryption();           // 处理文件解密

private:
    int getChoice();                       // 获取用户选择
    void pressAnyKeyToContinue();          // 暂停等待用户按键
};

#endif