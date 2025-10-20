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

项目结构

HelloCV/
├── README.md                             # 项目说明文档
├── 语雀笔记的Markdown链接汇总文档.md         # 语音笔记汇总
├── docs/                                 # 详细文档目录
├── launch.json                           # vscode配置脚本
└── tasks.json                            # vscode配置脚本

联系方式
如有问题请联系：w2583631380@163.com

第二阶段第二周任务

项目结构
HelloCV/
├── README.md                             # 项目说明文档
├── 语雀笔记的Markdown链接汇总文档.md         # 语音笔记汇总
├── 第二周语雀笔记链接汇总文档                # 第二周语雀笔记汇总
├── docs/                                 # 详细文档目录
├── launch.json                           # vscode配置脚本
└── tasks.json                            # vscode配置脚本

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
