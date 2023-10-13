#include <stdio.h>


#define ROW 3
#define COL (2*ROW-1)


#define EMPTY '='
#define FILL '*'


void init_arr(char (*mas)[COL]){
    for(int i = 0; i < (ROW * COL); i++){
        *(*mas + i) = EMPTY;
    }
}

void fill_triangle(char (*mas)[COL]){
    int index = ROW-1;
    for(int i = 0; i < ROW-1; i++){
        char *row_ptr = *(mas + i);
        *(row_ptr+index) = FILL;
        *(row_ptr+index+i*2) = FILL;
        index -= 1;
    }
    for(int i = 0; i < COL; i++){
        *(*(mas + ROW-1) + i) = FILL;
    }
}

void draw_triangle(char (*mass)[COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%c", mass[i][j]);
        }
        printf(" %d\n", i);
    }
}

void save_triangle(char *f_name, char (*mass)[COL]){
    FILE *f = fopen(f_name, "w+");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            fprintf(f, "%c", mass[i][j]);
        }
        fprintf(f, " %d\n", i);
    }
    fclose(f);
}


int main(int argc, char const *argv[])
{
    char arr[ROW][COL];
    init_arr(arr);
    fill_triangle(arr);
    draw_triangle(arr);
    save_triangle("test_triangle.txt", arr);
    return 0;
}

