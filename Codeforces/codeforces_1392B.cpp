#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll mod = 1000000007;

int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);

        vector<ll>a(n);
        ll best = LONG_MIN;

        for(ll i=0;i<n;i++){
            scanf("%lld",&a[i]);
            best = max(best,a[i]);
        }

        ll count = 0;
        while(true){
            ll  newBest = LONG_MIN;
            for(ll i = 0;i<n;i++){
                a[i] = best - a[i];
                newBest = max(newBest,a[i]);
            }
            count++;
            if(best == newBest) break;
            best = newBest;
        }

        if((count&1)!=(k&1)){
            for(ll i = 0;i<n;i++)
                a[i] = best - a[i];
        }

        for(ll i = 0;i<n;i++){
            if(i == n-1) printf("%lld\n",a[i]);
            else printf("%lld ",a[i]);
        }

    }
    return 0;
}
