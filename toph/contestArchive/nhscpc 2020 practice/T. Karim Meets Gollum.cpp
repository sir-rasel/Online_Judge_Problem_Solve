#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e8;
const double eps = 1e-4;

bool mark[Max];
vector<ll>prime;

void sieve(){
    for(int i=4;i<Max;i+=2) mark[i]=true;
    for(int i=3;i*i<=Max;i+=2)
        if(!mark[i])
            for(int j=i*i;j<Max;j+=2*i)
                mark[j]=true;

    for(ll i=2;i<Max;i++)
        if(!mark[i])
            prime.push_back(i);
}

ll bigmod(ll a,ll b,ll mod){
    if(b==0) return 1LL;
    ll x = bigmod(a,b/2,mod);
    x = (x*x)%mod;
    if(b&1) x = (x*a)%mod;
    return x;
}

ll modul(ll n,ll mi=1){
    n -= mi;
    if(n<0) {
        n+=mod;
        n%=mod;
    }
    return n;
}

ll nod(ll n){
    ll ans = 1;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll count = 1;
            while(n%prime[i]==0){
                count++;
                n/=prime[i];
            }
            ans = (ans * count) % mod;
        }
    }

    if(n!=1LL) ans = (ans * 2) % mod;
    return ans;
}

ll sumOfDivisorPowerK(ll n,ll k){
    ll ans = 1;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll count = 1;
            while(n%prime[i]==0){
                count++;
                n/=prime[i];
            }

            ll cV = bigmod(prime[i]%mod,k,mod);
            ll power = bigmod(cV,count,mod);

            ll temp = ( modul(power) * bigmod(modul(cV),mod-2,mod) )%mod;
            ans = ( (ans%mod) * (temp%mod) )%mod;
        }
    }

    if(n>1LL){
        ll cV = bigmod(n%mod,k,mod);
        ll power = bigmod(cV,2LL,mod);

        ll temp = ( modul(power) * bigmod(modul(cV),mod-2,mod) )%mod;
        ans = ( (ans%mod) * (temp%mod) )%mod;
    }

    return ans;
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        cin>>n>>k;

        ll ans;
        if(k==0) ans = nod(n);
        else ans = sumOfDivisorPowerK(n,k);

        cout<<ans<<endl;
    }
    return 0;
}
