#include <stdio.h>
#include "stringcat.h"

int main(){
    char *s = stringcat("hallo du da", "llo");
    while(*s != '\0'){
        printf("%c", *s);
        s++;
    }
}