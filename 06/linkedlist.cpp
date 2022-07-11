#include <cstdlib>
#include "linkedlist.h"

LinkedList::LinkedList(){
    head = NULL;
    end = NULL;
}

int LinkedList::append(const char* text){
    nodeptr newN = (nodeptr)malloc(sizeof(nodeptr));
    newN->data = text;
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

int LinkedList::insert(const char* text, int p){
    int i = 0;
    nodeptr current = head;
    nodeptr newN = (nodeptr)malloc(sizeof(nodeptr));
    newN->data = text;

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

    return append(text);
};

int LinkedList::remove(int p){
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

const char *LinkedList::get(int p){
    int i = 0;
    nodeptr current = head;

    while (current != NULL){
        if (p == i++){
            return current->data;
        }
        current = current->next;
    }

    return nullptr;
}

int LinkedList::index_of(const char *text){
    int i = 0;

    nodeptr current = head;

    while(current != NULL){
        if(current->data == text)
            return i;
        i++;
        current = current->next;
    }

    return -1;
}

const char *LinkedList::first(){
    if(head != NULL) return head->data;

    return nullptr;
};

const char *LinkedList::last(){
    if(end != NULL) return end->data;

    return nullptr;
};

void LinkedList::visit_all(void (*work)(const char* t)){
    nodeptr current = head;
    while (current != NULL) {
        work(current->data);
        current = current->next;
    }
};