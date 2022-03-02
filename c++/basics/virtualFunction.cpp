#include<iostream>
#include<new>
using namespace std;

class Animal{   // this is now an Abstract class.. as it has atleast one purely function.
                // And note that an Abstract class can never be instantiated. that means.. we can't create objects of an abstract class.
    
    public:
        virtual void sound() = 0;    // purely virtual function. : mandatory to be defined in the inherited class.
        virtual void sleep(){
            cout << "I'm an animal that's capable of sleeping\n";
        }
};

class Cat: public Animal{
    public:
    void sound(){
        cout << "class : Cat | I make the sound meow\n";
    }
};

int main(){

    // Animal an;
    // an.sound();          Have been commented out after making the super class an ABSTRACT CLASS.

    Cat tom;
    tom.sound();
    tom.sleep();
    
    Animal *animal = new Cat();  // Hardcoded object creation using constructor.
    animal->sound();
    return 0;
}

// We can say that an ABSTRACT class is the super blue print out of which blue prints are created.. 
// pretty funny huh!
// we use the concept of purely virtual functions so as to make sure that the fuction is mandatory 
// to be overridden.


// PURELY VIRTUAL FUNCTION: A function which is initialized with 0.. 
// and strictly needs to be overridden in the inherited class.

// ABSTRACT CLASS: A class which contains  atleast one purely virtual function.

// INTERFACE : A class which contains  only purely virtual functions.