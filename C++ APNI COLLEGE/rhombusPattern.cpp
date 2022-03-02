#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // MY LOGIC:

    // for(int i = 1; i <= n; i++){
    //     int k = 0;
    //     for(int j = 1; j <= (2*n - 1); j++){
    //         if(j <= n-i){
    //             cout << "  ";
    //         } else if(k < n){
    //             cout << "* ";
    //             k++;
    //         }
    //     }
    //     cout << endl;
    // }

    // EFFICIENT LOGIC:

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}