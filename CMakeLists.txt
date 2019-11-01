cmake_minimum_required(VERSION 3.15)
project(CppDemo)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(utils)

add_executable(CppDemo main.cpp utils/list.cpp utils/list.h)