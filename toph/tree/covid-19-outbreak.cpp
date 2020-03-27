#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n,z,u,v,w;
const int mx = 1000005;
vector<pair<ll,ll> > edge[mx];
vector<ll> foodTrucks(mx);
vector<bool> visit(mx,false);

void dfs(ll node){
    visit[node] = true;
    for(int i=0;i<edge[node].size();i++){
        if(!visit[edge[node][i].first]) {
            dfs(edge[node][i].first);
            foodTrucks[node]+=min(foodTrucks[edge[node][i].first],edge[node][i].second);
        }
    }
}

int main(){
    scanf("%lld %lld",&n,&z);
    for(int i=0;i<n-1;i++){
        scanf("%lld %lld %lld",&u,&v,&w);
        edge[u].push_back({v,w});
        edge[v].push_back({u,w});
    }
    for(int i=1;i<=n;i++) scanf("%lld",&foodTrucks[i]);

    dfs(z);
    printf("%lld\n",foodTrucks[z]);

    return 0;
}
