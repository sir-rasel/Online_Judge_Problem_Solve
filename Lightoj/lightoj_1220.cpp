#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll solve(ll num){
    ll ans=1,i,res;
    int neg=0;
    if(num<0){
        neg=1;
        num*=-1;
    }
    for(i=2; i*i<=num; i++){
        if(num%i) continue;
        ll temp=num;
        res=0;
        while(temp%i==0){
            temp/=i;
            res++;
        }
        if(temp==1)
            if(!neg || res%2) return res;
    }
    return 1;
}

int main(){
    int cs=1,test;
    scanf("%d",&test);
    while(test--){
        ll num;
        scanf("%lld",&num);
        printf("Case %d: %lld\n",cs++,solve(num));
    }
    return 0;
}
