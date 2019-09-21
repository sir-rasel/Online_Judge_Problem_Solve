#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mod = 100000007LL;
const int maxx = 5000005;

bool mark[maxx];
vector<ll>prime;

void sieve(){
    for(int i=3;i*i<maxx;i+=2)
        if(!mark[i])
            for(int j=i*i;j<maxx;j+=2*i)
                mark[j]=true;
    prime.push_back(2LL);
    for(int i=3;i<maxx;i+=2)
        if(!mark[i])
            prime.push_back(i);
}

ll nod(ll n){
    ll ans=1;
    for(ll i=0;i<prime.size() and prime[i]<=n;i++){
        ll counter=0;
        ll pri = prime[i],primePower=prime[i],temp=n;
        while(ll div = temp/pri){
            counter+=div*(n%primePower+1)+(div)*(div-1)/2*primePower;
            temp/=pri;
            primePower*=pri;
        }
        counter%=mod;
        ans=((ans*(counter+1))%mod);
    }
    return ans;
}

int main(){
    sieve();
    ll n;
    while(scanf("%lld",&n)==1 and n!=0){
        ll res = nod(n);
        printf("%lld\n",res);
    }
    return 0;
}

