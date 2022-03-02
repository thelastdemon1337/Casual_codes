#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
using namespace std;


int main(){
    int randomvalue;
    srand(time(NULL));

    randomvalue = (rand() % 6) + 1;
    cout << "Rolling dice...\n\n";
    sleep(1);
    cout << "You've Got " << randomvalue;
    return 0;
}