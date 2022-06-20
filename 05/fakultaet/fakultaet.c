#include <stdio.h>
#include "fakultaet.h"

long long unsigned int fakultaet(int n){
    if(n <= 0) return 1;
    return n * fakultaet(n-1);
}

long long unsigned int binomialkoeffizient(int n, int k){
    return fakultaet(n)/(fakultaet(k)*fakultaet(n-k));
}