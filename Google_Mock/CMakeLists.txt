cmake_minimum_required(VERSION 3.7)
project(GoogleMock)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(libs/googletest)
include_directories(libs/googletest/googletest/include)
include_directories(libs/googletest/googlemock/include)
include_directories(src)

set(SOURCE_FILES test/MockTurtleTest.cpp)
add_executable(GoogleMock ${SOURCE_FILES})
target_link_libraries(GoogleMock gmock gmock_main)