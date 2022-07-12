#ifndef LISTITER
#define LISTITER

#include "Iterator.h"
#include "node.h"

namespace fhdo_pk2 {
    template<typename T> class ListIterator : public Iterator<T>{
        node<T>* current;
    public:
        ListIterator();
        ListIterator(node<T>* head);
        bool hasNext() override;
        const T* next() override;
    };

}  // namespace fhdo_pk2

#include "linkedlist.cpp"

#endif