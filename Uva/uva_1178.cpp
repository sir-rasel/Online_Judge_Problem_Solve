#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll egcd(ll a,ll b,ll &x,ll &y){
    if(a==0) {
        x=0,y=1;
        return b;
    }
    ll x1,y1;
    ll d = egcd(b%a,a,x1,y1);

    x = y1 - (b/a)*x1;
    y = x1;

    return d;
}

void ext_gcd(ll A,ll B,ll *X,ll *Y){
    ll x2,y2,x1,y1,x,y,r2,r1,q,r;
    x2=1;y2=0;
    x1=0;y1=1;
    for(r2=A,r1=B;r1!=0;r2=r1,r1=r,x2=x1,y2=y1,x1=x,y1=y){
        q=r2/r1;
        r=r2%r1;
        x=x2-(q*x1);
        y=y2-(q*y1);
    }
    *X=x2;*Y=y2;
}

int main(){
    ll x,y,i=0;
    while(scanf("%lld %lld",&x,&y)==2){
        if(x==0 and y==0) break;
        if(i!=0) printf("\n");

        ll gcd = __gcd(x,y);
        ll x1 = x/gcd;
        ll y1 = y/gcd;

        ll a,b;
        egcd(x1,y1,a,b);

//        ll a,b;
//        ext_gcd(x1,y1,&a,&b);
        if(x==y) swap(a,b);
        printf("minimum volume: %lld liter(s)\n",gcd);

        if(a==0) printf("%lld liter(s) not needed\n",x);
        else if(a<0) printf("%lld liter(s) withdrawn %lld times\n",x,-a);
        else printf("%lld liter(s) poured %lld times\n",x,a);

        if(b==0) printf("%lld liter(s) not needed\n",y);
        else if(b<0) printf("%lld liter(s) withdrawn %lld times\n",y,-b);
        else printf("%lld liter(s) poured %lld times\n",y,b);

        i++;
    }
    return 0;
}
