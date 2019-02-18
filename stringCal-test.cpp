// stringCal_test.cpp
// Author: Bryant Klug
// Created: 17 Feb 2019

#include "catch.hpp"
#include "stringCal.h"

TEST_CASE("String Calculator Test"){
  SECTION("Null string test"){
    REQUIRE( stringCal("") == 0);
  }
  SECTION("Single number returns value test"){
    REQUIRE( stringCal("0") == 0);
  }
}
