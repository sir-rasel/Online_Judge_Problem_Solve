#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;

ll bigmod(ll a,ll b){
    if(b==0) return 1LL;
    ll x = bigmod(a,b/2);
    x = (x*x)%mod;
    if(b&1) x = (x*a)%mod;
    return x;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%lld\n",bigmod(a,b));
    }
    return 0;
}
