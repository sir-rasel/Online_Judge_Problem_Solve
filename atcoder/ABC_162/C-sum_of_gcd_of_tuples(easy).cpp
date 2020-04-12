#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
const int mod = 1e9+7;

ll g[205][205];

void pre(){
    for(int i=1;i<=200;i++){
        for(int j=1;j<=200;j++){
            g[i][j] = __gcd(i,j);
        }
    }
}

ll v(int n){
    pre();
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            for(ll k=1;k<=n;k++){
                ll temp = g[i][j];
                temp = g[temp][k];
                ans+=temp;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    ll ans = v(n);
    printf("%lld\n",ans);
	return 0;
}
