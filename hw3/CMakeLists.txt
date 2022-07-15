cmake_minimum_required(VERSION 3.22)
project(hw3)

set(CMAKE_CXX_STANDARD 14)

find_package( Sophus REQUIRED)
include_directories( ${Sophus_INCLUDE_DIRS} )

find_package( Pangolin REQUIRED)
include_directories( ${Pangolin_INCLUDE_DIRS} )

find_package( Eigen3 REQUIRED )
include_directories( "/usr/local/include/eigen3" )
# include_directories( Eigen3_INCLUDE_DIRS )   //error

add_executable(hw3
        draw_trajectory.cpp)
