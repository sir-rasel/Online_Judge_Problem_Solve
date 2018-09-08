#include <bits/stdc++.h>
using namespace std;

int main() {
    string number;
    cin >> number;
    if( (number[number.length()-1]-'0')%2!=0 ) printf("0\n");
    else {
        int decimalDigit=0,unitDigit=0;
        if(number.length()>1) decimalDigit = number[number.length()-2]-'0';
        unitDigit = number[number.length()-1]-'0';
        if((decimalDigit*10+unitDigit)%4!=0) printf("0\n");
        else printf("4\n");
    }
    return 0;
}
