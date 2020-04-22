#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>ar(n+1);
        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);

        ll ans = 0;
		for(int i = 1; i <= n; i++) {
			int mx = -INT_MAX;
			for(int j = i; j <= n; j++) {
				if(ar[i] < 0 && ar[j] > 0)
					break;
				if(ar[i] > 0 && ar[j] < 0)
					break;
				i = j;
				mx = max(mx, ar[j]);
			}
			ans += mx;
		}
        printf("%lld\n",ans);
    }

    return 0;
}
