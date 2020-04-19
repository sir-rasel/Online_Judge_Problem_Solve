#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    ll ans = 0;
    for(ll i = k; i <= n + 1; i++){
        ans += i * (n - i + 1) + 1;
        ans %= mod;
    }

    cout << ans << endl;

	return 0;
}
