#include <bits/stdc++.h>
#define SIZE 100105
using namespace std;

typedef long long ll;
ll sz[SIZE], par[SIZE];
int t, n;

struct edge{
	int u, v;
	ll cst;
}ed[SIZE];

bool cmp(edge a, edge b){
	return a.cst>b.cst;
}

void init(){
	for(int i=1; i<=n; i++){
		par[i]=i;
		sz[i]=1;
	}
}

int root(int x){
	if(par[x]==x) return x;
	return root(par[x]);
}

ll merger(int x, int y){
	x=root(x);
	y=root(y);
	if(sz[y]>sz[x]) swap(x, y);
	ll val=sz[x]*sz[y];
	sz[x]+=sz[y];
	par[y]=par[x];
	return val;
}

ll dsu(){
	init();
	sort(ed, ed+n-1, cmp);
	ll sum=0;
	for(int i=0; i<(n-1); i++){
		sum+=ed[i].cst*merger(ed[i].u, ed[i].v);
	}
	sum+=sum;
	return sum;
}

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=0; i<(n-1); i++){
			scanf("%d %d %lld", &ed[i].u, &ed[i].v, &ed[i].cst);
		}
		printf("%lld\n", dsu());
	}
	return 0;
}
