cmake_minimum_required(VERSION 3.7)
project(5_3_task_mod_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp InversionCounter.cpp InversionCounter.h)
add_executable(5_3_task_mod_2 ${SOURCE_FILES})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt COPYONLY)