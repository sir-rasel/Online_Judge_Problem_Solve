#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,k;
    cin>>n>>k;
    ll prev=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll pre;
        cin>>pre;
        if(pre+prev>=k){
            ans+=(pre+prev)/k;
            prev=(pre+prev)%k;
        }
        else {
            if(i and prev){
                ans++;
                prev=0;
            }
            else prev=pre;
        }
    }
    if(prev) ans++;
    cout<<ans<<endl;
    return 0;
}
