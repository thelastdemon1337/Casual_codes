#include<stdio.h>

void main(){
    int n, target;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], lft = 0;
    int rt = n-1;
    int mid = (lft + rt)/2;
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search : ");
    scanf("%d", &target);

    // Binary Search Algorithm (Technique)

    // while(lft <= rt){
    //     if(target > arr[mid])
    //         lft = mid + 1;
    //     else if(target < arr[mid])
    //         rt = mid - 1;
    //     else{
    //         printf("Target found at index : %d", mid);
    //         break;
    //     }

    //     mid = (lft + rt)/2;
    // }

    // Desceding order

    
    while(lft <= rt){
        if(target < arr[mid])
            lft = mid + 1;
        else if(target > arr[mid])
            rt = mid - 1;
        else{
            printf("Target found at index : %d", mid);
            break;
        }

        mid = (lft + rt)/2;
    }

    if(lft > rt)
        printf("Target not found");
}