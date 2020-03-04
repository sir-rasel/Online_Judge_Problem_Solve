#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int maxn = 200005;

int fl[maxn];
int x[maxn];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		fl[x[i] % m]++;
	}

	for (int i = 0; i < m; i++)
		if (fl[i] >= 2) {
			printf("0\n");
			return 0;
		}

	ll ans = 1;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			ans = ans * (abs(x[i] - x[j])) % m;
	cout << ans << endl;
	return 0;
}
