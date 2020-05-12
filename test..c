#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int row = 3;
    int col = 3;
    int **matrix;
    matrix = malloc(row*sizeof(int*));
    for(int i = 0; i<row; i++){
        matrix[i] = malloc(col*sizeof(int**));
    }
    printf("%p\n %p\n",&matrix[0][0], &matrix[2][2]);
    for(int i=0; i<row; i++){
        printf("check1");
        for(int j=0; i<col; j++){
            matrix[i][j] = i+j;
        }
    }
    printf("3");
}