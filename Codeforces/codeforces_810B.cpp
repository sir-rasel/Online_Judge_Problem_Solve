#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,f,sum=0;
    cin>>n>>f;
    ll a[n+5];
    for(int i=0;i<n;i++) {
        ll k,l;
        cin>>k>>l;
        sum+=min(k,l);
        if(k>=l) a[i]=0;
        else a[i]=min(2*k,l)-min(k,l);
    }
    sort(a,a+n,greater<ll>());
    for(int i=0; f and i<n;i++) if(a[i]>0) sum+=a[i],f--;
    cout<<sum<<endl;
    return 0;
}
