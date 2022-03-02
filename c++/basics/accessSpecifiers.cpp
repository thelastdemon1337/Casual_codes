#include<iostream>
#include<string>
using namespace std;

class Circle{
    private:
        float radius;

    
    public:

    void setradius(float radius){
        this->radius = radius;
    }
        float getArea(){
            return 3.14 * radius * radius;
        }
};

int main(){

    Circle circle;
    circle.setradius(5);
    cout << "The area of the given circle is " << circle.getArea();
    return 0;
}