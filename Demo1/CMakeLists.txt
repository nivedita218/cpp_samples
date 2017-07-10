cmake_minimum_required(VERSION 3.7)
project(Demo1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StringIntPair.h GenericPair.h StringStringPair.h)
add_executable(Demo1 ${SOURCE_FILES})