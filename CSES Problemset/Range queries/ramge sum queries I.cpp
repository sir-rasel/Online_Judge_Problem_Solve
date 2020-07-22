#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,q;
    scanf("%d %d",&n,&q);

    vector<ll>sum(n+1);
    sum[0] = 0;

    for(int i=1;i<=n;i++){
        ll num;
        scanf("%lld",&num);
        sum[i] = sum[i-1] + num;
    }

    while(q--){
        int a,b;
        scanf("%d %d",&a,&b);

        ll ans = sum[b] - sum[a-1];
        printf("%lld\n",ans);
    }

    return 0;
}
