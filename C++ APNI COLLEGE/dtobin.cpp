#include<iostream>
#include<math.h>
using namespace std;

int  decToBinary(int );
int binaryToDec(int );

int main(){
    int n,ch;
    cin >> n;
    cout << "1: decToBinary         2: binaryToDec"<< endl;
    cin >> ch;

    switch(ch){
        case 1 : cout << decToBinary(n);
                    break; 
        case 2 : cout << binaryToDec(n);
                    break; 
        default : cout << "Is your brain in your knees..?";
                    break;
    }
    return 0;
}

int decToBinary(int n){
    int bin = 0, cnt = 0;

    while( n != 0){
        bin += (n%2) * pow(10, cnt);
        n /= 2;
        cnt++;
    }
    return bin;
}

int binaryToDec(int n){
    int rem, dec = 0, cnt = 0;
    while(n != 0){
        dec += (n%2) * pow(2,cnt);
        n /= 10;
        cnt++ ;
    }
    return dec;
}