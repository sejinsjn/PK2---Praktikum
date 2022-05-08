#include <stdio.h>
#include "einmaleins.h"

int min = 0, max = 0;

void einmaleins(){
    printf("Bitte geben Sie zwei natürliche Zahlen ein! \n");
    scanf("%d", &min);
    scanf("%d", &max);

    printEinmaleins();
}

void printEinmaleins(){
    test(); 
    printf("Einmaleins \nVon: %d \nBis: %d \n", min, max);
    int d = min, e = 1;
    while (e <= 10){
        for(int i = 0; i <= (max-min); i++){
            printf("%*d ", padding(max), d*e);
            d++;
        }
        printf("\n");
        d = min;
        e++;
    }
}

void test(){
    if(min <= 0 || max <= 0){
        printf("Keine natürlichen Zahlen! \n");
        einmaleins();
    }
    if(min >= max){
        printf("Erste Zahl muss kleiner zweite Zahl sein! \n");
        einmaleins();
    }
}

int padding(){
    int p = 1, e = max;
    while (e > 0){
        p++;
        e /= 10;
    }
    return p;
}