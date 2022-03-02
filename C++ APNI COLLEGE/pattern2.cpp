#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n; i > n - n; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;   
}