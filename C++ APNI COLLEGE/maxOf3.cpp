#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a,b,c;
    cin >>a >>b >>c;
    if(a>b){
        if(a>c)
            cout<<"a is the largest!";
        else
            cout <<"c is the largest!";
    } else{
        if(b>a){
            if(b>c)
                cout <<"b is the largest!";
            else
                cout << "C is the largest!";
        }
    }
    return 0;
}