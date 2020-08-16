cmake_minimum_required(VERSION 3.14)
project(lab03-opp)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES Person.cpp Person.h Professor.cpp Professor.h)

add_executable(Lab03-opp ${SOURCE_FILES})