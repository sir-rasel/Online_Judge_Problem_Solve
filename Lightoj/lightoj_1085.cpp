#include <bits/stdc++.h>
using namespace std;

const int MOD=1000000007;

int tree[100050];
int a[100050];
int n,cnt;

void update(int i, int val){
	while(i <= cnt) {
		tree[i] = (tree[i] + val) % MOD;
        i += (i&-i);
    }
}

int query(int i){
	int result=0;
	while(i > 0) {
		result = (result + tree[i]) % MOD;
        i -= (i&-i);
    }
	return result;
}


int main(){
	int test,cs=1;
	scanf("%d", &test);
	while(test--) {
        int n;
		scanf("%d", &n);
		cnt = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		vector <int> b(a, a+n);
		memset(tree, 0, sizeof(tree));
		map <int, int> m;
		sort(b.begin(), b.end());

		for (int i = 0; i < n; i++)
			if(m.count(b[i]) == 0)
				m[b[i]] = ++cnt;

        int result=0;
		for (int i = 0; i < n; i++) {
			result = query(m[a[i]] - 1) + 1;
			ans = (result  + ans) % MOD;
			update(m[a[i]], result);
		}
		printf("Case %d: %d\n", cs++, ans);
	}
    return 0;
}
