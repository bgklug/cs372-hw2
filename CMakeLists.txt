cmake_minimum_required (VERSION 3.1)
project (stringCalc)
set(CMAKE_CXX_STANDARD 17)
add_executable(stringCalc stringCal.cpp stringCal.h stringCal-test.cpp catch.hpp catch-main.cpp)
