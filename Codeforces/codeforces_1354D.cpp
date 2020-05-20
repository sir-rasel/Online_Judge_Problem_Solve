#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int n;
ll BIT[Max];

void update(int idx, int val) {
	while(idx <= n) {
		BIT[idx] += val;
		idx += idx & -idx;
	}
}

ll query(int idx) {
	ll ret = 0;
	while(idx > 0) {
		ret += BIT[idx];
		idx -= idx & -idx;
	}
	return ret;
}

int binarySearch(int x){
    int l = 1, r = n;
    int ans = 0;
    while(l <= r){
        int mid = (l + r) >> 1;
        ll now = query(mid);
        if(now >= x){
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main() {
	int q;
	scanf("%d %d", &n, &q);
	for(int i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);
		update(x,1);
	}
	while(q--) {
		int x;
		scanf("%d", &x);
		if(x > 0) update(x, 1);
		else {
			x *= -1;
			int ans = binarySearch(x);
			update(ans, -1);
		}
	}

	printf("%d\n", binarySearch(1));
	return 0;
}
