#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int inf = 2e9;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector <vector <int> > cost (n + 5, vector <int> (5, 0));
        for(int i=1;i<=n;i++)
            scanf("%d %d %d",&cost[i][1],&cost[i][2],&cost[i][3]);

        vector <vector <int> > dp (n + 5, vector <int> (5, inf));
        for (int i = 1; i <= 3; i++) dp[0][i] = 0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                for(int k=1;k<=3;k++){
                    if (j != k){
                        dp[i][j] = min(dp[i][j], cost[i][j] + dp[i - 1][k]);
                    }
                }
            }
        }

        int ans = inf;
        for (int i = 1; i <= 3; i++)
            ans = min(ans, dp[n][i]);

        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
