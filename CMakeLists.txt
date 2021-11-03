cmake_minimum_required(VERSION 3.20)
project(CodewarsHistory)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
add_executable(CodewarsHistory 8kyo.h Tests.cpp)
target_link_libraries(CodewarsHistory gtest gtest_main)