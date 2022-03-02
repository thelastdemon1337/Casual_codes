#include<iostream>
#include<string>


class Employee{
    private:
        std::string fName;
        std::string lName;

    public:
        Employee();
        void getFullName(std::string , std::string);
        void displayName();
};