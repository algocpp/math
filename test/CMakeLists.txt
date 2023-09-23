cmake_minimum_required(VERSION 3.0)

project(algocpp_math_test CXX)
set(CMAKE_CXX_STANDARD 20)

include_directories(./algocpp/includes/)

add_executable(fact fact.cpp)
add_executable(gcd gcd.cpp)

target_link_libraries(fact gtest_main gtest)
target_link_libraries(gcd gtest_main gtest)