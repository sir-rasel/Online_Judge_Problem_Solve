#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

map<ull,ull>dp;
map<ull,ull>result;

ull f(ull x){
    if(x==1) return 1;
    if(x==2) return 2;
    if(x==3) return 4;
    if(dp.count(x)!=0) return dp[x];
    if(x%2==0) return dp[x]=f(x/2)*f(x/2)+1;
    else return dp[x]=f(x/2)*f(x/2+1)+2;
}

void precalculate(){
    for(ull i=1;i<=50;i++){
        ull res = f(i);
        result[res]=i;
    }
}

int main(){
    precalculate();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ull x;
        scanf("%llu",&x);
        printf("Case %d: %llu\n",cs++,result[x]);
    }
    return 0;
}
