// Write a program to create an array of pointers. Invoke  functions using array objects.

#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

void numOfSubs(int );

class Subjects {

    private:
    string name;
    string faculty;

    public:
        void Info(int i){
             
             cout << "\nWhat's your " << i;
             if(i == 1)
                cout << "st";
            else if(i == 2)
                cout << "nd";
            else if(i == 3)
                cout << "rd";
            else
                cout << "th";
            cout << " subject" << endl;
            cin.sync();
            getline(cin, name);
            cout << "And who's your faculty for that subject..?\n";
            getline(cin, faculty);
            }

        void display(int i){
            cout <<i <<". " << name <<"\t\t" << faculty <<endl <<endl;
        }
        
};




int yr, sub;
int main(){
    string name;
    cout << "Hey..there..!! What's your name?\n";
    getline(cin , name);
    cout <<"\nWhich year are in..?\n";
    cin >> yr;
    numOfSubs(yr);
    Subjects st[sub];
    Subjects *ptr;
    ptr = st;
    cout << "Let's see if you remember your subject names..!" <<endl;
    for(int i = 0; i < sub; i++){
        (ptr + i)->Info(i+1);
    }
    cout << "Initiating Saving Protocols" <<endl;
    for(int i = 0; i <=20; i++){
        cout<<".";
        usleep(50000);
    }
    cout <<"\\^_^/";
    for(int i = 0; i <=20; i++){
        cout<<".";
        usleep(50000);
    }
    cout <<"/" <<endl;
    cout << "MISSION ACCOMPLISHED!"<< endl;
//  Write here the cool outlook of usleep and add a print statement saying welcome back name

    cout << "Here are your subject details:\n";

    cout << "Subject" <<"\t\t" << "Faculty" <<endl;

    for(int i = 0; i < sub; i++){
        (ptr + i)->display(i + 1);
    }
    
    



    return 0;
}

void numOfSubs(int yr){
            if(yr == 1){
                cout << "You have 4 subjects excluding labs in your curriculum according to JNTUH" <<endl;
                sub = 4;
            } else if(yr == 2){
                cout << "You have 5 subjects excluding labs in your curriculum according to JNTUH" <<endl;
                sub = 5;
            } else if(yr == 3){
                cout << "You have 5 subjects excluding labs in your curriculum according to JNTUH" <<endl;
                sub = 5;
            }
    }

 

 

 

 

 
