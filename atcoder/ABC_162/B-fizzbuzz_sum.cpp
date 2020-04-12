#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
const int mod = 1e9+7;

int main(){
    ll n;
    scanf("%lld",&n);
    ll ans = (n*(n+1))/2LL;
    ll th = (n/3LL);
    ll three = (3LL*th*(th+1LL))/2LL;
    ll fv = (n/5LL);
    ll five = (5LL*fv*(fv+1LL))/2LL;
    ll fif = (n/15LL);
    ll fifteen = (15*fif*(fif+1LL))/2LL;

    ll res = ans-(three+five)+fifteen;
    printf("%lld\n",res);
	return 0;
}
