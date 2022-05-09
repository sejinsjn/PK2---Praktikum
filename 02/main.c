#include <stdio.h>
#include "touppercase/touppercase.h"
#include "upper/upper.h"
#include "queue/queue.h"

int main(){
    printf("%c", to_upper_case('H'));
    char text[] = "ello!?";
    upper(text);
    printf("%s", text);

    enqueue(1);
    enqueue(2);
    enqueue(2);
    printf("%i ", dequeue());
    enqueue(3);
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    enqueue(4);
    enqueue(5);
    printf("%i ", dequeue());
    printf("%i \n", dequeue());
}