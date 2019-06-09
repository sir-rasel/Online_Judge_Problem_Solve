#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll p[3];
    scanf("%lld %lld %lld",&p[0],&p[1],&p[2]);
    sort(p,p+3);
    ll ans =p[0]+p[1];
    printf("%lld\n",ans);
    return 0;
}
