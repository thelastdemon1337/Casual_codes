// Write a c++ portgram to declare struct. Initialize and display contents of member variables.

#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

struct college_info{
    string college_name;
    string college_code;
    string department;
    int intake;
};

void display(string name, string code, string dep, int intake){
    cout <<endl;
    for(int i = 0; i <=20; i++){
        cout<<"-";
        usleep(50000);
    }
    cout << "COLLEGE INFORMATION";
    for(int i = 0; i <=20; i++){
        cout<<"-";
        usleep(50000);
    }
    cout << "\n\nName of the college:\t"<<name; 
    usleep(1000000); 
    cout << "\nCollege University Code\t"<<code;
    usleep(1000000);
    cout << "\nName of the Department:\t"<<dep;
    usleep(1000000);
    cout << "\nThe department of "<<dep<<" has in-take:\t" <<intake <<endl;
    usleep(3000000);
}
int main(){
    struct college_info col;

    cout << "\n------------Enter the college Information--------------\n";
    cout <<"Name of the college:\t";
    getline(cin,col.college_name);
    cout <<"College Code:\t";
    getline(cin,col.college_code);
    cout <<"Department:\t";
    cin >> col.department;
    cout << "Intake:\t";
    cin >> col.intake;

    display(col.college_name,col.college_code,col.department,col.intake);
    

}