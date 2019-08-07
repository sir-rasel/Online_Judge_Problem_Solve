#include <bits/stdc++.h>
using namespace std;

const int mx = 110;
const int inf = 1e9;

struct point{
    int x,y;
    bool operator<(const point &p)const{
        return y<p.y;
    }
};

point p[mx];
int n,w,k;
int state[mx],cleanCount[mx],dp[mx][mx];

void detectState(){
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
        int j;
        for(j=i;j<n and (p[j].y-p[i].y)<=w;j++);
        state[i]=j;
        cleanCount[i]=j-i;
    }
}

int maxClean(int i,int k){
    if(k<0) return -inf;
    if(i>=n) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    return dp[i][k]=max(maxClean(state[i],k-1)+cleanCount[i],maxClean(i+1,k));
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d",&n,&w,&k);
        for(int i=0;i<n;i++) scanf("%d %d",&p[i].x,&p[i].y);
        sort(p,p+n);
        detectState();
        int res = maxClean(0,k);
        printf("Case %d: %d\n",cs++,res);
    }
    return 0;
}
