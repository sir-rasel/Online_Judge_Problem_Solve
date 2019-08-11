#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int c,s,q,sr,ds;

int cost[102][102];

void initializeCost(){
    for(int i=0;i<102;i++){
        cost[i][i]=0;
        for(int j=0;j<102;j++)
            cost[i][j]=INF;
    }
}

void floydWarshall(){
    for(int k=1;k<=c;k++)
        for(int i=1;i<=c;i++)
            for(int j=1;j<=c;j++)
                cost[i][j]=min(cost[i][j],max(cost[i][k],cost[k][j]));
}

int main(){
    int cs=0;
    while(scanf("%d %d %d",&c,&s,&q)==3 and c){
        initializeCost();
        for(int i=0;i<s;i++){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            cost[u][v]=cost[v][u]=w;
        }
        floydWarshall();

        if(cs) printf("\n");
        printf("Case #%d\n",++cs);
        for(int i=0;i<q;i++){
            scanf("%d %d",&sr,&ds);
            int res = cost[sr][ds];
            if(res!=INF) printf("%d\n",res);
            else printf("no path\n");
        }
    }
    return 0;
}
