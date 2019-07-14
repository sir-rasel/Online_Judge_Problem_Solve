#include <bits/stdc++.h>
#define INF 1000000000
#define Max 502
using namespace std;

typedef long long int ll;
int n,m,source,destination;
vector<int>path[Max];

ll dijakstra(vector<pair<int,int> >edge[],int source,int destination,int n){
	vector<ll>cost(n+1,INF);
	cost[source]=0;
	priority_queue<pair<int,int> >Q;
	Q.push({0,source});

	while(!Q.empty()){
		int weight = Q.top().first;
		int node = Q.top().second;
		Q.pop();

		if(weight>cost[node]) continue;
		for(auto it:edge[node]){
			int temp = it.first;
			int weight = it.second;

			if(cost[temp]>cost[node]+weight){
                cost[temp]=cost[node]+weight;
                Q.push({-cost[temp],temp});
                path[temp].clear();
                path[temp].push_back(node);
			}
			else if(cost[temp]==cost[node]+weight)
                path[temp].push_back(node);
		}
	}
	return cost[destination];
}

void cutPath(vector<pair<int,int> >edge[]){
		queue<int> q;
		q.push(destination);
		while (!q.empty()) {
			int currVertex = q.front();
			q.pop();
			for(int i=0;i<path[currVertex].size();i++) {
				int from = path[currVertex][i];
				int to = currVertex;
				if (from != source) q.push(from);
				for(int i=0;i<edge[from].size();i++){
					if (edge[from][i].first == to) {
						edge[from].erase(edge[from].begin()+i);
						break;
					}
				}
			}
		}
}

void clr(){
    for(int i=0;i<Max;i++) path[i].clear();
}

int main(){
	while(scanf("%d %d",&n,&m)){
        if(!n and !m) break;
        scanf("%d %d",&source,&destination);

        clr();
        vector<pair<int,int> >edge[n+5];

        for(int i=0;i<m;i++){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            edge[u].push_back({v,w});
        }
        ll cost = dijakstra(edge,source,destination,n);
        cutPath(edge);
        cost = dijakstra(edge,source,destination,n);
        if(cost==INF) printf("-1\n");
        else printf("%lld\n",cost);
	}
	return 0;
}
