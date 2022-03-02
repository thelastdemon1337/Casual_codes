#include<stdio.h>

void linearSearch(int[]);
int n;

void main(){
    int sum = 0, lar;
    printf("Size of array");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("At index %d\t", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
        lar = arr[0];
        if(arr[i] > lar)
        lar = arr[i];
    }

    // Search
    // printf("\nTarget to search : ");
    // scanf("%d", &target);
    // int sResult = linearSearch(arr, target);
    // if(sResult != 0)
    //     printf("Element found at index : %d", sResult);
    // else
    //     printf("Target not found!");
    
    // Better approach for search

    linearSearch(arr);

    // for(int i = 0; i < n; i++){
    //     printf("Size of array: %d", sizeof(arr));
    //     printf("Elements in Array:\n");
    //     printf("arr[%d] : %d\n",i, arr[i]);
    //     printf("Sum of elements : %d", sum);
    //     printf("\nAverage of elements : %d", sum/n);
    //     printf("\nLargest among array elements : %d", lar);
    // }
}

void linearSearch(int arr[]){
    int target;
    printf("\nEnter the target to search : ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++){
        if(target == arr[i])
            printf("Element found at index : %d", i);
    }
}