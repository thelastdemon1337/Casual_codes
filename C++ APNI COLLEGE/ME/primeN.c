#include<stdio.h>
int main(){
    int range, num = 2;
    printf("Enter the range: \n");
    scanf("%d", &range);

    while(num < range){
        int div = 2;
        while(div < num){
            if(num % div == 0 ){
                num++;
            } else{
                div++;
            }
        }
        printf("%d\n", num);
        num++;
    }


    return 0;
}
