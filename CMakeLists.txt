cmake_minimum_required(VERSION 3.3)
project(untitled15)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp My.cpp My.h My2.cpp My2.h new.cpp)
add_executable(untitled15 ${SOURCE_FILES})

