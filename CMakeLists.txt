# 设置项目名称和最低要求的CMake版本
cmake_minimum_required(VERSION 3.16)
project(AmazingPlayer)

# 查找 GTK3 包
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 QUIET gtk+-3.0)
# 如果找到了 GTK3 包，就链接 GTK3 库，否则定义 NEEDMOCK
if(GTK3_FOUND)
    include_directories(${GTK3_INCLUDE_DIRS})
    target_link_libraries(AmazingPlayer ${GTK3_LIBRARIES})
else()
    message("GTK3 not found, using mock.")
    ADD_DEFINITIONS(-DNEEDMOCK)
endif()

# 添加子目录，包括 ui 模块
add_subdirectory(AmazingPlayerImpl/ui)
add_subdirectory(AmazingPlayerImpl/gstreamer)

# 设置主项目的源文件
set(SOURCES
    ./main.cpp
    # 添加其他主项目的源文件
)

# 创建可执行文件并链接 ui 库
add_executable(AmazingPlayer ${SOURCES})
target_link_libraries(AmazingPlayer ui)


target_link_libraries(AmazingPlayer GST)

target_include_directories(AmazingPlayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/AmazingPlayerImpl/ui/inc)
target_include_directories(AmazingPlayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/AmazingPlayerImpl/mock/inc)
target_include_directories(AmazingPlayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/AmazingPlayerImpl/gstreamer/inc)
target_include_directories(AmazingPlayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/AmazingPlayerImpl/common)


message("GTK3_INCLUDE_DIRS: ${GTK3_INCLUDE_DIRS}")
message("GTK3_LIBRARIES: ${GTK3_LIBRARIES}")
message("GTK3_FOUND: ${GTK3_FOUND}")
