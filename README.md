AmazingPlayerProject/
│
├── main.cpp              # 应用程序入口点
├── src/                  # 主源代码目录
│   ├── ui/                    
│   │   ├── src/              # UI模块源代码
│   │   │   ├── MainWindow.cpp    # 主窗口实现
│   │   │   ├── PlayButton.cpp    # 播放按钮实现
│   │   │   ├── VolumeSlider.cpp  # 音量滑块实现
│   │   │   └── ...              
│   │   └── include/          # UI模块头文件
│   │       ├── MainWindow.h    # 主窗口头文件
│   │       ├── PlayButton.h    # 播放按钮头文件
│   │       ├── VolumeSlider.h  # 音量滑块头文件
│   │       └── ...              
│   ├── gstreamer/            # GStreamer封装层
│   │   ├── src/              # GStreamer模块源代码
│   │   │   ├── MediaPipeline.cpp # 媒体管道管理
│   │   │   ├── AudioDecoder.cpp  # 音频解码器封装
│   │   │   ├── VideoDecoder.cpp  # 视频解码器封装
│   │   │   └── ...               # 其他GStreamer封装模块
│   │   └── include/          # GStreamer模块头文件
│   │       ├── MediaPipeline.h # 媒体管道管理头文件
│   │       ├── AudioDecoder.h  # 音频解码器头文件
│   │       ├── VideoDecoder.h  # 视频解码器头文件
│   │       └── ...              # 其他GStreamer头文件
│   ├── control/              # 媒体控制层
│   │   ├── src/              # 媒体控制模块源代码
│   │   │   ├── MediaController.cpp # 媒体控制逻辑
│   │   │   └── PlaylistManager.cpp # 播放列表管理
│   │   └── include/          # 媒体控制模块头文件
│   │       ├── MediaController.h # 媒体控制逻辑头文件
│   │       └── PlaylistManager.h # 播放列表管理头文件
│   ├── display/              # 进度条和时间显示层
│   │   ├── src/              # Display模块源代码
│   │   │   ├── ProgressBar.cpp   # 进度条实现
│   │   │   ├── TimeDisplay.cpp   # 时间显示实现
│   │   │   └── ...               # 其他显示元素实现
│   │   └── include/          # Display模块头文件
│   │       ├── ProgressBar.h   # 进度条头文件
│   │       ├── TimeDisplay.h   # 时间显示头文件
│   │       └── ...              # 其他显示元素头文件
│   ├── fullscreen/           # 全屏模式管理层
│   │   ├── src/              # Fullscreen模块源代码
│   │   │   └── FullscreenManager.cpp # 全屏模式逻辑
│   │   └── include/          # Fullscreen模块头文件
│   │       └── FullscreenManager.h # 全屏模式逻辑头文件
│   ├── errors/               # 错误处理和日志层
│   │   ├── ErrorHandler.cpp  # 错误处理逻辑
│   │   └── Logger.cpp        # 日志记录
│   ├── customization/        # 自定义外观和主题层
│   │   ├── src/              # Customization模块源代码
│   │   │   ├── ThemeManager.cpp  # 主题管理逻辑
│   │   │   └── SettingsDialog.cpp # 设置对话框
│   │   └── include/          # Customization模块头文件
│   │       ├── ThemeManager.h  # 主题管理逻辑头文件
│   │       └── SettingsDialog.h # 设置对话框头文件
│   ├── platform/             # 跨平台适配层
│   │   ├── src/              # Platform模块源代码
│   │   │   ├── LinuxAdapter.cpp  # Linux平台适配
│   │   │   └── WindowsAdapter.cpp# Windows平台适配
│   │   └── include/          # Platform模块头文件
│   │       ├── LinuxAdapter.h  # Linux平台适配头文件
│   │       └── WindowsAdapter.h# Windows平台适配头文件
│   ├── tests/                # 测试层
│   │   ├── src/              # Tests模块源代码
│   │   │   ├── UnitTests.cpp     # 单元测试
│   │   │   └── IntegrationTests.cpp # 集成测试
│   │   └── include/          # Tests模块头文件
│   │       ├── UnitTests.h     # 单元测试头文件
│   │       └── IntegrationTests.h # 集成测试头文件
│   └── ...
├── include/                  # 主头文件目录
│   └── ...                   
├── CMakeLists.txt            # CMake构建文件
├── README.md                 # 项目文档
└── .gitignore                # Git忽略文件
