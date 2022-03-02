#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, i;
    cin >> n;

    for(i = 2; i < n; i++){
        if(n%i == 0){
            cout << "Non - Prime\n";
            break;
        }
    }
    if(i == n){
        cout<<"ANSWER: \n";
        usleep(100000);
        cout << "Prime";
    }

    return 0;

}