// stringCal.cpp
// Author: Bryant Klug
// Created: 17 Feb 2019

#include "stringCal.h"
#include <string>

int stringCal(std::string str){
  if(str.empty()) {
    return 0;
  } else if(str.length() > 2) {
    return stoi(str.substr(0,1)) + stoi(str.substr(2,1));
  } else {
    return stoi(str);
  }
}
