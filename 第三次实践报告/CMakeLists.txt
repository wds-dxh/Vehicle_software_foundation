cmake_minimum_required(VERSION 3.22)
project(ThirdPractice)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/src)

set(SOURCES
    src/main.cpp
    src/ObstaclePublisher.cpp
    src/ObstacleSubscriber.cpp
)

add_executable(ThirdPractice ${SOURCES})
