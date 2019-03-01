#include<bits/stdc++.h>
using namespace std;

double dp[(1<<16)];
int n,finalMask;
vector< pair<int,int> >point;

double distance(pair<int,int>a,pair<int,int>b){
    double dis = sqrt( (b.first-a.first)*(b.first-a.first)+(b.second-a.second)*(b.second-a.second) );
    return dis;
}

double pairingPoint(int mask){
    if(mask==finalMask) return 0;
    if(dp[mask]!=0) return dp[mask];

    double ans = 2e9;
    int p1,p2;
    for(p1=0;p1<n;p1++){
        if(!(1&(mask>>p1))){
            break;
        }
    }

    for(p2=p1+1;p2<n;p2++){
        if(!(1&(mask>>p2))){
            ans = min(ans,distance(point[p1],point[p2])+pairingPoint(mask|(1<<p1)|(1<<p2)));
        }
    }

    return dp[mask]=ans;
}

int main(){
    int cs=1;
    while(scanf("%d",&n) and n!=0){
        n*=2;
        finalMask = (1<<n)-1;
        point.clear();
        memset(dp,0,sizeof(dp));

        for(int i=0;i<n;i++){
            string s;
            int x,y;
            cin>>s>>x>>y;
            point.emplace_back(x,y);
        }
        double dis=pairingPoint(0);
        printf("Case %d: %.2f\n",cs++,dis);
    }
    return 0;
}
