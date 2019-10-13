#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    ll dom,cumSum[n+5]={0};
    for(int i=0;i<n;i++){
        scanf("%lld",&dom);
        if(i==0) cumSum[i+1]=dom;
        else cumSum[i+1]=cumSum[i]+dom;
    }
    for(int i=0;i<m;i++){
        ll num;
        scanf("%lld",&num);
        int id = lower_bound(cumSum,cumSum+n,num)-cumSum;
        printf("%d %lld\n",id,num-cumSum[id-1]);
    }
    return 0;
}
