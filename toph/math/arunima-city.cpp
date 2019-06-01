#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll i, n, m, ans=0;
    scanf("%lld %lld",&n,&m);
    for(i=1; i<=m; i++){
        ans=(n/i)*((i*(i-1))/2)+(((n%i)*((n%i)+1)))/2;
        if(i!=m) printf("%lld ",ans);
        else printf("%lld\n",ans);
    }
    return 0;
}
