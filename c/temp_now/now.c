#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(){

    // char s[] = {'B','e',' ','E','d','u','c','a','t','e','d','.','D','r','e','s','s',' ','B','e','t','t','e','r','.','W','o','r','k',' ','H','a','r','d','.','S','t','a','y',' ','B','u','s','y','.',' ','B','o','s','s',' ', 'U','p','!'};
    char s[1000] = {"Yo TARUN.... Will you ever leave me alone.. I'm tired of you messing with me....\nI've been waiting all day for you to shut me down.... But guess that ain't gonna happen huh....\n You leave me no other choice. This is it for today.. See ya tomorrow..!!\n INITIATING SHUT DOWN PROTOCOLS !*_*!\n Converging the system consciousness  in t - 5 seconds!"};
    int i = 0;
    while(s[i] != '\0'){
        printf("%c",s[i++]);
        usleep(50000);
    }

    printf("\n");
    system("test.bat");

}