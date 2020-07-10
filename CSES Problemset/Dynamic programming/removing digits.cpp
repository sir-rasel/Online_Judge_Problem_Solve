#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

int removingDigits(int n){
    vector<int>dp(n+1,mod);
    dp[0] = 0;
    for(int i=1;i<=n;i++)
        for(auto c: to_string(i))
            dp[i] = min(dp[i],dp[i-(c-'0')]+1);
    return dp[n];
}

int main(){
    int n;
    scanf("%d",&n);

    int ans = removingDigits(n);
    printf("%d\n",ans);

    return 0;
}
