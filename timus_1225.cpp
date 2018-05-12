#include <iostream>
using namespace std;

long long int dp[50];

long long int dpfun(long long int n);

int main(){
    long long int n,m;
    cin>>n;
    m=dpfun(n);
    cout<<m<<endl;
    return 0;
}

long long int dpfun(long long int n){
    if(n==1 || n==2) return 2;
    else if(n==3) return 4;
    if(!dp[n]) dp[n]=dpfun(n-1)+dpfun(n-2);
    return dp[n];
}
