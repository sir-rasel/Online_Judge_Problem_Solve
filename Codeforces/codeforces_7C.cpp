#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll egcd(ll a,ll b,ll &x,ll &y){
    if(a==0){
        x = 0;
        y = 1;
        return b;
    }
    ll x1,y1;
    ll ans = egcd(b%a,a,x1,y1);
    x = y1 - (b/a)*x1;
    y = x1;
    return ans;
}

int main(){
    ll a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    ll x,y;
    ll gcd = egcd(a,b,x,y);

    if(abs(c)%gcd!=0) printf("-1\n");
    else{
        ll q = c/gcd;
        printf("%lld %lld\n",q*x*-1,q*y*-1);
    }
    return 0;
}
