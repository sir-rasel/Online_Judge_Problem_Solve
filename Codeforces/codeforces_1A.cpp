#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,a;
    long long int num;
    cin>>n>>m>>a;
    num=ceil(float (n)/a);
    num=num*ceil(float (m)/a);
    cout<<num<<endl;
    return 0;
}
