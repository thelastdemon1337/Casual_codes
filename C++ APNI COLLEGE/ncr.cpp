#include<iostream>
using namespace std;
int fact(int );

int fact(int num){
    int factorial = 1;
    for(int i = 2; i <= num; i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin >>n >>r;
    int ans = fact(n)/(fact(n-r)*fact(r));
    cout <<" ncr = " << ans << endl;
    return 0;
}