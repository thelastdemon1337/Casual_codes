#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // My logic: 
    // for(int i = 1;i <= n; i++){
    //     for(int j = 1; j <= 2*n; j++){
    //         if(j <= i || j > (2*n - i)){
    //             cout << "*";
    //         } else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int i = n; i >=1; i--){
    //     for(int j = 2*n; j > i; j--){
    //         if(j <= i || j > (2*n - i)){
    //             cout << "*";
    //         } else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Actual logic:
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "* ";
            }
            int spaces = 2*n - 2*i; 
            for(int j = 1; j <= spaces; j++){
                cout << "  ";
            }
            for(int j = 1; j <= i; j++){
                cout << "* ";
            }
            cout << endl;
        }
        for(int i = n; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                cout << "* ";
            }
            int spaces = 2*n - 2*i; 
            for(int j = 1; j <= spaces; j++){
                cout << "  ";
            }
            for(int j = 1; j <= i; j++){
                cout << "* ";
            }
            cout << endl;
        }
    
    return 0;
}