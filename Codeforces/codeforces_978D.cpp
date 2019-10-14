#include <bits/stdc++.h>

using namespace std;
const int maxn = 2e5 + 100;
typedef long long ll;

ll n, num[maxn];

void init() {
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &num[i]);
}

ll get_ans(ll tol) {
    ll cnt[3],st;
    cnt[0] = cnt[1] = cnt[2] = 0;
    for(int i=0;i<3;i++) {
        if(i == 0) st = num[0]-1;
        else if(i == 1) st = num[0];
        else st = num[0] + 1;

        for (ll j = 0; j < n; j++) {
            if(abs(num[j]-st) > 1) {
                cnt[i] = INT_MAX;
                break;
            }
            cnt[i] += abs(num[j] - st);
            st += tol;
        }
    }
    if(cnt[0] == cnt[1] && cnt[1] == cnt[2] && cnt[0] == INT_MAX) return -1;
    return min(cnt[0], min(cnt[1], cnt[2]));
}

int main() {
    init();
    ll Min = INT_MAX,tol;
    tol = num[1]-num[0];
    ll ans = get_ans(tol);
    if(ans >= 0)
        Min = min(Min, ans);
    for (int i = 1; i <= 2; i++) {
        ans = get_ans(tol-i);
        if (ans >= 0)
            Min = min(Min, ans);

        ans = get_ans(tol+i);
        if (ans >= 0)
            Min = min(Min, ans);
    }

    if (Min == INT_MAX) printf("-1");
    else printf("%lld", Min);

    return 0;
}
