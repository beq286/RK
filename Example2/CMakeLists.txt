cmake_minimum_required(VERSION 3.4)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(Example02)

add_library(ex2 STATIC ConceptualExample02.cpp)
