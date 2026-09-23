//
// Created by Ryan Bond on 9/17/26.
//

#pragma once
#include <assert.h>

#include "Node.h"

template <typename T>
class LinkedList {
public:
    LinkedList(T *value) 
    : head {new Node<T>(value)}
    , tail {new Node<T>(value)}
    , size {1}
    {};
    
    LinkedList() 
    : head {nullptr}
    , size {0} 
    {};
    
    ~LinkedList()
    
    {}
    
    void print() const {
        Node<T> *temp {head};
        
        while (temp != nullptr)
        {
            std::cout << temp->print() << std::endl;
            temp = temp->next;
        }
    }
    
    void append(T *value) {
        Node<T> *newNode {new Node<T>(value)};
        
        if (head == nullptr) {
            head = newNode;
            ++size;
            return;
        } 
        tail->next = newNode;
        tail = newNode;
        ++size;
    }
    
private:
    Node<T> *head;
    Node<T> *tail;
    int size;
    
};
