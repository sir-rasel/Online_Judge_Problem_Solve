#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n,k,p;
const int maxN = 55;
const int maxK = 35;
const int maxP = 2000;
ll stackk[maxN][maxK];
ll sum[maxN][maxK];
ll dp[maxN][maxP];

void clearing(){
    scanf("%lld %lld %lld",&n,&k,&p);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            scanf("%lld",&stackk[i][j]);
        }
    }
    memset(sum,0,sizeof sum);
    memset(dp,0,sizeof dp);
}

void preCalculateSum(){
    for(ll i=1;i<=n;i++){
        sum[i][0] = 0;
        for(ll j=1;j<=k;j++){
            sum[i][j] = sum[i][j-1]+stackk[i-1][j-1];
        }
    }
}

void calculateBeauty(){
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=p;j++){
            dp[i][j] = 0;
            for(ll x=0;x<=min(j,k);x++){
                dp[i][j] = max(dp[i][j],dp[i-1][j-x]+sum[i][x]);
            }
        }
    }
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        clearing();
        preCalculateSum();
        calculateBeauty();

        printf("Case #%d: %lld\n",cs++,dp[n][p]);
    }
    return 0;
}
