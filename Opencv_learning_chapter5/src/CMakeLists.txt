# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
 
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(5_1 5_1.cpp)
target_link_libraries(5_1 ${OpenCV_LIBS})

add_executable(5_2 5_2.cpp)
target_link_libraries(5_2 ${OpenCV_LIBS})

add_executable(5_3 5_3.cpp)
target_link_libraries(5_3 ${OpenCV_LIBS})

add_executable(5_4 5_4.cpp)
target_link_libraries(5_4 ${OpenCV_LIBS})

add_executable(5_5 5_5.cpp)
target_link_libraries(5_5 ${OpenCV_LIBS})

add_executable(5_6 5_6.cpp)
target_link_libraries(5_6 ${OpenCV_LIBS})