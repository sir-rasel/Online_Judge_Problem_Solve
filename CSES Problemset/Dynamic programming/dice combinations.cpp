#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

ll dp[N];

void diceCombination(int n){
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j<=i){
                dp[i] += dp[i-j];
                dp[i]%=mod;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);

    diceCombination(n);

    printf("%lld\n",dp[n]);

    return 0;
}
