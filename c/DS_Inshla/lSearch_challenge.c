#include<stdio.h>

void main(){
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n], val, occ = 0;
    printf("Enter array elements : \n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Value to find the occurances in the array : ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++){
        if(arr[i] == val)
            occ++;
    }
    if(occ != 0)
        printf("\nNo. of occurances : %d",occ);
    else
        printf("\nSorry to break it you.. but the element isn't there at all!");
    
}