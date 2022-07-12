#ifndef LIST
#define LIST

#include "Iterator.h"

namespace fhdo_pk2{
    class LinkedList{
    public:
        typedef struct node{
            const char *data;
            node *next;
        }* nodeptr;
        LinkedList();
        LinkedList(const LinkedList &linkedlist);
        ~LinkedList();
        int append(const char* text);
        int insert(const char* text, int p);
        int remove(int p);
        const char *get(int p);
        int index_of(const char *text);
        const char *first();
        const char *last();
        void visit_all(void (*work)(const char* t));
        fhdo_pk2::Iterator* iterator();
    private:
        nodeptr head;
        nodeptr end;
    };
}

#endif