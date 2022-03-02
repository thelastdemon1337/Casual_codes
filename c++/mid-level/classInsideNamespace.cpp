#include<iostream>
using namespace std;

namespace jp{
    class Anime{
        private:
            string genre;
            string name;

        public:
            void getDetails(string genre, string name){
                this->genre = genre;
                this->name = name;
            }

            void display(){
                puts("---------------------------------\\^_^/-------------------------------------");
                cout << "Anime\t\t\t\t\tGenre" <<endl;
                cout <<name <<"\t\t\t\t\t"<< genre;
            }
    };
}
     

int main(){
    // jp::Anime anime1;
    // anime1.getDetails("ACTION | ADVENTURE | SLICE OF LIFE", "NARUTO");
    // anime1.display();

    jp::Anime *anime1 = new jp::Anime();
    anime1->getDetails("ACTION | ADVENTURE | SLICE OF LIFE", "NARUTO");
    anime1->display();

// NAMESPACE ------------> TERRITORY
// using namespace we can have variables, classes , functions or any data types with same name...
// Since they're identified by the territory... we can do so
// And it's always a good practice to declare classes inside a namespace..
// So as not to pollute the global namespace.. and note that namespaces are always open..don't terminate with semicolon
// And here the open refers to ... We can make changes changes to the desired namespace
//  Whenever and wherever.!
 
    return 0;
}