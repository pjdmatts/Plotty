cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(Plotty)

file(GLOB project_SRCS src/*.cpp)

add_executable(Plotty ${project_SRCS})