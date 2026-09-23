//
// Created by Ryan Bond on 9/15/26.
//

#pragma once
#include <assert.h>
#include <iostream>

template <typename T>
class ArrayList {
public:
    /** Constructor sets size to 0 by default.*/
    ArrayList()
    : size{0}
    , data{}
    {}
    
    /** Adds an item at the beginning of the list */
    void addItem(const T& item) {
        assert(size < CAPACITY);
        
        for (auto i = size; i > 0; --i) {
            data[i] = data[i - 1];
        }
        
        data[0] = item;
        ++size;
    }
    
    /** Deletes the item held at the first index, shrinking the list */
    void deleteFront() {
        assert(size > 0);
        
        for (auto i = 0; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
    }
    
    /** Determines whether an item exists in the list */
    bool searchItem(const T& item) const {
        assert(size >= 0);
        assert(size < CAPACITY + 1);
        
        for (auto i = 0; i < size; ++i)
        {
            if (data[i] == item)
                    return true;
        }
        return false;
    }

    /** Prints the list to the console */
    void printList() const {
        for (auto i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        
        std::cout << "\n";
    }
    
    /** Adds an item to the end of the list */
    void addBack(const T& item) {
        assert(size < CAPACITY);
        
        ++size;
        data[size - 1] = item;
    }
    
    /** Deletes an item from the back of the list */
    void deleteBack()   {
        assert(size > 0);
        
        --size;
    }
    
private:
    static constexpr int CAPACITY {20};
    T data[CAPACITY];
    int size;
    
};
