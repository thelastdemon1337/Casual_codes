#include<stdio.h>

void main(){
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    float arr[n], small, sec_small;

    for(int i = 0; i < n; i++){
        printf("at index %d : ", i);
        scanf("%f", &arr[i]);
        small = arr[0];
        if(arr[i] < small)
            small = arr[i];
    }
    printf("Smallest Number : %f", small);

    if(small == arr[0]){
        sec_small = arr[1];
    } else{
        sec_small = arr[0];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < sec_small && arr[i] != small)
            sec_small = arr[i];
    }


    printf("\nSecond Smallest Number : %f", sec_small);
}