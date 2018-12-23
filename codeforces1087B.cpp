#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,k;
    scanf("%lld %lld",&n,&k);
    ll ans=INT_MAX;
    for(int d=1; d<=n; d++){
        if(n%d!=0) continue;
        ll t = (n*k)/d;
        t += d;
        if((t/k)*(t%k)==n) ans=min(ans,t);
    }
    printf("%lld\n",ans);
    return 0;
}
