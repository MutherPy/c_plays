#include <stdio.h>
#include <time.h>
#include "lib.h"

void square(long t) {
	clock_t begin = clock();
    long tt;
    for(long i = 0; i <= t; i++){
        tt = i;
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("C - %f\n", time_spent);
}