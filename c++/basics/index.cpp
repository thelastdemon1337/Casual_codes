#include<iostream>
#include<string>
using namespace std;

class Student {
    public:             //Access Specifier
    string fname;            // these are the attributes.
    string lname;
    
    string getFullName(){
        return fname +" " + lname;
    }

    void display();

    Student(){
        cout << "\nAn object of class Student has been created..!" << endl;
    }
};

void Student::display(){
    cout <<"Your full Name is : " + getFullName();
}

int main(){
    // Creating objects
    Student stu1;

    // Accessing Attributes
    cout << "Enter your first name: \n";
    getline(cin, stu1.fname);
    cout << "Enter your last name: \n";
    cin >> stu1.lname;


    // Print Attribute values

    stu1.display();


    Student stu2;
    stu2.fname = "STRANGER";
    stu2.lname = "BEING";

    stu2.display();
    

    return 0;
}