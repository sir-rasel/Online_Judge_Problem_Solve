#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

ll bigmod(int n){
    if(n==0) return 1;
    ll x = bigmod(n/2);
    x = ((x%mod)*(x%mod))%mod;
    if(n&1) x = ((x%mod)*2)%mod;
    return x;
}

int main(){
    int n;
    scanf("%d",&n);
    ll ans = bigmod(n);
    printf("%lld\n",ans);
    return 0;
}
