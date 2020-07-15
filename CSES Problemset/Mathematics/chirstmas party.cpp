#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;
ll dp[N];

ll dearrangement(){
    dp[0] = 1;
    dp[1] = 0;
    for(int i=2;i<N;i++)
        dp[i] = ((i-1) * ((dp[i-1]+dp[i-2])%mod))%mod;
}

int main(){
    dearrangement();
    int n;
    scanf("%d",&n);
    ll ans = dp[n];
    printf("%lld\n",ans);
    return 0;
}

