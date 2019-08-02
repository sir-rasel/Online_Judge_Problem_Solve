#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll numberOfWays(ll n,ll m,ll k){
    if(k>n or k>m) return 0;
    if(k==0) return 1;
    if(m==1) return n;
    return n*numberOfWays(n-1,m-1,k-1)+numberOfWays(n,m-1,k);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        printf("Case %d: %lld\n",cs++,numberOfWays(n,n,k));
    }
    return 0;
}
