#include<bits/stdc++.h>
using namespace std;

int n;
map < pair < int, int > , int > a;
pair < int, int > res(0, 10);

int main () {
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int x, y;
		scanf("%d%d", &x, &y);
		for (int c = -10; c <= 10; ++c) {
			for (int d = -10; d <= 10; ++d) {
				if (abs(c) + abs(d) > 10) continue;
				if((x+c) % 10 == 0 && (y+d) % 10 == 0)
					a[{x+c, y+d}]++;
			}
		}
	}

	for (auto it : a) {
		if (a[res] < it.second)
			res = it.first;
	}
	for (auto it : a) {
		if (a[res] == it.second)
			printf("%d %d\n", it.first.first, it.first.second);
	}
	return 0;
}
