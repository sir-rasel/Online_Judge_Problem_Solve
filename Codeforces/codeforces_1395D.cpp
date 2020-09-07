#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int maxn = 1e5;

int n, d, m, k, l;
ll a[maxn + 5], b[maxn + 5];

void solve(ll a[], int n) {
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + n + 1);
	for(int i=1;i<=n;i++)
        a[i] += a[i - 1];
}

int main() {
	scanf("%d %d %d", &n, &d, &m);
	for (int i = 0, x; i < n; i++) {
		scanf("%d", &x);
		if (x > m) a[++k] = x;
		else b[++l] = x;
	}
	if (k == 0) {
		ll s = 0;
		for(int i=1;i<=n;i++)
            s += b[i];
		printf("%lld\n", s);
		return 0;
	}

	solve(a, k);
	solve(b, l);

	fill(b + l + 1, b + n + 1, b[l]);
	ll res = 0;
	for(int i = (k + d) / (1 + d);i<=k;i++) {
        if (1ll * (i - 1) * (d + 1) + 1 <= n) {
            res = max(res, a[i] + b[n - 1ll * (i - 1) * (d + 1) - 1]);
        }
	}
	printf("%lld\n", res);
	return 0;
}
