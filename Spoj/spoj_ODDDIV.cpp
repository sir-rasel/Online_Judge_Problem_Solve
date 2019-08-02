#include <bits/stdc++.h>
#define MAX 1005
using namespace std;

typedef long long int ll;

bool arr[MAX];
vector<int>prime;
vector<ll>oddDivisorNumber[10000];

void sieve(){
    int k=sqrt(MAX);
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;

    prime.push_back(2);
    for(int i=3;i<MAX;i+=2)
        if(!arr[i])
            prime.push_back(i);
}

ll nod(ll n){
    ll ans=1;
    for(int i=0;i<prime.size() and prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll count=0;
            while(n%prime[i]==0) {
                n/=prime[i];
                count++;
            }
            ans*=(2*count+1);
        }
    }
    if(n>2) ans*=3;
    return ans;
}

void preCalculate(){
    for(ll i=2;i<=100000;i++){
        ll n = nod(i);
        oddDivisorNumber[n].push_back((ll)i*i);
    }
}

int main(){
    sieve();
    preCalculate();
    int test;
    scanf("%d",&test);
    while(test--){
        ll k,a,b;
        scanf("%lld %lld %lld",&k,&a,&b);
        auto it = lower_bound(oddDivisorNumber[k].begin(),oddDivisorNumber[k].end(),a);
        if(it==oddDivisorNumber[k].end() or *it>b) printf("0\n");
        else{
            auto it2=lower_bound(oddDivisorNumber[k].begin(),oddDivisorNumber[k].end(),b);
            if(*it2>b or it2==oddDivisorNumber[k].end()) it2--;
            printf("%d\n",it2-it+1);
        }
    }
    return 0;
}
