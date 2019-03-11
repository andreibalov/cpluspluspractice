cmake_minimum_required(VERSION 3.5)
project(binarysearch C CXX)
set(SOURCE_FILES binarysearch.h main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})