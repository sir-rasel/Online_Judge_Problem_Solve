#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const ll mod = 1e9+7;

int getSum(ll a, ll b)
{
	ll s1 = a + b, s2 = b - a + 1;
	if (s1 % 2 == 0) s1 /= 2;
	else s2 /= 2;
	return (s1 % mod) * (s2 % mod) % mod;
}

int main()
{
    ll n,m,res;
	cin >> n >> m;
	res = (n % mod) * (m % mod) % mod;
	ll cur = 1;
	while (cur <= m && cur <= n) {
		ll tims = n / cur;
		ll en = min(n / tims, m);
		ll got = ll(getSum(cur, en)) * (tims % mod) % mod;
		res = (res - got + mod) % mod;
		cur = en + 1;
	}
	printf("%d\n", res);
	return 0;
}
