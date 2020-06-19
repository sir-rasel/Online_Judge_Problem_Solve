#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;

ll getSum(ll a, ll b){
	ll s1 = a + b, s2 = b - a + 1;
	if (s1 % 2 == 0) s1 /= 2;
	else s2 /= 2;
	return (s1 % mod) * (s2 % mod) % mod;
}

ll getModSum(ll n){
    ll res = (n % mod) * (n % mod) % mod;
	ll cur = 1;
	while (cur <= n) {
		ll tims = n / cur;
		ll en = n / tims;
		ll got = ll(getSum(cur, en)) * (tims % mod) % mod;
		res = (res - got + mod) % mod;
		cur = en + 1;
	}
	return res;
}

int main(){
    ll n;
    scanf("%lld",&n);
    ll sum = (((n%mod)*(n%mod)%mod) - (ll)getModSum(n)+mod)%mod;
    printf("%lld\n",sum);
    return 0;
}

