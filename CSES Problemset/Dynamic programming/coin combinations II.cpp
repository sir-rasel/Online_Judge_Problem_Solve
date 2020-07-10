#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

int coinCombination(int n, int x,vector<int>coin){
    vector<vector<int> >dp(n+1,vector<int>(x+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j] = dp[i-1][j];

            int left = j - coin[i-1];
            if(left >= 0){
                (dp[i][j] += dp[i][left]) %= mod;
            }
        }
    }
    return dp[n][x];
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<int>coin(n);
    for(int i=0;i<n;i++) scanf("%d",&coin[i]);

    int ans = coinCombination(n,x,coin);
    printf("%d\n",ans);

    return 0;
}
