#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll calculateCSOD(ll n){
    ll csod = 0;
    for (ll i = 2; i * i <= n; ++i){
        ll j = n / i;
        csod += (i + j) * (j - i + 1) / 2;
        csod += i * (j - i);
    }
    return csod;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n", cs++,calculateCSOD(n));
    }
    return 0;
}
