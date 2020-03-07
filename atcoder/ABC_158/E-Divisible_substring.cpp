#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll r[200020];

int main(){
    int n;
    cin >> n;
    ll p;
    cin >> p;
    string s;
    cin >> s;
    if(p==2 || p==5){
        ll ans=0;
        for(int i=0;i<n;i++){
            if((s[i]-'0')%p==0) ans+=i+1;
        }
        cout << ans << endl;
        return 0;
    }

    ll x=1;
    r[n]=0;
    for(int i=n-1; i>=0; i--){
        r[i]=(r[i+1]+((s[i]-'0')*x)%p)%p;
        x*=10;
        x%=p;
    }
    ll ans=0;
    ll cnt[p]= {};
    cnt[0]++;
    for(int i=n-1; i>=0; i--){
        ans+=cnt[r[i]];
        cnt[r[i]]++;
    }
    cout << ans << endl;
    return 0;
}
