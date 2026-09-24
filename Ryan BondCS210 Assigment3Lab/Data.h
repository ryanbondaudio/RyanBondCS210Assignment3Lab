//
// Created by Ryan Bond on 9/17/26.
//

#pragma once

#include <ostream>
#include <string>

class Data {
public:
    Data(int numID, const std::string& name)
    : numID_(numID)
    , name_(name)
    {}
    
    bool operator==(const Data& other) const {
        return numID_ == other.numID_;
    }
    
    friend std::ostream& operator<<(std::ostream& out, const Data& d) {
        return out << d.name_ << "_" << d.numID_;
    }
    
private:
    int numID_;
    std::string name_;
    
};


