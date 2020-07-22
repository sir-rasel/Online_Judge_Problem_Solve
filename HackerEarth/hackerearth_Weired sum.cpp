#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e6+5;
const double eps = 1e-4;

vector<ll>arr;
ll ans = LONG_MIN;

ll maxSum(ll n,ll k,ll m){
    vector<vector<ll> >dp(n+1,vector<ll>(k+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i == 1  and j == 1)
                dp[i][j] = arr[i-1]*(j%m);
            else if(j<=i){
                ll temp = arr[i-1]*(j%m);
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+temp);
            }
            else dp[i][j] = LONG_MIN;
        }
    }

    return dp[n][k];
}

int main(){
    ll n,m,k;
    cin>>n>>k>>m;

    arr.resize(n+1);
    for(int i=0;i<n;i++) scanf("%lld",&arr[i]);

    ll ans = maxSum(n,k,m);
    printf("%lld\n",ans);

    return 0;
}
