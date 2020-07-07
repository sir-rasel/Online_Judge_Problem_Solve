#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
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

ll nod(ll n){
    ll res = 1;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            int count = 0;
            while(n%prime[i]==0){
                count++;
                n/=prime[i];
            }
            res *= (count+1);
        }
    }
    if(n!=1) res*=2;
    return res;
}
int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);

        ll ans = nod(2*n);
        ans = ceil(ans/2.0);
        printf("%lld\n",ans);
    }
    return 0;
}
