#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define RADIUS 5
#define EMPTY '0'
#define FILL '*'

const int row = RADIUS * 2;
const int col = RADIUS * 2;

void init_mas(char (*mas)[col]){
    for(int i = 0; i < (row * col); i++){
        *(*mas + i) = EMPTY;
    }
}

void draw_circle(char (*mas)[col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c", mas[i][j]);
        }
        printf(" %d\n", i);
    }
}


int main(int argc, char const *argv[]){
    char arr[row][col];
    init_mas(arr);
    draw_circle(arr);
    return 0;
}


