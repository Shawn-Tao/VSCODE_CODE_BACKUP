cmake_minimum_required(VERSION 2.8)
project(ceresCurveFitting.)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2")

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Ceres
find_package(Ceres REQUIRED)
include_directories(${CERES_INCLUDE_DIRS})

include_directories("/usr/include/eigen3")

add_executable(ceresCurveFitting ceresCurveFitting.cpp)
target_link_libraries(ceresCurveFitting ${OpenCV_LIBS} ${CERES_LIBRARIES})