#include <bits/stdc++.h>
using namespace std;

#define finish(x) return cout << x << endl, 0
#define ll long long

ll l, r;
int solve(ll x){
    int msb = -1;
    while((1LL << (msb + 1)) <= x) msb++;
    return msb;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> r;
    if(l == r) finish(1);

    int msb = 60;
    while(((r >> msb) & 1) == ((l >> msb) & 1)){
        if((l >> msb) & 1) l ^= (1LL << msb);
        if((r >> msb) & 1) r ^= (1LL << msb);
        msb--;
    }

    ll m = (1LL << msb);
    ll ans = m - l;
    ll h = r - m;
    h = (1LL << (solve(h) + 1)) - 1;
    h = min(h, l - 1);
    ans += h + 1;
    ans += m - l;
    cout << ans << endl;


    return 0;
}
