cmake_minimum_required(VERSION 3.5)
project(quicksort)

set(SOURCE_FILES main.cpp quicksort.h)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})