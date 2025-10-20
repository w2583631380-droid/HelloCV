# HelloCV
哈v联创视觉科创竞培营2025第二阶段学习考核

项目简介
第二阶段学习考核项目，包含 Linux 系统配置、开发环境搭建和 Git 版本控制的实践记录。

环境
    硬件：Dell vostro 3490 
    CPU    Intel(R)Core(TM) i5-10210U CPU @ 1.60GHz x86 Family 6 Model 14 Stepping 12
    内存    SK Hynix(2667 MHz）；Micron（2667 MHz）；总共2根。共：8040MB（约8G)
    主板    Dell Inc. OPMDJ1
    硬盘    ASint AS528 512GB;CCJN256G58T；总共2块。
    操作系统：Ubuntu 22.04.5 LTS
    开发工具：ROS2、OpenCV 4.5.x、VS Code、Git

分支说明

重要提示：本项目包含两个分支：

    main：当前查看的分支，包含基础项目说明

    master：主要开发分支，包含完整的项目代码和文档
    
项目结构 https://github.com/w2583631380-droid/HelloCV

HelloCV/
├── README.md                             # 项目说明文档
├── 语雀笔记的Markdown链接汇总文档.md         # 语音笔记汇总
├── docs/                                 # 详细文档目录
├── launch.json                           # vscode配置脚本
└── tasks.json                            # vscode配置脚本

项目结构（master分支）https://github.com/w2583631380-droid/HelloCV/tree/master

在master分支中，项目具有完整的文件结构：
text

HelloCV/
├── src/                    # 源代码目录
│   ├── main.cpp           # 程序入口
│   ├── Crypto.cpp         # 加密解密算法实现
│   ├── Crypto.h           # 加密解密头文件
│   ├── FileHandler.cpp    # 文件操作实现
│   ├── FileHandler.h      # 文件操作头文件
│   ├── Menu.cpp           # 用户界面实现
│   └── Menu.h             # 用户界面头文件
├── examples/              # 示例文件目录
│   ├── input.txt          # 输入测试文件
│   └── encrypted.txt      # 加密输出文件
├── CMakeLists.txt         # CMake构建配置
└── README.md             # 项目说明文档

功能说明
1. 文本加密

    输入要加密的文本和密钥

    选择加密算法（凯撒密码或XOR）

    输出加密后的文本

2. 文本解密

    输入加密文本和密钥

    选择对应的解密算法

    输出解密后的原始文本

3. 文件加密

    输入要加密的文件路径

    输入密钥并选择算法

    指定输出文件路径

    生成加密文件

4. 文件解密

    输入加密文件路径

    输入密钥并选择算法

    指定输出文件路径

    生成解密文件

使用示例
文本加密示例：
text

请输入要加密的文本：Hello, World!
请输入密钥：3
加密结果：Khoor, Zruog!

文件加密示例：
text

请输入要加密的文件路径：examples/input.txt
请输入密钥：5
加密结果已保存到：examples/encrypted.txt

联系方式
如有问题请联系：w2583631380@163.com

许可证
本项目仅用于学习目的。
