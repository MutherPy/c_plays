#include <stdio.h>

#define SIZE 5


int summ(int* start, int* end){
    int total = 0;
    while (start < end){
        total += *start++;
        printf("%d\n", total);
    }
    return total;    
}

int main(int argc, char const *argv[])
{

    int t1 = 5;
    int tt = 10;
    int t2 = 10;

    int* p_t1 = &t1;
    int* p_t11 = &t2;
    int* p_t2 = &t2;

    printf("%ld\n", p_t11 - p_t1);
    return 0;
}
