#ifndef LINKEDLIST
#define LINKEDLIST

#include <cstdlib>
#include <iostream>
#include "linkedlist.h"
#include "ListIterator.h"

using namespace fhdo_pk2;

template <typename T>
LinkedList<T>::LinkedList(){
    head = NULL;
    end = NULL;
}

template <typename T> 
LinkedList<T>::LinkedList(const LinkedList<T>& linkedlist) {
    head = NULL;
    end = NULL;
    nodeptr current = linkedlist.head;
    while(current != NULL){
        LinkedList::append(current->thing);
        current = current->next;
    }
}

template <typename T>
LinkedList<T>::~LinkedList(){ delete head; }

template <typename T>
int LinkedList<T>::append(const T* thing){
    nodeptr newN = (nodeptr)malloc(sizeof(nodeptr));
    newN->thing = thing;
    newN->next = NULL;

    if(head == NULL){
        head = newN;
        end = newN;
        return 1;
    }

    nodeptr tmp = end;
    tmp->next = newN;
    end = newN;
    return 1;
};

template <typename T>
int LinkedList<T>::insert(const T* thing, int p){
    int i = 0;
    nodeptr current = head;
    nodeptr newN = (nodeptr)malloc(sizeof(nodeptr));
    newN->thing = thing;

    if(p == 0 && head != NULL){
        newN->next = head;
        head = newN;
        return 1;
    }

    while(current != NULL){ 
        if(p-1 == i++){
            newN->next = current->next;
            current->next = newN;
            return 1;
        }

        current = current->next;
    }

    return append(thing);
};

template <typename T>
int LinkedList<T>::remove(int p){
    int i = 0;
    nodeptr current = head;

    if(p == 0 && head != NULL){
        head = head->next;
        return 1;
    }

    while(current->next->next != NULL) {
        if(p-1 == i++){
            current->next = current->next->next;
            return 1;
        }
        current = current->next;
    }

    current->next = NULL;
    return 1;
};

template <typename T>
const T *LinkedList<T>::get(int p){
    int i = 0;
    nodeptr current = head;

    while (current != NULL){
        if (p == i++){
            return current->thing;
        }
        current = current->next;
    }

    return nullptr;
}

template <typename T>
int LinkedList<T>::index_of(const T *thing){
    int i = 0;

    nodeptr current = head;

    while(current != NULL){
        if(current->thing == thing)
            return i;
        i++;
        current = current->next;
    }

    return -1;
}

template <typename T>
const T *LinkedList<T>::first(){
    if(head != NULL) return head->thing;

    return nullptr;
};

template <typename T>
const T *LinkedList<T>::last(){
    if(end != NULL) return end->thing;

    return nullptr;
};

template <typename T>
void LinkedList<T>::visit_all(void (*work)(const T* thing)){
    Iterator<T>* iter = iterator();
    while (iter->hasNext()) work(iter->next());
};

template <typename T>
Iterator<T>* LinkedList<T>::iterator(){
    return new ListIterator<T>(head);
}

#endif