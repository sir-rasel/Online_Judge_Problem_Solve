#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calculateValue(ll t,ll c,ll n){
    return (t*(c-t*n));
}

int main(){
    ll t,cs=1;
    scanf("%lld",&t);
    while(t--){
        ll n,c;
        scanf("%lld %lld",&n,&c);
        if(n==0 or c==0 or n>c) printf("Case %lld: 0\n",cs++);
        else{
            ll possibleMinPoint1 = floor(c/(2*n));
            ll possibleMinPoint2 = possibleMinPoint1+1;

            if(calculateValue(possibleMinPoint1,c,n)>=calculateValue(possibleMinPoint2,c,n))
                printf("Case %lld: %lld\n",cs++,possibleMinPoint1);
            else printf("Case %lld: %lld\n",cs++,possibleMinPoint2);
        }
    }
    return 0;
}
