#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll josephus(ll n){
    ll p = 1LL;
    while (p <= n)
        p *= 2LL;

    return (2LL * n) - p + 1LL;
}

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll ans = josephus(n);

        ll t = (2LL*(k+1))%n;
        if(t==0) t=n;

        ll a = (t-2LL+n)%n;
        ans = (ans+a)%n;
        if(ans==0) ans = n;

        cout<<ans<<endl;
    }

    return 0;
}
