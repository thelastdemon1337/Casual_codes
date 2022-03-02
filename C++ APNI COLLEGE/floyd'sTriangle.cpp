#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    cout << "\n\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ++count <<"\t";
        }
        cout << endl;
    }
    return 0;
}