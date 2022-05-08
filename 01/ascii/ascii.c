#include <stdio.h>
#include "ascii.h"

void ascii(int s){
    int a = 32;
    while (a <= 126){
        for(int b = 0; b < s; b++){
            printf("%3i %c ", a, a);
            a++;
            if(a == 127) break;
        }
        printf("\n");
    }
}