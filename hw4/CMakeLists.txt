cmake_minimum_required(VERSION 3.22)
project(hw4)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw4
        disparity.cpp
        #gaussnewton.cpp
        #undistort_image.cpp
        )

find_package( OpenCV REQUIRED )
find_package( Pangolin REQUIRED )
include_directories(
        ${OPENCV_INCLUDE_DIRS}
        ${Pangolin_INCLUDE_DIRS}
        )

target_link_libraries( hw4
        ${OpenCV_LIBS}
        ${Pangolin_LIBRARIES}
        )

