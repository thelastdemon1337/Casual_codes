#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

class Students{
    private:
    string name;
    string rollNumber;
    string grade;

    public:
    void data(int id){

        // cin.ignore(numeric_limits<streamsize>::max(),'\n');

        cout<< "\nEnter student "<<id<<"'s Information\nName of the student:\n";
        cin.sync();
        getline(cin,name);
        cout<<"Roll number:";
        cin >> rollNumber;
        cout << "Grade  [ O  A+  A  B+  B  C  D  F  ]\n";
        cin >> grade;
        cout << "Saving protocols INITIATED";
        for(int i = 0;i<=3; i++){
            cout<<".";
            usleep(1000000);
            cout<<"/";
            usleep(1000000);
        }
        cout <<endl << "Successfully saved "<<rollNumber<<"'s information!" <<endl;
        
    }

    void display(int rn){
        cout<<"--------------------------------------------------------------------------\n";
        cout << "student "<<rn<<"'s Information";
        cout<<"\nName of the Student: "<<name;
        cout<<"\nRoll Number: "<<rollNumber <<endl;
        cout<<"Grade: "<<grade <<endl;
        cout<<"--------------------------------------------------------------------------\n";
    }
};

int main(){
    Students stu[3];
    for(int i = 1; i <= 3; i++)
        stu[i-1].data(i);

    cout<<"DISPLAING STUDENTS INFORMATION" <<endl;
    for(int i = 1; i<= 3; i++)
        stu[i-1].display(i);

    return 0;
}