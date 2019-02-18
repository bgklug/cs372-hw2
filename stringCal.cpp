// stringCal.cpp
// Author: Bryant Klug
// Created: 17 Feb 2019

#include "stringCal.h"
#include <string>

int stringCal(std::string str){
  if(str.empty())
    return 0;
  else
    return stoi(str);
}
