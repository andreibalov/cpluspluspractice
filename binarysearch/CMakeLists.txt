cmake_minimum_required(VERSION 3.5)
project(binarysearch C CXX)
#add_definitions(-Werror) # stop compile on warning
add_definitions(-std=c++14)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Werror")

# if(CMAKE_COMPILER_IS_GNUCXX)
    # message(STATUS "GCC detected, adding compile flags")
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pedantic -Wall -Wextra")
# endif(CMAKE_COMPILER_IS_GNUCXX)

# if(MSVC)
  # # Force to always compile with W4
  # if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    # string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  # else()
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  # endif()
# elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # # Update if necessary
  # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
# endif()

# add_definitions(-std=c++11 -Wall -Werror)
# ...
# remove_definitions(-Werror)
# add_subdirectory(test_app1)
# add_definitions(-Werror)

if(CMAKE_BUILD_TOOL MATCHES "(msdev|devenv|nmake)")
    add_definitions(/W2)
endif()

file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

set(SOURCE_FILES ${SOURCE_FILES})

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin CACHE PATH "Runtime output dir")
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Library output dir")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Library output dir")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})