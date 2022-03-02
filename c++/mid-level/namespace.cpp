#include<iostream>
using namespace std;


namespace jp{
    float dollarValue = 108; // 1 USD  = 108 japanese yen
    double toDollars(float countryCurrency){
        return countryCurrency/dollarValue;
    }
}

using namespace jp;
namespace ch{
    float dollarValue = 7; // 1 USD  = 7 chinese yuan
    double toDollars(float countryCurrency){
        return countryCurrency/dollarValue;
    }
}


int main(){
    cout << "The dollar value in JAPAN is " << dollarValue << " yen\n";
    cout << "8000 yen is " << toDollars(8000)<< " USD\n";
    cout << "The dollar value in CHINA is " << ch :: dollarValue << " yuan\n";
    cout << "8000 yuan is " << ch::toDollars(8000)<< " USD\n";

    return 0;
}