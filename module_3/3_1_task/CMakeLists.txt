cmake_minimum_required(VERSION 3.7)
project(3_1_task_mod_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(3_1_task_mod_3 ${SOURCE_FILES})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt COPYONLY)