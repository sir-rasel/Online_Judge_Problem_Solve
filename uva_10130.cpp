#include <bits/stdc++.h>
#define MAX_N 1010
#define MAX_W 50
using namespace std;

typedef long long int ll;

int n,CAP,f;
int weight[MAX_N+1],cost[MAX_N+1];
ll dp[MAX_N+1][MAX_W+1];

ll knapsack(int i,int w){
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int i=0;i<=CAP;i++) dp[0][i]=0;

    for(int i=1;i<=n;i++){
        for(int w=1;w<=CAP;w++){
            if(weight[i-1]<=w){
                dp[i][w] = max(cost[i-1]+dp[i-1][w-weight[i-1]],dp[i-1][w]);
            }
            else dp[i][w]=dp[i-1][w];
        }
    }
    return dp[n][CAP];
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(int i=0; i<n; i++) scanf("%d %d",&cost[i],&weight[i]);
        scanf("%d",&f);
        ll ans = 0;
        map<int,int>check;
        for(int i=0;i<f;i++) {
            scanf("%d",&CAP);
            if(check[CAP]==0) ans+=knapsack(n,CAP);
            else ans+=dp[n][CAP];
            check[CAP]++;
        }
        printf("%lld\n",ans);
    }

    return 0;
}
