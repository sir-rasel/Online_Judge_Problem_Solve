#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m;
bool check[3010];
vector<pair<int,int> > a, b[3010];

int main() {
	scanf("%d%d",&n,&m);
	int init = 0;
	for(int i=1; i<=n; i++) {
		int p,c;
		scanf("%d%d", &p, &c);
		if(p == 1) {
			init++;
			continue;
		}
		b[p].push_back({c,i});
		a.push_back({c,i});
	}
	sort(a.begin(),a.end());

	for(int i=1; i<=m; i++) sort(b[i].begin(),b[i].end());

	ll res = 9e18;
	for(int i=max(init,1); i<=n; i++) {
		memset(check, 0, sizeof(check));
		int cnt = 0; ll cost = 0;
		for(int j=1; j<=m; j++) {
			if(b[j].size() >= i) {
				for(int k=0; k<b[j].size()-i+1; k++) {
					cost += b[j][k].first;
					check[b[j][k].second] = 1;
					cnt++;
				}
			}
		}

		if(cnt > i) continue;
		for(int j=0; j<a.size() && cnt+init < i; j++)
			if(!check[a[j].second]) {
				cost += a[j].first;
				cnt++;
			}
		res = min(res, cost);
	}
	printf("%lld", res);
	return 0;
}
