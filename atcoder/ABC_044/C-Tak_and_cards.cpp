#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 1e9 + 7;
const int INF = 2e9;

ll dp[55][55][2550];

int main() {
    int n, a;
    scanf("%d %d",&n,&a);
    int x[n];
    for(int i=0;i<n;i++) scanf("%d",&x[i]);

    dp[0][0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= 2500; k++) {
                if (dp[i][j][k] == 0) continue;
                dp[i + 1][j + 1][k + x[i]] += dp[i][j][k];
                dp[i + 1][j][k] += dp[i][j][k];
            }
        }
    }

    ll ans = 0;
    for(int i=1;i<=n;i++) ans += dp[n][i][i * a];
    printf("%lld\n",ans);
    return 0;
}
