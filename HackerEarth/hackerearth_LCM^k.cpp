#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e6+5;
const double eps = 1e-4;

bool mark[Max];
vector<ll>prime;
vector<pair<ll,ll> >factor[Max];

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

void factorize(){
    factor[1].push_back({2,0});
    for(ll num = 2;num<Max;num++){
        ll n = num;
        for(int i=0; prime[i]*prime[i]<=n; i++){
            if(n%prime[i]==0){
                ll count = 0;
                while(n%prime[i]==0){
                    count++;
                    n/=prime[i];
                }
                factor[num].push_back({prime[i],count});
            }
        }

        if(n!=1LL) factor[num].push_back({n,1});
    }
}

ll bigmod(ll a,ll b,ll mod){
    if(b==0) return 1LL;
    ll x = bigmod(a,b/2,mod);
    x = (x*x)%mod;
    if(b&1) x = (x*a)%mod;
    return x;
}

ll eulerPhi(ll n){
    ll ans = n;
    for(int i=0; prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0)
                n/=prime[i];
            ans = ans/prime[i] * (prime[i]-1);
        }
    }

    if(n!=1LL) ans = ans/n *(n-1);
    return ans;
}

void calculatePower(ll n, map<ll,ll>&power){
    for(auto it:factor[n])
        power[it.first] = max(power[it.first],it.second);
}

ll solution(ll phi, ll m, ll k, map<ll,ll>power){
    ll ans = 1;
    k = k % phi;
    for(auto it:power){
        ll a = it.first;
        ll b = ((it.second%phi)*k)%phi;

        ans = (ans * (bigmod(a,b,m)))% m;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    factorize();
    int test;
    cin>>test;
    while(test--){
        ll n,m,k;
        cin>>n>>m>>k;

        map<ll,ll>power;
        for(ll i=0;i<n;i++){
            ll num;
            cin>>num;

            calculatePower(num, power);
        }

        ll phi = eulerPhi(m);
        ll ans = solution(phi, m, k, power);
        cout<<ans<<endl;
    }
    return 0;
}
