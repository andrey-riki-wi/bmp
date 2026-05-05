cmake_minimum_required(VERSION 3.16.3)
project(bmp)

set(CMAKE_CXX_STANDARD 17)

add_executable(bmp main.cpp
        src/Hello.cpp
        src/Hello.h
        src/Hello2.cpp
        src/Hello2.h)