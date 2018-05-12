#include <iostream>
#include <cstdio>
using namespace std;

int main (){
    char ch;
    int res=0;
    while( scanf("%c",&ch) && ch!= '\n')
        res = (res*10 + ch-'0')%7;
    cout<<res<<endl;
    return 0;
}
