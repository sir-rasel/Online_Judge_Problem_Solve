#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;

ll bigmod(ll a,ll b,ll mod){
    if(b==0) return 1LL;
    ll x = bigmod(a,b/2,mod);
    x = (x*x)%mod;
    if(b&1) x = (x*a)%mod;
    return x;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        printf("%lld\n",bigmod(a,bigmod(b,c,mod-1),mod));
    }
    return 0;
}
