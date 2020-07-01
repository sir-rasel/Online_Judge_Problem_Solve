#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

int dp[N];

void minimizingCoin(int x,vector<int>coin){
    dp[0]=0;
    for(int i=1;i<=x;i++){
        dp[i] = N;
        for(auto it: coin)
            if(it<=i)
                dp[i] = min(dp[i-it]+1,dp[i]);
    }
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<int>coin(n);
    for(int i=0;i<n;i++) scanf("%d",&coin[i]);

    minimizingCoin(x,coin);

    if(dp[x]!=N) printf("%d\n",dp[x]);
    else printf("-1\n");

    return 0;
}
