cmake_minimum_required(VERSION 3.8)
project(vectors)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.h Person.cpp Resource.h Resource.cpp accum.h)
add_executable(vectors ${SOURCE_FILES})