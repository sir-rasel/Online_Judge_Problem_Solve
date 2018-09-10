#include<bits/stdc++.h>
using namespace std;

long long dearrangement(long long n){
    if(n==0) return 1;
    if(n==1) return 0;
    else if(n==2) return 1;
    return (n-1)*(dearrangement(n-1)+dearrangement(n-2));
}

long long ncr[22][22];

void combination(){
    for(int i=1;i<=20;i++){
        for(int j=0;j<=20;j++){
            if(j>i) ncr[i][j]=0;
            else if(j==i or j==0) ncr[i][j]=1;
            else ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
        }
    }
}

int main(){
    combination();
    long long n,m;
    while(scanf("%lld %lld",&n,&m)==2){
        long long invitation=0;
        invitation+=dearrangement(n);
        for(long long i=1;i<=m;i++){
            invitation+=ncr[n][i]*dearrangement(n-i);
        }
        printf("%lld\n",invitation);
    }
    return 0;
}
