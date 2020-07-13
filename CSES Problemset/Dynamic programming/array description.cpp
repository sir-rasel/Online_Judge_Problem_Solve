#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e5+10;

int numberOfArray(int n,int m,vector<int>x){
    vector<vector<int> > dp(n+1,vector<int>(m+1,0));
    if(x[0]==0)
        fill(dp[0].begin(),dp[0].end(),1);
    else dp[0][x[0]] = 1;

    for(int i=1;i<n;i++){
        if(x[i]==0){
            for(int j=1;j<=m;j++){
                for(auto k:{j-1,j,j+1}){
                    if(k>=1 and k<=m){
                        (dp[i][j] += dp[i-1][k]) %= mod;
                    }
                }
            }
        }
        else{
            for(auto k:{x[i]-1,x[i],x[i]+1}){
                if(k>=1 and k<=m){
                    (dp[i][x[i]] += dp[i-1][k]) %= mod;
                }
            }
        }
    }

    int ans = 0;
    for(int i=1;i<=m;i++)
        (ans += dp[n-1][i]) %= mod;

    return ans;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>x(n);
    for(int i=0;i<n;i++) scanf("%d",&x[i]);

    int ans = numberOfArray(n,m,x);
    printf("%d\n",ans);

    return 0;
}
