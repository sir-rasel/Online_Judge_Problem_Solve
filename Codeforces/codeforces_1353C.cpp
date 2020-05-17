#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);

	while (test--) {
		ll n;
		scanf("%lld",&n);
		n/=2;
        ll ans = 8*(n*(n+1)*(2*n+1))/6;
        printf("%lld\n",ans);
	}
	return 0;
}
