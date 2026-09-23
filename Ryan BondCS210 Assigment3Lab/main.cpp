#include <iostream>
#include "ArrayList.h"



int main() {
    ArrayList<int> a;
    
    a.addItem(1);
    a.addItem(2);
    a.addItem(3);
    a.searchItem(3);
    
    a.printList();
    
    return 0;
}