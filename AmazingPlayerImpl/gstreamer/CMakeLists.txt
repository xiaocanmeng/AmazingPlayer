# CMakeLists.txt for GST module

# 设置当前目录下的源文件列表
set(GST_SOURCES
    src/MediaPipeline.cpp
    # src/PlayButton.cpp
    # src/VolumeSlider.cpp
    # 添加其他源文件
)

# 设置当前目录下的头文件列表
set(GST_HEADERS
    inc/MediaPipeline.h
    # include/PlayButton.h
    # include/VolumeSlider.h
    # 添加其他头文件
)

# 将源文件和头文件添加到库中
add_library(GST ${GST_SOURCES} ${GST_HEADERS})

# 查找GStreamer库
find_package(PkgConfig REQUIRED)
pkg_check_modules(GST REQUIRED gstreamer-1.0)

# 添加包含目录，以便在其他目录中引用头文件
target_include_directories(GST
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/AmazingPlayerImpl/common
    ${CMAKE_SOURCE_DIR}/AmazingPlayerImpl/mock/inc
    ${GST_INCLUDE_DIRS}  # Include GStreamer headers
)

# 添加链接到其他库的任何必要的内容

# 将库的输出目录设置为gstreamer目录下的lib子目录
set_target_properties(GST PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# 链接GStreamer库
target_link_libraries(GST
    PUBLIC
    ${GST_LIBRARIES}
)
