#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll traillingZeroOfFactorial(ll n,ll dividend){
    ll ans=0;
    ll div = dividend;
    while(n>=div){
        ans+=(n/div);
        div*=dividend;
    }
    return ans;
}

ll traillingZeroOfNormalNumber(ll n,ll dividend){
    ll ans=0;
    while(n%dividend==0){
        ans++;
        n/=dividend;
    }
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n,r,p,q;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);

        ll res1 = traillingZeroOfFactorial(n,5)-traillingZeroOfFactorial(r,5)-traillingZeroOfFactorial(n-r,5);
        res1+=traillingZeroOfNormalNumber(p,5)*q;

        ll res2 = traillingZeroOfFactorial(n,2)-traillingZeroOfFactorial(r,2)-traillingZeroOfFactorial(n-r,2);
        res2+=traillingZeroOfNormalNumber(p,2)*q;

        printf("Case %d: %lld\n",cs++,min(res1,res2));
    }
    return 0;
}

