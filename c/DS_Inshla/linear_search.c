#include<stdio.h>

void main(){
    int i, n, target;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter value to search : ");
    scanf("%d", &target);

    // Linear search Algorithm (Technique)

    for(i = 0; i < n; i++){
        if(arr[i] == target ){
            printf("Element found at index : %d", i);
            break;
        }
    }

    if(i == n)
            printf("Target Not Found");

}