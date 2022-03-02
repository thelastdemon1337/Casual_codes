#include<iostream>
using namespace std;

class Human{
    public:
        int HSN;
        string Name;
        string DateOfBirth;
        string DestinyThatAwaits;

        Human(){
            cout << "Protocol to make a HUMAN has been Initiated!";
        }

        void check(){
            cout << "\nChecking the functionability of the most recent created HUMAN";
        }
};

class superHuman: public Human{
    public:
    string superName;

    void details(){
        cout << "\nDisplaying the features of IT\n" + superName + "\n" + Name + "\n" << HSN;
    }


};

class Non_Human{
    public:
    string Abnormalities;
};

class ultrahuman: public superHuman,public Non_Human{
    public:
    string ultraName;
};

int main(){
    superHuman sh1;
    sh1.HSN = 1;
    sh1.Name = "TARUN KOTAGIRI";
    sh1.check();
    sh1.superName = "DEKU";
    sh1.details();

    ultrahuman ul1;
    ul1.Abnormalities = "SUPER FAST, QUANTUM BRAINS, UNSTOPPABLE..";
    ul1.details();




    return 0;
}