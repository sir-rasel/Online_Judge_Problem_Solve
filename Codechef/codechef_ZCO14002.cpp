#include<bits/stdc++.h>
#define N 200005
#define INF 1e15
using namespace std;

typedef long long int ll;

vector<int>day;
int n,dp[N][5];

ll calculate(int idx,int leave){
    if(leave==3) return INF;
    if(idx==n) return 0;
    if(dp[idx][leave]!=-1) return dp[idx][leave];
    return dp[idx][leave] = min(day[idx]+calculate(idx+1,0),calculate(idx+1,leave+1));
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        day.push_back(num);
    }
    memset(dp,-1,sizeof(dp));
    ll ans = calculate(0,0);
    printf("%lld\n",ans);
    return 0;
}
