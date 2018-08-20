cmake_minimum_required(VERSION 3.8)
project(Project8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Input.cpp
        Makefile
        Parse.h
        String.h
        cmake-build-debug/test1.blip
        cmake-build-debug/test2.blip
        cmake-build-debug/test3.blip
        cmake-build-debug/test4.blip main.cpp project8.cpp)

add_executable(Project8 ${SOURCE_FILES})