#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e5+10;

int n;
int CAP;
int weight[1100],cost[1100];

int knapsack(){
    vector<vector<int> >dp (n+5,vector<int>(CAP+5,0));

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
    scanf("%d %d",&n,&CAP);
    for(int i=0;i<n;i++) scanf("%d",&weight[i]);
    for(int i=0;i<n;i++) scanf("%d",&cost[i]);

    ll ans = knapsack();
    printf("%lld\n",ans);

    return 0;
}
