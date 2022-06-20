#include <stdio.h>
#include <stdlib.h>
#include "stringcat.h"

char *stringcat(const char* str1, const char* str2){
    int str1I = sizeof(str1-1), str2I = sizeof(str2-1), i = 0;
    char* str3 = (char*) malloc(str1I+str2I);

    while(*str1 != '\0'){
        *str3 = *str1;
        str3++;
        str1++;
        i++;
    }
    while(*str2 != '\0'){
        *str3 = *str2;
        str3++;
        str2++;
        i++;
    }
    return str3-i;
}