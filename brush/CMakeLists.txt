cmake_minimum_required(VERSION 3.20)
project(brush)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources
    "main.cpp")
    
add_library(brush SHARED ${sources})
