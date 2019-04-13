#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;
const int INF = 0x7f7f7f7f;
const int MAX = 100009;

typedef long long int ll;
typedef struct { ll x, y; } point;

point C[MAX], qp;

ll triArea2(const point &a, const point &b, const point &c) {
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y);
}

bool inConvexPoly(int nc, const point &p) {
	int st = 1, en = nc - 1, mid;
	while(en - st > 1) {
		mid = (st + en)>>1;
		if(triArea2(C[0], C[mid], p) < 0) en = mid;
		else st = mid;
	}
	if(triArea2(C[0], C[st], p) < 0) return false;
	if(triArea2(C[st], C[en], p) < 0) return false;
	if(triArea2(C[en], C[0], p) < 0) return false;
	return true;
}

int main() {
	int test, cs = 1;
	scanf("%d", &test);
	while(test--) {
        int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%lld %lld", &C[i].x, &C[i].y);
		printf("Case %d:\n", cs++);
		int q;
		scanf("%d", &q);
		while(q--) {
			scanf("%lld %lld", &qp.x, &qp.y);
			if(inConvexPoly(n, qp)) puts("y");
			else puts("n");
		}
	}
	return 0;
}
