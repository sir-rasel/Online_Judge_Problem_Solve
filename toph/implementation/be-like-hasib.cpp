#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll f(ll l,ll r,ll x){
    ll ans = 0;
    while(l<r){
        ans++;
        ll mid=(r+l)/2;
        if(x>mid) l=mid+1;
        else r=mid;
    }
    return ans;
}

int main() {
	ll n,x;
	scanf("%lld %lld",&n,&x);
	ll ans = f(1,n,x);
	printf("%lld\n",ans);
	return 0;
}
