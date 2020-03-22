#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

int main(){
    ll n;
    scanf("%lld",&n);
    vector<ll>ch(n+1,0LL);
    ll num[n+5];
    for(ll i=0;i<n;i++){
        scanf("%lld",&num[i]);
        ch[num[i]]++;
    }
    ll ans=0;
    map<ll,ll>res;
    for(ll i=0;i<n;i++){
        ll t = (ch[num[i]]*(ch[num[i]]-1))/2;
        if(res.count(num[i])==0) {
            res[num[i]]=t;
            ans+=t;
        }
    }
    for(ll i=0;i<n;i++){
        ll temp = ch[num[i]]-1;
        ll pluss = (temp*(temp-1))/2;
        printf("%lld\n",ans-res[num[i]]+pluss);
    }
    return 0;
}
