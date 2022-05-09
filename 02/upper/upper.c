#include <stdio.h>
#include "upper.h"
#include "../touppercase/touppercase.h"

void upper(char text[]){
    for(int i = 0; text[i] != '\0'; i++)
        text[i] = to_upper_case(text[i]);
}