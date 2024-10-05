# # 设置最低CMake版本
# cmake_minimum_required(VERSION 3.10)

# # 设置项目名称
# project(SmartCarProject)

# # 设置C++标准
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

# # 添加可执行文件
# add_executable(SmartCar main.cpp SmartCar.cpp)

# # 指定头文件搜索路径
# include_directories(${CMAKE_CURRENT_SOURCE_DIR})


# 设置最低CMake版本
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(SmartCarProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 指定源文件目录
set(SOURCE_DIR src)

# 查找所有源文件
file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp")

# 添加可执行文件
add_executable(SmartCar ${SOURCES})

# 指定头文件搜索路径
include_directories(${SOURCE_DIR})

