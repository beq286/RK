cmake_minimum_required(VERSION 3.4)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(Example01)

add_library(ex STATIC ConceptualExample01.cpp)
