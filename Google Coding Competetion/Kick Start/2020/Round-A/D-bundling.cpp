#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n, k, c[2000001][26];
int m, cnt[2000001];
ll ans;

void clearing(){
    memset(c, 0, m*sizeof(c[0]));
	memset(cnt, 0, m*4);
	ans = 0;
}

void dfs(int u=0, int d=0) {
	for(int v=0; v<26; ++v)
		if(c[u][v])
			dfs(c[u][v], d+1), cnt[u]+=cnt[c[u][v]];
	while(cnt[u]>=k) {
		cnt[u]-=k;
		ans+=d;
	}
}

void solve() {
	cin >> n >> k;
	m = 1;
	for(int i=0; i<n; ++i) {
		string s;
		cin >> s;
		int u = 0;
		for(char d : s) {
			if(!c[u][d-'A']) c[u][d-'A'] = m++;
			u = c[u][d-'A'];
		}
		++cnt[u];
	}
	dfs();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		solve();
		printf("Case #%d: %d\n",i,ans);
		clearing();
		++i;
	}
}
