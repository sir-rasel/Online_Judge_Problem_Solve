#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e6+10;

int editDistance(string a, string b, int m, int n){
    vector<vector<int> >dp(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++) dp[i][0] = i;
    for(int i=1;i<=n;i++) dp[0][i] = i;

    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++){
            dp[i][j] = min( min(dp[i-1][j] + 1,dp[i][j-1] + 1),
                           dp[i-1][j-1] + (a[i-1]==b[j-1] ? 0 : 1) );
        }
    }

    return dp[m][n];
}

int main(){
    string a, b;
    cin>>a>>b;

    int m = a.size();
    int n = b.size();

    int ans = editDistance(a,b,m,n);
    printf("%d\n",ans);

    return 0;
}
