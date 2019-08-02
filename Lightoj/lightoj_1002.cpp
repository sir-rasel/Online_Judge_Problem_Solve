#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9;
int cost[505];
int weight[505][505];

void dijkstra(int start,vector<int>edge[]){
	cost[start]=0;
	priority_queue<pair<int,int> >Q;
	Q.push({0,start});

	while(!Q.empty()){
		int w = Q.top().first;
		int node = Q.top().second;
		Q.pop();
		if(cost[node]!=w) continue;

		for(auto it:edge[node]){
			int temp = it;
			int wei = max(w,weight[node][it]);

			if(cost[temp]>wei){
                cost[temp]=wei;
                Q.push({wei,temp});
			}
		}
	}
}

void initialize(){
     for(int i=0;i<505;i++) {
        cost[i]=inf;
        for(int j=0;j<505;j++) weight[i][j]=weight[j][i]=inf;
     }
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        initialize();
        int n,m;
        scanf("%d %d",&n,&m);
        vector<int>edge[n+1];
        for(int i=0;i<m;i++){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            if(w<weight[u][v]){
                weight[u][v]=weight[v][u]=w;
                edge[u].push_back(v);
                edge[v].push_back(u);
            }
        }
        int start;
        scanf("%d",&start);
        printf("Case %d:\n",cs++);
        dijkstra(start,edge);
        for(int i=0;i<n;i++) {
            if(cost[i]!=inf) printf("%d\n",cost[i]);
            else printf("Impossible\n");
        }
    }
    return 0;
}
