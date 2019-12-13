cmake_minimum_required(VERSION 2.8)
project(OpenCV_Learning.cpp)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(cv.out Question_4_1abc.cpp)
target_link_libraries(cv.out ${OpenCV_LIBS})