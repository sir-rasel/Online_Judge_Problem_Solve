#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    ll sum = 0, m = INT_MIN;
    for(int i=0;i<n;i++){
        ll a;
        scanf("%lld",&a);
        m = max(m, a);
        sum += a;
    }
    ll ans = 0;
    if(m > sum - m) ans = 2*m;
    else ans = sum;

    printf("%lld\n",ans);

    return 0;
}
