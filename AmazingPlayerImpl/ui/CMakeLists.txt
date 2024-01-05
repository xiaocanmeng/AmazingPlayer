# CMakeLists.txt for ui module

# 设置当前目录下的源文件列表
set(UI_SOURCES
    src/MainWindow.cpp
    # src/PlayButton.cpp
    # src/VolumeSlider.cpp
    # 添加其他源文件
)

# 设置当前目录下的头文件列表
set(UI_HEADERS
    inc/MainWindow.h
    # include/PlayButton.h
    # include/VolumeSlider.h
    # 添加其他头文件
)

# 将源文件和头文件添加到库中
add_library(ui ${UI_SOURCES} ${UI_HEADERS})

# 添加包含目录，以便在其他目录中引用头文件
target_include_directories(ui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

# 添加链接到其他库的任何必要的内容
# 例如，如果ui模块依赖于某些第三方库，可以在这里添加链接

# 将库的输出目录设置为ui目录下的lib子目录
set_target_properties(ui PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
