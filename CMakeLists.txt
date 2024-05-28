cmake_minimum_required(VERSION 3.22)

project(example)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(ex ${CMAKE_CURRENT_SOURCE_DIR}/ConceptualExample01.cpp)
add_library(ex1 ${CMAKE_CURRENT_SOURCE_DIR}/ConceptualExample02.cpp)
add_library(points ${CMAKE_CURRENT_SOURCE_DIR}/Points.cpp)
add_library(real ${CMAKE_CURRENT_SOURCE_DIR}/RealWorldFactoryMethod.cpp)
add_executable(example ${CMAKE_CURRENT_SOURCE_DIR}/Program.cpp)

target_link_libraries(example ex)
target_link_libraries(example ex1)
target_link_libraries(example points)
target_link_libraries(example real)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(googletest)
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES *.cpp)
  add_executable(check Testy.cpp)
  target_link_libraries(check gtest_main)
  add_test(NAME check COMMAND check)
endif()

install(TARGETS example RUNTIME DESTINATION bin)

include(CPack.cmake)
