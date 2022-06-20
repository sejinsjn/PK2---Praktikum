#include <stdio.h>
#include "countspace.h"

int countspaceI(char s[]){
    int i = 0, l = 0;
    while(s[i] != '\0'){
        if(s[i] == 32) l++;
        i++;
    }
    return l;
}

int countspaceZ(char s[]){
    char * a = s;
    int l = 0;
    while(*a != '\0'){
        if(*a == ' ') l++;
        a++;
    }
    return l;
}