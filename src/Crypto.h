// Crypto.h - 负责加密解密的功能
#ifndef CRYPTO_H
#define CRYPTO_H

#include <string>

class Crypto {
public:
    // 凯撒密码加密：把文字往后移动key位
    static std::string caesarEncrypt(const std::string& text, int key);

    // 凯撒密码解密：把文字往前移动key位
    static std::string caesarDecrypt(const std::string& text, int key);

    // XOR加密：用密钥对文字进行异或操作
    static std::string xorEncrypt(const std::string& text, const std::string& key);

    // XOR解密：用相同的密钥再次异或就能恢复
    static std::string xorDecrypt(const std::string& text, const std::string& key);
};

#endif