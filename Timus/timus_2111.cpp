#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int n;
    scanf("%d",&n);

    vector<ll>a(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    sort(a.begin(),a.end());

    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += (a[i]*sum) + (a[i]*(sum-a[i]));
        sum -= a[i];
    }
    printf("%lld\n",ans);

    return 0;
}
