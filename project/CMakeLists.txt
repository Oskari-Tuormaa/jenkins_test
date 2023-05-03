cmake_minimum_required(VERSION 3.20)
project(Test_project)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(SOURCES
    src/main.cpp
    src/test.cpp
)
include_directories(include)

add_executable(a.out ${SOURCES})
