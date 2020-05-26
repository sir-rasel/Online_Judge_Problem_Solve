#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<ll>a(n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

    ll ans = INT_MIN,sum = 0;
    for(int i=0;i<n;i++){
        sum = max(a[i],sum+a[i]);
        ans = max(ans,sum);
    }
    printf("%lld\n",ans);

    return 0;
}
