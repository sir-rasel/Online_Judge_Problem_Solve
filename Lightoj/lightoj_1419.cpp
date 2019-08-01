#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod = 1000000007;

ll bigmod(ll a,ll b){
    ll x;
    if(b==0) return (1LL%mod);
    x=bigmod(a,b/2);
    x=(x*x)%mod;
    if(b%2==1) x=(x*a)%mod;
    return x;
}

ll modinv(ll a,ll b){
    return bigmod(a,b-2);
}

ll burnSideLemma(ll n,ll k){
    ll ans=0;
    for(ll i=0;i<n;i++)
        ans = (ans+bigmod(k,__gcd(i,n)))%mod;
    ans = (ans*modinv(n,mod))%mod;
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll res = burnSideLemma(n,k);
        printf("Case %d: %lld\n",cs++,res);
    }
    return 0;
}
