# CMakeLists.txt - 告诉CMake如何构建我们的项目
cmake_minimum_required(VERSION 3.10)  # 需要CMake最低版本

project(CryptoTool)  # 项目名称

set(CMAKE_CXX_STANDARD 11)  # 使用C++11标准

# 设置可执行文件输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含头文件目录
include_directories(${CMAKE_SOURCE_DIR}/src)

# 添加可执行文件，列出所有需要编译的源文件
add_executable(CryptoTool
        src/main.cpp
        src/Crypto.cpp
        src/FileHandler.cpp
        src/Menu.cpp
)

# 设置可执行文件属性
set_target_properties(CryptoTool PROPERTIES
        OUTPUT_NAME "CryptoTool"
)