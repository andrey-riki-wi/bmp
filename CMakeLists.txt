cmake_minimum_required(VERSION 3.28.3)
project(bmp)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(bmp main.cpp)

add_subdirectory(lib/gtest)
add_executable(test tests/main.cpp)
target_link_libraries(test gtest)