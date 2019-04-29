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

ll sumOfDivisor(ll n,ll p){
    ll ans=1;
    ll k=sqrt(n+1);
    for(ll i=2;i<=sqrt(n+1);i++){
        if(n%i==0){
            ll counter=0;
            while(n%i==0){
                counter++;
                n/=i;
            }
            ans = (ans * (bigmod(i, counter * p + 1LL) - 1LL + mod)) % mod;
            ans = (ans * modinv(i - 1LL, mod)) % mod;
        }
    }
    if(n!=1) {
        ans = (ans * (bigmod(n, 1 * p + 1LL) - 1LL + mod)) % mod;
        ans = (ans * modinv(n - 1LL, mod)) % mod;
    }
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,m;
        scanf("%lld %lld",&n,&m);
        ll res = sumOfDivisor(n,m);
        printf("Case %d: %lld\n",cs++,res);
    }
    return 0;
}
