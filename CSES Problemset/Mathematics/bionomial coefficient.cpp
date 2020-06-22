#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int mod = 1000000007;
const int N = 1e6+10;

vector<int>fact(N);

void precompute(){
    ll f = 1;
    fact[0] = 1;
    for(int i=1;i<N;i++){
        f = ((f%mod)*(i%mod))%mod;
        fact[i] = f;
    }
}

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

int main(){
    precompute();
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);
        ll res = ((( (bigmod(fact[a],1)%mod) * (modinv(fact[b],mod)%mod) )% mod ) * (modinv(fact[a-b],mod)%mod) )%mod;
        printf("%lld\n",res);
    }
    return 0;
}
