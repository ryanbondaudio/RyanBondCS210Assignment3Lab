#include <iostream>
#include "List.h"
#include "ArrayList.h"
#include "LinkedList.h"
#include "Data.h"




int main() {
    std::unique_ptr<List<int>> list = makeList<int>();
    
    list->addFront(new int(10));
    list->addFront(new int(20));
    list->addFront(new int(30));
    list->print();
    
    return 0;
}