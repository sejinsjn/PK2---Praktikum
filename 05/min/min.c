#include <stdio.h>
#include "min.h"


double min(double a[], int n){
    if(a[n] == 0.0) return 0.0;

    double min = a[n];

    for(int i = 0; i < n; i++)
        if(min > a[i]) min = a[i];

    return min;
}