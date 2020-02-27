#include<bits/stdc++.h>
using namespace std;

int n, w[5007], h[5007], sub[5007], s[5007];

int dp(int v) {
	if (s[v]) return s[v];
	s[v] = 1;
	for (int i = 0; i <= n; i++)
		if (w[i] > w[v] && h[i] > h[v] && dp(i) + 1 > s[v]) {
			s[v] = dp(i) + 1;
			sub[v] = i;
		}
	return s[v];
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) scanf("%d%d", &w[i], &h[i]);
	printf("%d\n", dp(0) - 1);
	int pos = 0;
	while (s[pos] > 1) {
		printf("%d ", sub[pos]);
		pos = sub[pos];
	}
	printf("\n");
	return 0;
}
