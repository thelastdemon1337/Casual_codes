#include<stdio.h>

void main(){
    int matrix[3][3] = {
        {1,2,3,},
        {4,5,6},
        {7,8,9}
    };
    int matrix_2[3][3] = {
        {1,2,3,},
        {4,5,6},
        {7,8,9}
    };
    int matrix_result[3][3] = {0};
    int buffer = 0;

    // Mattrix Addition
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         matrix_result[i][j] = matrix[i][j] + matrix_2[i][j];
    //         printf("%d\t", matrix_result[i][j]);
    //     }
    //     printf("\n");        
    // }

    // Matrix multiplication
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                buffer += matrix[i][k] * matrix_2[k][j];
            }
            matrix_result[i][j] = buffer;
            buffer = 0;
        }  
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // matrix_result[i][j] = matrix[i][j] + matrix_2[i][j];
            printf("%d\t", matrix_result[i][j]);
        }
        printf("\n");        
    }
}