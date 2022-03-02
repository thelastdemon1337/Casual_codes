//  IMPLEMENTATION OF AN INTERFACE.

#include<iostream>
using namespace std;

class Shape{                // INTERFACE
    protected:
    virtual double getArea() = 0;
};

class Square: public Shape{
    private:
    int side = 5;

    public:
    double getArea(){
        return side * side;
    }
};

class Rectangle: public Shape{
    private:
    int length = 6;
    int breadth = 5;

    public:
    double getArea(){
        return length * breadth;
    }
};

class Triangle: public Shape{
    private:
    int height = 6;
    int breadth = 5;

    public:
    double getArea(){
        return (breadth * height)/2;
    }
};

int main(){
    Square *square = new Square();
    cout << "The Area of the default Square is " << square->getArea() << endl;

    Rectangle r1;
    cout << "The Area of the default Rectangle is " << r1.getArea() << endl;
    
    Triangle t1;
    cout << "The Area of the default Triangle is " << t1.getArea() << endl;


    return 0;
}