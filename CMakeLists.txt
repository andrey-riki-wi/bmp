cmake_minimum_required(VERSION 3.16.3)
project(bmp)

set(CMAKE_CXX_STANDARD 17)

add_executable(bmp src/main.cpp
        src/Image.cpp
        include/Image.h
        include/ImageHeader.h)


#gtest
add_subdirectory(external/gtest)

add_executable(test tests/main.cpp)

target_link_libraries(test gtest gtest_main)