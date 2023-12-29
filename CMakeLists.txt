# CMakeLists.txt for AmazingPlayer project

# 设置项目名称和最低要求的CMake版本
cmake_minimum_required(VERSION 3.16)
project(AmazingPlayer)

# 添加子目录，包括ui模块
add_subdirectory(src/ui)

# 设置主项目的源文件
set(SOURCES
    ./main.cpp
    # 添加其他主项目的源文件
)

# 创建可执行文件并链接ui库
add_executable(AmazingPlayer ${SOURCES})
target_link_libraries(AmazingPlayer ui)

target_include_directories(AmazingPlayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/inc)
