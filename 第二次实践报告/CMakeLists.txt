cmake_minimum_required(VERSION 3.10)

# 项目名称
project(SmartCarProject)

# C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含源文件目录
include_directories(${PROJECT_SOURCE_DIR}/src)

# 将所有源文件添加到一个列表中
set(SOURCES
    src/main.cpp
    src/AGXKit.cpp
    src/Battery.cpp
    src/Chassis.cpp
    src/Gyroscope.cpp
    src/LCD.cpp
    src/Lidar.cpp
    src/SmartCar.cpp
    src/StereoCamera.cpp
    src/Student.cpp
    src/Tire.cpp
)

# 生成可执行文件
add_executable(SmartCarProject ${SOURCES})
