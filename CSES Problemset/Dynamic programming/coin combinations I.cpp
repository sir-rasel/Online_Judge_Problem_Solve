#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

ll dp[N];

void coinCombination(int x,vector<int>coin){
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(auto it: coin){
            if(it<=i){
                dp[i] += dp[i-it];
                dp[i]%=mod;
            }
        }
    }
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<int>coin(n);
    for(int i=0;i<n;i++) scanf("%d",&coin[i]);

    coinCombination(x,coin);

    printf("%lld\n",dp[x]);

    return 0;
}
