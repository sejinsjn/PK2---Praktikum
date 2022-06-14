#include <stdio.h>
#include "dictionary.h"

#define m 2

int isEmpty = 1;
typedef enum { free, deleted, occupied  } status;
typedef struct { int number; status stat; } element;
static element dictionary[m];

//berechnet Index für eine Zahl a
int h(int a){
    return a % m;
}

//initialisiert das dictionary falls empty
int initDictionary(){
    for(int i = 0; i < m; i++){
        element e;
        e.number = 0;
        e.stat = free;
        dictionary[i] = e;
    }
    return 0;
} 

//gibt index aus wenn a gefunden ansonsten -1
//linear probing
int findA(int a, int i){
    static int reps = 0;

    if(dictionary[i].stat == free || reps++ == m){
        reps = 0;
        return -1;
    }

    if(dictionary[i].number == a && dictionary[i].stat == occupied){
        reps = 0;
        return i;
    }

    findA(a, (i + 1) % m);
}

//gibt index aus wenn space gefunden ansonsten -1
//linear probing
int findSpace(int i){
    static int reps = 0;

    if(reps++ == m){
        reps = 0;
        return -1;
    }

    if(dictionary[i].stat != occupied){
        reps = 0;
        return i;
    }

    findSpace((i + 1) % m);
}

int insert(int a){
    if(isEmpty) isEmpty = initDictionary();

    int i = findSpace(h(a));

    if(i == -1) return 0;

    dictionary[i].number = a;
    dictionary[i].stat = occupied;

    return 1;
}

int delete(int a){
    if(isEmpty) isEmpty = initDictionary();

    int i = findA(a, h(a));

    if(i == -1) return 0;

    dictionary[i].number = 0;
    dictionary[i].stat = deleted;

    return 1;
}

int member(int a){
    if(isEmpty) isEmpty = initDictionary();

    int i = findA(a, h(a));

    if(i == -1) return 0;

    return 1;
}