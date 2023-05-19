cmake_minimum_required(VERSION 2.8)/Users/thejoey/Documents/sobel/sobel_cpp/basic_cpp/CMakeLists.txt
project( sobel_basic )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( sobel_basic sobel_basic.cpp )
target_link_libraries( sobel_basic ${OpenCV_LIBS} )
