#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pii;

const int mxn=2e5+1;
ll n,a,b;
ll c[mxn];

int main(){
    cin>>n>>a>>b;
    for (int i=1;i<=n;i++){
        cin>>c[i];
        c[i]+=c[i-1];
    }
    set<pii> s;
    ll ans=-1e18;
    for (ll i=1;i<=n;i++){
        if (i>=a) s.insert({c[i-a],i-a});
        if (s.size()) ans=max(ans,c[i]-(s.begin()->first));
        if (i>=b) s.erase(s.find({c[i-b],i-b}));
    }
    cout<<ans;
    return 0;
}
