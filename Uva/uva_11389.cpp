#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n,d,r;
    while(scanf("%d %d %d",&n,&d,&r) and (n or d or r)){
        int morning[n];
        int evening[n];
        for(int i=0;i<n;i++) scanf("%d",&morning[i]);
        for(int i=0;i<n;i++) scanf("%d",&evening[i]);
        sort(morning,morning+n);
        sort(evening,evening+n,greater<int>());
        ll ans = 0;
        for(int i=0;i<n;i++){
            int sum = morning[i]+evening[i];
            if(sum>d) ans+=(sum-d)*r;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
