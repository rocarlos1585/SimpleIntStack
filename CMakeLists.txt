cmake_minimum_required(VERSION 3.5)
project(PalindromeWordWithStack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LinearStack.h)
add_executable(PalindromeWordWithStack ${SOURCE_FILES})