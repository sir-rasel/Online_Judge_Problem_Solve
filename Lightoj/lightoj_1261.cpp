#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	scanf("%d", &test);
	for(int cs = 1; cs <= test; cs++) {
        int n,m,p;
		scanf("%d %d %d", &n, &m, &p);
        int flag[n+5][p+5];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < p; j++)
				scanf("%d", &flag[i][j]);
        int q;
		scanf("%d", &q);
		int sol[q+5];
		for(int i = 0; i < q; i++) scanf("%d", &sol[i]);
		int i,j,k;
		for(i = 0; i < n; i++) {
			for(j = 0; j < p; j++) {
				if(flag[i][j] < 0) {
					for(k = 0; k < q; k++) if(sol[k] == -flag[i][j]) break;
					if(k == q) break;
				}
				else {
					for(k = 0; k < q; k++) if(sol[k] == flag[i][j]) break;
					if(k < q) break;
				}
			}
			if(j == p) break;
		}
		if(i == n) printf("Case %d: Yes\n", cs);
		else printf("Case %d: No\n", cs);
	}
	return 0;
}
