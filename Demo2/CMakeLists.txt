cmake_minimum_required(VERSION 3.7)
project(LinkedList)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

set(SOURCE_FILES
        LinkedList.h
        LinkedList.cpp
        main.cpp)

add_executable(LinkedList ${SOURCE_FILES})