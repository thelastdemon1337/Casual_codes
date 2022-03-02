#include<iostream>
using namespace std;



class Test{
    static int objCnt;
    public:
        string name;

        Test(){
            objCnt++;
        }
        static void displayCount(){
            cout << objCnt;
        }
    
};
int Test::objCnt;
int main(){
    Test t[10];
    Test::displayCount();
    return 0;
}