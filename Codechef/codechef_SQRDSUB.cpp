#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e5+10;
int a[N],prv[N],nxt[N];

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);

        ll ans = (1LL*n*(n+1))/2;
        int last = 0;
		for (int i = 1; i <= n; i++)
            if (a[i] % 2 == 0){
                prv[i] = last;
                last = i;
            }
		last = n + 1;
		for (int i = n; i >= 1; i--)
            if (a[i] % 2 == 0){
                nxt[i] = last;
                last = i;
            }
		for (int i = 1; i <= n; i++)
            if (abs(a[i]) % 4 == 2)
                ans -= 1ll * (i - prv[i]) * (nxt[i] - i);

        printf("%lld\n",ans);
    }
    return 0;
}
