cmake_minimum_required(VERSION 3.3)
project(2_lab_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 2-lab-5.c)
add_executable(2_lab_5 ${SOURCE_FILES})