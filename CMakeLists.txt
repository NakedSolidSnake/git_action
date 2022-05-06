cmake_minimum_required(VERSION 3.09)

project(Hello)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_C_FLAGS "-std=c99 -Wall")
set(CMAKE_BUILD_TYPE Debug)

add_executable(hello main.c)