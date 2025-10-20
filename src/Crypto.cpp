// Crypto.cpp - 实现加密解密的具体代码
#include "Crypto.h"
#include <string>

// 凯撒加密：每个字母往后移动key位
std::string Crypto::caesarEncrypt(const std::string& text, int key) {
    std::string result = "";

    for (char c : text) {
        if (isalpha(c)) {  // 如果是字母
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + key) % 26 + base;
        }
        result += c;
    }
    return result;
}

// 凯撒解密：每个字母往前移动key位
std::string Crypto::caesarDecrypt(const std::string& text, int key) {
    return caesarEncrypt(text, 26 - key);  // 往前移动就是往后移动26-key
}

// XOR加密：每个字符与密钥的对应字符进行异或操作
std::string Crypto::xorEncrypt(const std::string& text, const std::string& key) {
    std::string result = "";

    for (size_t i = 0; i < text.length(); i++) {
        result += text[i] ^ key[i % key.length()];
    }
    return result;
}

// XOR解密：与加密完全相同
std::string Crypto::xorDecrypt(const std::string& text, const std::string& key) {
    return xorEncrypt(text, key);  // XOR加密和解密是一样的
}//
// Created by hlp on 2025/10/18.
//