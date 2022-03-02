#include "employee.h"
using namespace std;

Employee :: Employee(){
    cout << "Object of Employee Class Created.\n";
}

void Employee :: getFullName(string fName, string lName){
    this->fName = fName;
    this->lName = lName;
}

void Employee :: displayName(){
    cout << "Full Name : " + fName + " " + lName << endl;
}