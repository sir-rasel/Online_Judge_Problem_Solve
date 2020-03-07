#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    ll n,a,b;
    scanf("%lld %lld %lld",&n,&a,&b);
    if(a==0) printf("0\n");
    else if(b==0) printf("%lld\n",n);
    else{
        ll ans = (n/(a+b));
        if(ans*(a+b)==n) printf("%lld\n",ans*a);
        else{
            ll temp = ans*a;
            ll temp2 = ans*b;
            ll val = n-(temp+temp2);
            if(val>=a) temp+=a;
            else temp+=val;
            printf("%lld\n",temp);
        }
    }
    return 0;
}
