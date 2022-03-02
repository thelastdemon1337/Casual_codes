// #include<bits/stdc++.h>
 #include<iostream>
// #include<unistd.h>

using namespace std;

class Human{
    protected:
        string structure = "DYNAMIC";

    public:
        string name = "Tarun";
};

class AI: public Human{
    public:
    void display(){
        cout <<endl << name.length() <<endl;
        cout << structure <<endl;
        int *t = (int*)calloc(1,sizeof(int));
    }
};

int main(){
    cout << "HEllo";
    AI ai;
    ai.display();
    return 0;
}