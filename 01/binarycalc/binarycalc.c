#include <stdio.h>
#include <string.h>
#include "binarycalc.h"

char bit[17] = "";
int ind = 16;

void binarycalc(int num){
    if(num < 0 || num > 65535) return;
    if(ind == 0) {
        charAusgabe();
        return;
    }

    bit[ind] = (num % 2) + '0';
    ind--;
    binarycalc(num/2);
}

void charAusgabe(){
    for (int i = 0; i <= 16; i++)
        printf("%c", bit[i]);
}