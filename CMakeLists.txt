cmake_minimum_required(VERSION 3.3)
project(projectC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 4.16varwid.c.cpp)
add_executable(projectC ${SOURCE_FILES})