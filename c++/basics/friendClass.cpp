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
        friend class Car;
};

class Car{
    public:
        string car;

        void display(Employee emp) {// passing Employee class type object as a parameter.
            cout << "\nEmployee Name: " <<emp.name <<"\nEmployee Phone Number: " <<emp.phNo <<"\nEmployee car : " <<car;
        }
};

int main(){
    Employee emp;
    emp.name = "TARUN";
    emp.getPhNo("7032611447");

    Car car;
    car.car = "Koenigsegg Agera R";

    car.display(emp);


    return 0;
}