//
// Created by Ryan Bond on 9/17/26.
//

#include "Data.h"

#include <iostream>
#include <ostream>
#include <string_view>

class Data
{
public: 
    Data(std::string_view name, int numID)  
    : name{name}
    , numID{numID}
    {}
    
    void print() const {
        std::cout << numID << " " << name << std::endl;
    }
    
    private: 
    std::string_view name;
    int numID;
};
  

