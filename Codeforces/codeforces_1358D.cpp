#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int main(){
    ll n, len;
    cin >> n >> len;
    vector<ll> A(2 * n);
    for (ll i = 0; i < n; i++){
        cin >> A[i];
        A[n + i] = A[i];
    }
    n *= 2;

    vector<ll> B = {0}, C = {0};
    for (ll i = 0; i < n; i++)
        B.push_back(B.back() + A[i]);
    for (ll i = 0; i < n; i++)
        C.push_back(C.back() + (A[i] * (A[i] + 1)) / 2);
    ll ans = 0;
    for (ll i = 0; i < n; i++){
        if (B[i + 1] >= len){
            ll z = upper_bound(B.begin(), B.end(), B[i + 1] - len) - B.begin();
            ll cnt = C[i + 1] - C[z];
            ll days = B[i + 1] - B[z];
            ll too = len - days;
            cnt += ((A[z - 1] * (A[z - 1] + 1)) / 2);
            cnt -= (((A[z - 1] - too) * (A[z - 1] - too + 1)) / 2);
            ans = max(ans, cnt);
        }
    }
    cout << ans;
    return 0;
}
