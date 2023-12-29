AmazingPlayerProject/
│
├── src/                      # 主源代码目录
│   ├── main.cpp              # 应用程序入口点
│   ├── ui/                   # 用户界面层
│   │   ├── MainWindow.cpp    # 主窗口实现
│   │   ├── PlayButton.cpp    # 播放按钮实现
│   │   ├── VolumeSlider.cpp  # 音量滑块实现
│   │   └── ...               # 其他用户界面元素实现
│   ├── gstreamer/            # GStreamer封装层
│   │   ├── MediaPipeline.cpp # 媒体管道管理
│   │   ├── AudioDecoder.cpp  # 音频解码器封装
│   │   ├── VideoDecoder.cpp  # 视频解码器封装
│   │   └── ...               # 其他GStreamer封装模块
│   ├── control/              # 媒体控制层
│   │   ├── MediaController.cpp # 媒体控制逻辑
│   │   └── PlaylistManager.cpp # 播放列表管理
│   ├── display/              # 进度条和时间显示层
│   │   ├── ProgressBar.cpp   # 进度条实现
│   │   ├── TimeDisplay.cpp   # 时间显示实现
│   │   └── ...               # 其他显示元素实现
│   ├── fullscreen/           # 全屏模式管理层
│   │   └── FullscreenManager.cpp # 全屏模式逻辑
│   ├── errors/               # 错误处理和日志层
│   │   ├── ErrorHandler.cpp  # 错误处理逻辑
│   │   └── Logger.cpp        # 日志记录
│   ├── customization/        # 自定义外观和主题层
│   │   ├── ThemeManager.cpp  # 主题管理逻辑
│   │   └── SettingsDialog.cpp # 设置对话框
│   ├── platform/             # 跨平台适配层
│   │   ├── LinuxAdapter.cpp  # Linux平台适配
│   │   └── WindowsAdapter.cpp# Windows平台适配
│   └── tests/                # 测试层
│       ├── UnitTests.cpp     # 单元测试
│       └── IntegrationTests.cpp # 集成测试
├── include/                  # 头文件目录
│   ├── ui/                   # 用户界面头文件
│   ├── gstreamer/            # GStreamer封装头文件
│   ├── control/              # 媒体控制头文件
│   ├── display/              # 显示头文件
│   ├── fullscreen/           # 全屏模式头文件
│   ├── errors/               # 错误处理和日志头文件
│   ├── customization/        # 自定义外观和主题头文件
│   ├── platform/             # 跨平台适配头文件
│   └── tests/                # 测试头文件
├── CMakeLists.txt            # CMake构建文件
├── README.md                 # 项目文档
└── .gitignore                # Git忽略文件
