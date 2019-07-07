#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

typedef long long int ll;

/*
int dijakstra(vector<pair<int,int> >edge[],int source,int destination,int n){
	vector<int>cost(n+1,INF);
	cost[source]=0;
	queue<pair<int,int> >Q;
	vector<bool>visit(n+1,false);
	Q.push({source,0});

	while(!Q.empty()){
		int temp1 = Q.front().first;
		int weight = Q.front().second;
		visit[temp1]=true;
		Q.pop();

		for(auto it:edge[temp1]){
			int temp = it.first;
			int weight = it.second;

			cost[temp]=min(cost[temp],cost[temp1]+weight);

			if(!visit[temp]) Q.push({temp,weight});
		}
	}
	return cost[destination];
} */

ll dijakstra(vector<pair<int,int> >edge[],int source,int destination,int n){
	vector<ll>cost(n+1,INF);
	cost[source]=0;
	priority_queue<pair<int,int> >Q;
	Q.push({0,source});

	while(!Q.empty()){
		int weight = Q.top().first;
		int node = Q.top().second;
		Q.pop();

		for(auto it:edge[node]){
			int temp = it.first;
			int weight = it.second;

			if(cost[temp]>cost[node]+weight){
                cost[temp]=cost[node]+weight;
                Q.push({-cost[temp],temp});
			}
		}
	}
	return cost[destination];
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
	while(test--){
        int n,m,source,destination;
        scanf("%d %d %d %d",&n,&m,&source,&destination);
        vector<pair<int,int> >edge[n+5];
        for(int i=0;i<m;i++){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            edge[u].push_back({v,w});
            edge[v].push_back({u,w});
        }
        ll cost = dijakstra(edge,source,destination,n);
        printf("Case #%d: ",cs++);
        if(cost==INF) printf("unreachable\n");
        else printf("%lld\n",cost);
	}
	return 0;
}
