// stringCal_test.cpp
// Author: Bryant Klug
// Created: 17 Feb 2019

#include "catch.hpp"
#include "stringCal.h"

TEST_CASE("Null String"){
    REQUIRE( stringCal("") == 0);
}
