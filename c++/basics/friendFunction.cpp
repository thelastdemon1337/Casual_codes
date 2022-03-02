#include<iostream>
using namespace std;



class Employee{
    private:
        string phNo;

    public:
        string name;

        void getPhNo(string phNo){
            this->phNo = phNo;
        }
        friend void display(Employee );
};

void display(Employee emp){
            cout << "\nEmployee Name: " <<emp.name <<"\nEmployee Phone Number: " <<emp.phNo;

}




int main(){
    Employee emp;
    emp.name = "TARUN";
    emp.getPhNo("7032611447");
    display(emp);



    return 0;
}