#ifndef LIST
#define LIST

#include "Iterator.h"
#include "node.h"

namespace fhdo_pk2{
    
    template<typename T> class LinkedList{
    public:
        LinkedList();
        LinkedList(const LinkedList<T> &linkedlist);
        ~LinkedList();
        int append(const T* thing);
        int insert(const T* thing, int p);
        int remove(int p);
        const T *get(int p);
        int index_of(const T *thing);
        const T *first();
        const T *last();
        void visit_all(void (*work)(const T* things));
        fhdo_pk2::Iterator<T>* iterator();
        typedef node<T>* nodeptr;
    private:
        nodeptr head;
        nodeptr end;
    };
}

#include "linkedlist.cpp"

#endif