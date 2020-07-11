#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e3+10;

string grid[N];
int n;

int gridPaths(){
    vector<vector<int> >dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<n;i++){
        if(grid[i][0] == '.') dp[i][0] = 1;
        else break;
    }
    for(int i=0;i<n;i++){
        if(grid[0][i] == '.') dp[0][i] = 1;
        else break;
    }

    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            if(grid[i][j] == '.')
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;

    return dp[n-1][n-1];
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>grid[i];

    ll ans = gridPaths();
    printf("%lld\n",ans);

    return 0;
}
