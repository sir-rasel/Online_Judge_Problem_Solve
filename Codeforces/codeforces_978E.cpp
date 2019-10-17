#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int n,w;

int main(){
    ll v;
    cin >> n >> w;
    ll lo = 0, hi = 0, now = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> v, now += v, lo = min(lo, now), hi = max(hi, now);
    cout << (abs(lo) > w || abs(hi) > hi || abs(hi - lo) > w ? 0 : abs(w - hi - abs(lo)) + 1) << endl;
    return 0;
}
