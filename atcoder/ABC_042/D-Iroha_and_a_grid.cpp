#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MAX_N = 1002020;
const int mod = 1e9 + 7;

ll modPow(ll x, ll n){
    if(n == 0) return 1;
    ll ret = modPow(x, n/2);
    (ret *= ret) %= mod;
    if(n & 1) (ret *= x) %= mod;
    return ret;
}

ll modInv(ll a){
    return modPow(a, mod - 2);
}

ll modComb(ll n, ll r){
    static ll fact[MAX_N], invfact[MAX_N];
    if(fact[0]==0){
        fact[0] = invfact[0] = 1;
        for(int i = 1; i < MAX_N; i++) {
            fact[i] = fact[i-1] * i % mod;
            invfact[i] = modInv(fact[i]);
        }
    }
    if(r < 0 || n < r) return 0;
    return fact[n] * invfact[r] % mod * invfact[n-r] % mod;
}

int main(){
    ll h, w, a, b;
    scanf("%lld %lld %lld %lld",&h,&w,&a,&b);
    ll ans = 0;
    for(ll i=b;i<w;i++){
        ll x = modComb(i+h-a-1,i) % mod;
        ll y = modComb(w-i-1+a-1, a-1) % mod;
        (ans += (x*y)%mod) %= mod;
    }
    printf("%lld\n",ans);
    return 0;
}
