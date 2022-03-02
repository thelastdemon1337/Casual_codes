#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(){

    // char s[] = {'B','e',' ','E','d','u','c','a','t','e','d','.','D','r','e','s','s',' ','B','e','t','t','e','r','.','W','o','r','k',' ','H','a','r','d','.','S','t','a','y',' ','B','u','s','y','.',' ','B','o','s','s',' ', 'U','p','!'};
    char s[100] = {"Be Educated. Dress Better. Work Harder. Stay Busy. Boss Up. Fly High!"};
    int i = 0;
    while(s[i] != '\0'){
        printf("%c",s[i++]);
        usleep(50000);
    }

    printf("\n");
    system("test.bat");

}