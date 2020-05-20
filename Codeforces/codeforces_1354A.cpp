#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
		ll a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

		ll ans;
        if(a<=b) ans = b;
        else if(c<=d) ans = -1;
        else{
            ll t = (a-b);
            ll n = (c-d);
            ll count = ceil((double)t/n);
            ans = b+count*(c);
        }

        printf("%lld\n",ans);
	}

	return 0;
}
