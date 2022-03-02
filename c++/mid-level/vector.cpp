#include<iostream>
#include<vector>
using namespace std;

class Test{
    public:
        string name;
};


int  main(){
    vector<string> names;
    names.push_back("TARUN");
    names.push_back("KOTAGIRI");
    
    cout << names.size()<<endl;

    cout <<names[0] << endl;
    names.pop_back();
    cout << names.size() <<endl;    


    Test t1,t2,t3,t4;
    vector<Test> testSubjects;
    testSubjects.push_back(t1);
    testSubjects.push_back(t2);
    testSubjects.push_back(t3);
    testSubjects.push_back(t4);

    testSubjects[0].name = "TARUN KOTAGIRI";
    t1.name = "Nothing";

    cout <<testSubjects[0].name << endl;
    cout <<t1.name;
    return 0;
}