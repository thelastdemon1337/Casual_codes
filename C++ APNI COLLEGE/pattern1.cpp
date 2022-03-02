#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout << "Enter the No. of rows and columns.\n";
    cin >> row >> column;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if((i==0) || (j==0) || (i == row-1) || (j == column-1)){
                cout << "* ";
            } else{
                cout << "  ";
            }
        }
        cout<< endl;
    }
    return 0;
}