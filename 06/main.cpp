#include "linkedlist.h"
#include <iostream>
#include <iomanip>

int main(){
    LinkedList linkedlist;

    std::cout << linkedlist.insert("bebe2", 0) << linkedlist.append("hallo") 
        << linkedlist.append("idiot") << linkedlist.append("idiot2") << linkedlist.insert("bebe", 0) << linkedlist.get(1) 
        << linkedlist.remove(1)
        << linkedlist.get(1) << linkedlist.index_of("hallo")
        << linkedlist.first() << linkedlist.last();

    return 0;
}