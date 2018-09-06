#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    stringstream n1(a);
    stringstream n2(b);
    int num1,num2;
    n1>>num1;
    n2>>num2;
    long long int res = num1+num2;
    cout<<res<<endl;
    return 0;
}
