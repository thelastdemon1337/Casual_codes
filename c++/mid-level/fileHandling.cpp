#include<iostream>
#include<fstream>

using namespace std;

int main(){
    /* Create a ofstream object
        Create a file and open it
        Write into the file
        Close the file
    */

   ofstream file;
   ifstream fl;
   string line;
   file.open("test1.txt");
   file << "This is the first line.";
   file << "This is the second line.";
   while(!file.eof()){
       getline(fl,line);
       cout << line;
   }
   file.close();
    return 0;
}