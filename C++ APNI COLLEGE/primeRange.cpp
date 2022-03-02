#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a,b,count = 0;
    cin >>a>>b;

    for(int i = a; i <= b; i++){
        int div,j;
        for(div = 2; div < i; div++){
            if(i % div == 0){
                break;
            }
        }
        if(div == i){
            cout << i << endl;
            count++;
        }
    }
    cout << "Number of prime numbers between " <<a <<" and " <<b <<" are : " << count <<endl;

    return 0;
}