#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    ll a,b;
    scanf("%lld %lld",&a,&b);
    ll x1 = floor(a/0.08);
    ll x2 = ceil(a/0.08);
    ll x3 = floor(b/0.1);
    ll x4 = ceil(b/0.1);

    if(floor(x1*0.08)==a and floor(x1*0.1)==b) printf("%lld\n",x1);
    else if(floor(x2*0.08)==a and floor(x2*0.1)==b) printf("%lld\n",x2);
    else if(floor(x3*0.08)==a and floor(x3*0.1)==b) printf("%lld\n",x3);
    else if(floor(x4*0.08)==a and floor(x4*0.1)==b) printf("%lld\n",x4);
    else printf("-1\n");
    return 0;
}
