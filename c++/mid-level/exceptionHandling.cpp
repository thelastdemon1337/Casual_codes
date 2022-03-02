#include<iostream>
using namespace std;

int main(){

    cout << "the program starts------------------->" <<endl <<endl;
    int a, b;
    cout << "Enter value A: ";
    cin >> a;
    cout << "Enter value B: ";
    cin >> b;

    try{
        if (b == 0)
        {
            throw("The value of B can't be 0. Please try again!!");
        }
        int result = a/b;
        cout << "The result is " << result;
    } catch(const char *msg){
        cout <<msg <<endl;
    }

    return 0;
}