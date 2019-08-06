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

ll geomatricProgression(ll d,ll v){
    ll a=v%mod;
    ll vd = bigmod(v-1,d)-1;
    vd=(vd+mod)%mod;
    ll vinv = modinv(v-2,mod);
    vinv=(vinv+mod)%mod;
    ll ans = (((((a*vd)%mod)*vinv)%mod)+1)%mod;
    return ans;
}

void solve(ll d,ll v){
    if(v==1 and d>1) {
        printf("-1\n");
        return;
    }
    else if(v==1 and d<2){
        printf("%lld\n",(d+1)*v);
        return;
    }
    else if(v==2){
        printf("%lld\n",((((d%mod)*v)%mod)+1)%mod);
        return;
    }
    else printf("%lld\n",geomatricProgression(d,v));
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll d,v;
        scanf("%lld %lld",&d,&v);
        printf("Case %d: ",cs++);
        solve(d,v);
    }
    return 0;
}
