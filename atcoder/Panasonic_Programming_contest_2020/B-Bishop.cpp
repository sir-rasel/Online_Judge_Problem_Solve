#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll h,w;
    scanf("%lld %lld",&h,&w);
    ll ans = ceil((h*w)/2.0);
    if(h==1 or w==1) ans = 1;
    printf("%lld\n",ans);
    return 0;
}
