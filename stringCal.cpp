// stringCal.cpp
// Author: Bryant Klug
// Created: 17 Feb 2019

#include "stringCal.h"
#include <string>

int stringCal(std::string str){
  if(str.empty()) {
    return 0;
  } else if(str.length() == 3) {
    return stoi(str.substr(0,1)) + stoi(str.substr(2,1));
  } else if(str.length() == 4) {
    if (str.substr(1,1) == ",") {
      return stoi(str.substr(0,1)) + stoi(str.substr(2,2));
    } else {
      return stoi(str.substr(0,2)) + stoi(str.substr(3,1));
    }
  } else {
    return stoi(str);
  }
}
