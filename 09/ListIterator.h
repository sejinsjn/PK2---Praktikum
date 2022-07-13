#ifndef LISTITER
#define LISTITER

#include "node.h"
#include "Iterator.h"

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

#include "ListIterator.cpp"

#endif