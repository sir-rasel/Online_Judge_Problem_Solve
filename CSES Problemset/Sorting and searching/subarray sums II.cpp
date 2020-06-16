#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n,x;
    scanf("%lld %lld",&n,&x);

    vector<ll>a(n+1,0);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);

    ll ans=0, p_sum=0;
    map<ll,ll>frequency;
    for(int i=0;i<=n;i++){
        p_sum += a[i];
        ll target = p_sum - x;
        ans+=frequency[target];
        frequency[p_sum]++;
    }
    printf("%lld\n",ans);

    return 0;
}
