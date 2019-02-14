#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ll initial=1;
    for(ll i=0;i<m;i++){
        ll ai;
        cin>>ai;
        if(ai>initial) ans+=ai-initial;
        else if(ai<initial) ans+=(n-initial)+ai;
        initial=ai;
    }
    cout<<ans<<endl;
    return 0;
}
