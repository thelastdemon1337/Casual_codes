#include<iostream>
using namespace std;

int main(){
    int n, reverse = 0, lastDigit = 0;
    cin >> n;

    while(n > 0){
        lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n /= 10;
    }
    cout << reverse;
    return 0;
}