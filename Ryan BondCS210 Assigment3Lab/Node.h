//
// Created by Ryan Bond on 9/17/26.
//

#pragma once
#include <iostream>
#include <ostream>

template <typename  T>
class Node
{
public:
        Node(T *value) 
        : value {value}
        , next {nullptr}
        {};
        
        void print() {
                value->print();
        }
    
    
private:
        T *value;
        Node<T> *next;
    
    
    
};
