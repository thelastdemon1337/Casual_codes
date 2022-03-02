#include<stdio.h>

void transpose(int matrix[3][3]);

void main(){
    int matrix_1[3][3];
    printf("Input a 3 x 3 matrix : \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("Initial Matrix : \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matrix_1[i][j]);
        }
        printf("\n");
    }
    transpose(matrix_1);
}

void transpose(int matrix[3][3]){
    int transtrix[3][3];
    printf("Transpose : \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            transtrix[i][j] = matrix[j][i];
            printf("%d\t", transtrix[i][j]); 
        }
        printf("\n");
    }
}