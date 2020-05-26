#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll x[23], a = 0, y[23], s = 1e18;

ll sum(ll n){
    ll s1 = 0, s2 = 0;
    for(ll i = 0; i < n; i++)
        if(x[i] == 1) s1 += y[i];
        else s2 += y[i];
    return abs(s1 - s2);
}
int main () {
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++) cin >> y[i];
    for(ll i = 0; i < (1<<n); i++){
        ll v = i;
        a = 0;
        while(v > 0){
            x[a++] = v % 2;
            v /= 2;
        }
        s = min(s, sum(n));
    }
    cout << s;
}
