#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mod = 1000000007;
const int mx = 2000005;

ll fact[mx];
void precal(){
    fact[0]=fact[1]=1;
    for(int i=2;i<mx;i++) fact[i]=(i*fact[i-1])%mod;
}

ll bigmod(ll a,ll b){
    ll x;
    if(b==0) return 1%mod;
    x=bigmod(a,b/2);
    x=(x*x)%mod;
    if(b%2==1) x=(x*a)%mod;
    return x;
}

ll modinv(ll a,ll b){
    return bigmod(a,b-2);
}

int main(){
    precal();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,r;
        scanf("%lld %lld",&n,&r);
        ll res= (fact[n]*fact[r-1])%mod;
        res = modinv(res,mod)%mod;
        printf("Case %d: %lld\n",cs++,(fact[n+(r-1)]*res)%mod);
    }
    return 0;
}
