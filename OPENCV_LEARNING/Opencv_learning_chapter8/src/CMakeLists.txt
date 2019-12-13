# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
 
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(7_t1 7_t1.cpp)
target_link_libraries(7_t1 ${OpenCV_LIBS})