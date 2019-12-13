find_package(OpenCV REQUIRED)
find_package(G2O REQUIRED)
#include_directories("/usr/local/include/g2o/")
set(CMAKE_CXX_FLAGS "-msse4 ${CMAKE_CXX_FLAGS}")
find_package(Sophus REQUIRED)

include_directories(
        ${OpenCV_INCLUDE_DIRS}
        ${Sophus_INCLUDE_DIRS}
        ${G2O_INCLUDE_DIRS}
        "/usr/include/eigen3/"
)

#add_executable(orb_cv orb_cv.cpp)
#target_link_libraries(orb_cv ${OpenCV_LIBS})

#add_executable(orb_self orb_self.cpp)
#target_link_libraries(orb_self ${OpenCV_LIBS})

# add_executable( pose_estimation_2d2d pose_estimation_2d2d.cpp extra.cpp ) # use this if in OpenCV2 
#add_executable(pose_estimation_2d2d pose_estimation_2d2d.cpp)
#target_link_libraries(pose_estimation_2d2d ${OpenCV_LIBS})

# # add_executable( triangulation triangulation.cpp extra.cpp) # use this if in opencv2
#add_executable(triangulation triangulation.cpp)
#target_link_libraries(triangulation ${OpenCV_LIBS})

#add_executable(pose_estimation_3d2d pose_estimation_3d2d.cpp)
#target_link_libraries(pose_estimation_3d2d g2o_core g2o_stuff ${OpenCV_LIBS})

add_executable(pose_estimation_3d3d pose_estimation_3d3d.cpp)
target_link_libraries(pose_estimation_3d3d g2o_core g2o_stuff ${OpenCV_LIBS})

#add_executable(7_practice_2 7_practice_2.cpp)
#target_link_libraries(7_practice_2 ${OpenCV_LIBS})

