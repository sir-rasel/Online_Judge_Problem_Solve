#include<bits/stdc++.h>
using namespace std;

int dp[110][110][110][2],vis[110][110][110][2],cs;
string a,b,c;

int DP(int i,int j,int k,int k1){
    if(i>a.length() || j>b.length() || k>c.length()) return -1e5;
    if(i==a.length() && j==b.length() && k==c.length())return 0;
    if(vis[i][j][k][k1]==cs) return dp[i][j][k][k1];
    vis[i][j][k][k1]=cs;
    int value=-1e5;
    if(a[i]==b[j] && b[j]==c[k]) value=max(value,1+DP(i+1,j+1,k+1,1));
    if(k1==0 || k==c.length())
      if(a[i]==b[j])
        value=max(value,1+DP(i+1,j+1,k,k1));

    value=max(value,DP(i+1,j,k,k1));
    value=max(value,DP(i,j+1,k,k1));
    return dp[i][j][k][k1]=value;
}

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
       cs=i;
       cin>>a>>b>>c;
       cout<<"Case "<<i<<": "<<max(DP(0,0,0,0),0)<<endl;
    }
    return 0;
}
