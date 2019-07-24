#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll limit = 10000000;

vector<ll>prime;
bool pri[limit+1];

void sieve(){
    ll sq = sqrt(limit)+1;
    memset(pri,true,sizeof pri);
    pri[0]=pri[1]=false;
    for(ll i=4;i<=limit;i+=2) pri[i]=false;
    for(ll i=3;i<=sq;i+=2)
        if(pri[i])
            for(ll j=i*i;j<=limit;j+=2*i)
                pri[j]=false;

    prime.push_back(2);
    for(ll i=3;i<=limit;i+=2)
        if(pri[i]) prime.push_back(i);
}

bool isPrime(ll n){
    if(n<=limit)
        return pri[n];
    for(ll prim:prime){
        if(prim>sqrt(n))
            return true;
        if(n%prim==0)
            return false;
    }
    return true;
}

int main() {
    sieve();
    ll L, U;
    while (scanf("%lld %lld", &L, &U) == 2) {
        pair<ll, ll> close, distant;
        ll close_dist = -1, far_dist = -1;
        ll prev_prime = -1;
        for (ll i = L; i <= U; i++)
            if (isPrime(i)) {
                if (prev_prime != -1) {
                    if (close_dist == -1 || i - prev_prime < close_dist) {
                        close = {prev_prime, i};
                        close_dist = i - prev_prime;
                    }
                    if (far_dist == -1 || i - prev_prime > far_dist) {
                        distant = {prev_prime, i};
                        far_dist = i - prev_prime;
                    }
                }
                prev_prime = i;
            }
        if (close_dist != -1)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",
                close.first, close.second, distant.first, distant.second);
        else
            printf("There are no adjacent primes.\n");
    }
    return 0;
}
