cmake_minimum_required(VERSION 3.22)
project(test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE "Release")

add_executable(test
        test.cpp)



find_package( OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
target_link_libraries( test ${OpenCV_LIBS} )

message(STATUS ${OpenCV_LIBS})
message(STATUS ${OpenCV_INCLUDE_DIRS})
