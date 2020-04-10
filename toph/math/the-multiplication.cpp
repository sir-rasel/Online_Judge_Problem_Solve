#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> pii;
typedef long long int ll;
int ans[1005];
const int mod = 1000000000 + 7;
vector <pii> v[45];

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		int n, k;
		scanf("%d %d", &k, &n);
		v[k].emplace_back(n, i);
	}
	for(int i = 1; i <= 40; i++) {
		sort(v[i].begin(), v[i].end());
		int cur = i;
		int mult = 1;
		for(auto j : v[i]) {
			while(cur <= j.first) {
				mult = (1LL * (1 + cur) * mult) % mod;
				cur += i;
			}
			ans[j.second] = mult;
		}
	}
	for(int i = 1; i <= t; i++)
        printf("Case %d: %d\n", i, ans[i]);

	return 0;
}
