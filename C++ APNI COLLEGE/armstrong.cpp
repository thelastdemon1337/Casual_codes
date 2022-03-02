// Armstrong number: The sum of the cubes of the individual digits should be equal to the number itself;

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, arm = 0, temp;
    cin >> n;
    temp = n;

    while(temp != 0){
        arm += pow((temp%10), 3);
        temp /= 10;
    }
    if(n == arm)
        cout << "Armstrong Number!";
    else
        cout << "Not an Armstrong Number!";
    return 0;
}