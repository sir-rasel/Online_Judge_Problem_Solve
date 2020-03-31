#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll test;
    scanf("%lld",&test);
    while(test--){
        ll a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        ll x,y,x1,y1,x2,y2;
        scanf("%lld %lld %lld %lld %lld %lld",&x,&y,&x1,&y1,&x2,&y2);
        if (x-a+b>=x1 && x-a+b<=x2 && y-c+d>=y1 && y-c+d<=y2 && (a+b==0 || x2-x1>0) && (c+d==0 || y2-y1>0))
            printf ("Yes\n");
        else printf ("No\n");
    }
    return 0;
}
