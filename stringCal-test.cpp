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
    REQUIRE( stringCal("1") == 1);
    REQUIRE( stringCal("10") == 10);
  }
  SECTION("Two, comma delimited values, returned as sum test"){
    REQUIRE( stringCal("1,1") == 2);
    REQUIRE( stringCal("2,1") == 3);
    REQUIRE( stringCal("1,2") == 3);
    REQUIRE( stringCal("1,10") == 11);
    REQUIRE( stringCal("10,1") == 11);
  }
    SECTION("Two, newline delimited values, returned as sum test"){
    REQUIRE( stringCal("1\n1") == 2);
    REQUIRE( stringCal("2\n1") == 3);
    REQUIRE( stringCal("1\n2") == 3);
    REQUIRE( stringCal("1\n10") == 11);
    REQUIRE( stringCal("10\n1") == 11);

  }
}
