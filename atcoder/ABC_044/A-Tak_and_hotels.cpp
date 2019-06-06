#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,k,x,y,ans;
    scanf("%lld %lld %lld %lld",&n,&k,&x,&y);
    if(k>n) ans = n*x;
    else ans = (k*x)+(n-k)*y;
    printf("%lld\n",ans);
    return 0;
}
