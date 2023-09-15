cmake_minimum_required(VERSION 3.0)

project(algocpp_math_test CXX)

add_executable(fact fact.cpp)
target_link_libraries(fact gtest_main gtest)