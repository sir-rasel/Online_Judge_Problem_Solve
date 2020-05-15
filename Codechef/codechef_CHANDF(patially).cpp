#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int countBit(ll n){
    int counter=0;
    while(n){
        n/=2;
        counter++;
    }
    return counter;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll x,y,a,b;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);

        if(x>y) swap(x,y);

        ll c = x,d = y;
        ll ans = a,maxx=((c&a)*(d&a));

        while(true){
            int counter = countBit(y);
            if(counter==0) break;

            ll xorr = (x^y);
            ll andd = (x&y);
            ll orr = (x|y);

            if(xorr>=a and xorr<=b and ((c&xorr)*(d&xorr))>maxx){
                ans = xorr;
                maxx = ((c&xorr)*(d&xorr));
            }
            else if(xorr>=a and xorr<=b and ((c&xorr)*(d&xorr))==maxx)
                if(xorr<ans) ans = xorr;

            if(andd>=a and andd<=b and ((c&andd)*(d&andd))>maxx){
                ans = andd;
                maxx = ((c&andd)*(d&andd));
            }
            else if(andd>=a and andd<=b and ((c&andd)*(d&andd))==maxx)
                if(andd<ans) ans = andd;

            if(orr>=a and orr<=b and ((c&orr)*(d&orr))>maxx){
                ans = orr;
                maxx = ((c&orr)*(d&orr));
            }
            else if(orr>=a and orr<=b and ((c&orr)*(d&orr))==maxx)
                if(orr<ans) ans = orr;

            y-=(1LL<<(counter-1));
            if(x>y) swap(x,y);
        }

        printf("%lld\n",ans);
    }
    return 0;
}
