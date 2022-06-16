#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

#define m 5

typedef struct node{
    int number;
    struct node* next;
} node;

static node* dictionary[m];
int isEmpty = 1;

void allocateMemory(){
    for(int i = 0; i < m; i++)
        dictionary[i] = 0;
    
    isEmpty = 0;
}

int h(int a){
    return a % m;
}

int insert(int a){
    int i = h(a);

    node* current = dictionary[i];
    node* new = malloc(sizeof(node));
    new->number = a;
    new->next = 0;

    if(!dictionary[i]) {
        dictionary[i] = new;
        return 1;
    }else{ 
        while (current)
            current = current->next;
        current->next = new;
        return 2;
    }

    return 0;    
}

int delete(int a){
    int i = h(a);
    
    node* current = dictionary[i];
    node* temp = 0;
    if(dictionary[i])
        while (current){
            if(current->number == a){
                if(current == dictionary[i]){
                    dictionary[i] = current->next;
                    return 1;
                }
                temp = current;
                current = temp->next;
                return 1;
            }
            current = current->next;
        }
    return 0;
}   

int member(int a){
    int i = h(a);
    node* current = dictionary[i];
    if(dictionary[i])
        while (current){
            if(current->number == a)
                return 1;
            current = current->next;
        }
    return 0;
}