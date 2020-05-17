#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool cmp (const pair<int, int> &a, const pair<int, int> &b){
    int lena = a.second - a.first + 1;
    int lenb = b.second - b.first + 1;
    if (lena == lenb) return a.first < b.first;
	return lena > lenb;
}

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
		int n;
		scanf("%d",&n);

		set<pair<int, int>, decltype(cmp)*> segment(cmp);
		segment.insert({0, n - 1});

		vector<int> a(n);
		for (int i = 1; i <= n; ++i) {
			pair<int, int> cur = *segment.begin();
			segment.erase(segment.begin());
			int id = (cur.first + cur.second) / 2;
			a[id] = i;
			if (cur.first < id) segment.insert({cur.first, id - 1});
			if (id < cur.second) segment.insert({id + 1, cur.second});
		}
		for (auto it : a) printf("%d ",it);
		printf("\n");
	}

	return 0;
}
