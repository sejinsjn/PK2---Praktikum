#ifndef LISTITER
#define LISTITER

#include "linkedlist.h"

namespace fhdo_pk2 {

    class ListIterator : public Iterator{
        LinkedList::nodeptr current;
    public:
        ListIterator(LinkedList::nodeptr head);
        bool hasNext() override;
        const char* next() override;
    };

}  // namespace fhdo_pk2

#endif