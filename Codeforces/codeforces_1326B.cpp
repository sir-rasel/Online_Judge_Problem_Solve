#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mx = 100005;

int main() {
    ll n;
    scanf("%lld",&n);
    ll arr[n+5];
    for(ll i=0;i<n;i++) scanf("%lld",&arr[i]);
    ll maxx = 0;
    for(ll i=0;i<n;i++){
        ll ans = maxx+arr[i];
        maxx = max(maxx,ans);
        if(i+1==n) printf("%lld\n",ans);
        else printf("%lld ",ans);
    }
	return 0;
}
