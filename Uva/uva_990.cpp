#include<bits/stdc++.h>
using namespace std;

int dp[30][1005],direction[30][1005],times,factor;
int dive[30],gold[30],n;

void clearing(){
    memset(dp,-1,sizeof dp);
    memset(direction,-1,sizeof direction);
}

int knapsack(int idx,int value){
    if(idx==n) return 0;
    if(dp[idx][value]!=-1) return dp[idx][value];
    int profit1=0,profit2=0;
    if((value+dive[idx]*factor*3)<=times)
        profit1 = gold[idx]+knapsack(idx+1,value+dive[idx]*factor*3);
    profit2 = knapsack(idx+1,value);
    if(profit1>profit2){
        direction[idx][value] = 1;
    }
    dp[idx][value] = max(profit1,profit2);
    return dp[idx][value];
}

int main(){
    bool isNotFirst=false;
    while(scanf("%d %d",&times,&factor)!=EOF){
        clearing();
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d %d",&dive[i],&gold[i]);

        if(isNotFirst) printf("\n");
        isNotFirst = true;

        int maxGoldCollect = knapsack(0,0);
        printf("%d\n",maxGoldCollect);

        vector<int>taken;
        times=0;
        for(int i=0;i<n;i++){
            if(direction[i][times]==1){
                taken.push_back(i);
                times+=(dive[i]*3*factor);
            }
        }
        printf("%d\n",taken.size());
        for(auto it: taken)
            printf("%d %d\n",dive[it],gold[it]);
    }
    return 0;
}
