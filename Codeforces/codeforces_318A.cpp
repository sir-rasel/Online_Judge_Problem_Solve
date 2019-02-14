#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k,kthnumber,temp;
    cin>>n>>k;
    if(n%2==0) temp=n/2;
    else temp=n/2+1;
    if(temp>=k) kthnumber=(k*2)-1;
    else kthnumber=(k-temp)*2;
    cout<<kthnumber<<endl;
    return 0;
}
