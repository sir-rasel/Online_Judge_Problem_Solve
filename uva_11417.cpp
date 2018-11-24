#include <bits/stdc++.h>
using namespace std;

int gcdValue[550];

void preGcdCalculate(){
    for(int n=1;n<=502;n++){
        int sum=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                sum+=__gcd(i,j);
            }
        }
        gcdValue[n]=sum;
    }
}
int main(){
    preGcdCalculate();
    int n;
    while(cin>>n and n!=0) cout<<gcdValue[n]<<endl;
    return 0;
}
