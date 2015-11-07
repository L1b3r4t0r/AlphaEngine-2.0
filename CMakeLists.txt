cmake_minimum_required(VERSION 3.3)
project(AlphaEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(AlphaEngine ${SOURCE_FILES} base/base.cpp base/base.h)