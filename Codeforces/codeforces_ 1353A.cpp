#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);

	while (test--) {
		ll n,m;
		scanf("%lld %lld",&n,&m);

        if(n==1) printf("0\n");
        else if(n==2) printf("%lld\n",m);
        else printf("%lld\n",2LL*m);
	}
	return 0;
}
