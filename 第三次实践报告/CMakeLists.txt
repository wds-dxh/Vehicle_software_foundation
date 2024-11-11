cmake_minimum_required(VERSION 3.22)
project(ThirdPractice)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/src)

set(PUBLISHER_SOURCES
    src/ObstaclePublisher.cpp
    src/publisher_main.cpp
)

set(SUBSCRIBER_SOURCES
    src/ObstacleSubscriber.cpp
    src/subscriber_main.cpp
)

add_executable(ObstaclePublisher ${PUBLISHER_SOURCES})
add_executable(ObstacleSubscriber ${SUBSCRIBER_SOURCES})
