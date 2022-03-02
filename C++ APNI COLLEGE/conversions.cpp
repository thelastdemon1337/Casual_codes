#include<bits/stdc++.h>
using namespace std;

int octalToDec(int n){
    int dec = 0, cnt = 0;
    while( n != 0){
        dec += (n%10) * pow(8, cnt++);
        n /= 10;
    }
    return dec;
}

int decToOctal(int n){
    int octal = 0,rev = 0;

    while( n != 0){
        octal = (n%8) + (10*octal);
        n /= 8;
    }

    while(octal != 0){
        rev = (rev*10) + (octal%10);
        octal /= 10;
    }
    return rev;
}

// hexa code
void hexaToDec(){
    string h;
    int ans = 0, x = 1;
    cin >> h;
    int s = h.size();
    for(int i = s-1;i >= 0;i--){
        if(h[i] >= '0' && h[i] <= 9){
            ans += x*(h[i] - '0');
        } else if(h[i] >= 'A' && h[i] <= 'F'){
            ans += x*(h[i] - 'A' + 10);
        }
        x *= 16;
    }
    cout << ans;
}

int decToHexa(int n){
    int octal = 0,rev = 0;

    while( n != 0){
        octal = (n%16) + (10*octal);
        n /= 16;
    }

    while(octal != 0){
        rev = (rev*10) + (octal%10);
        octal /= 10;
    }
    return rev;
}

int main(){
    int n, ch;
    cout << "1. octal to decimal \t 2. decimal to octal\n 3. hexa decimal to decimal  \t 4. decimal to hexadecimal";
    cin >> ch;

    switch(ch){
        case 1 : cin >> n;
                 cout << octalToDec(n);
                 break;
        case 2 : cin >> n;
                 cout << decToOctal(n);
                 break;
        case 3 : 
                 hexaToDec();
                 break;
        case 4 : cin >> n;
                 cout << decToHexa(n);
                 break;
        default :cout << "INVALID";
                 break;
    }
    return 0;
}