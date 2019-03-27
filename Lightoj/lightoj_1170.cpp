#include<bits/stdc++.h>
#define MAX 100100
#define mod 100000007
using namespace std;

typedef long long int ll;

set<ll>perfectPower;
vector<ll>power;
ll precalculate[MAX];

void powerGenarate(){
    for(ll i=2;i<=100001;i++){
        ll k=i*i;
        while(k<=1e10+1){
            perfectPower.insert(k);
            k*=i;
        }
    }
    for(auto it:perfectPower) power.push_back(it);
}

void countingBST(){
    precalculate[0]=precalculate[1]=1;
    precalculate[2]=2;
    precalculate[3]=5;

    for (ll i = 4; i < 3500; i++) {
		for (ll j=1;j<=i/2;j++) precalculate[i] = (precalculate[i]+((2*precalculate[j-1]*precalculate[i-j])%mod))%mod;
		if (precalculate[i] < 0) precalculate[i]+= mod;
		if (i%2!=0) precalculate[i] = (precalculate[i]+((precalculate[i/2]*precalculate[i/2])%mod))%mod;
		if (precalculate[i] < 0) precalculate[i]+= mod;
	}
}

int main(){
    powerGenarate();
    countingBST();

    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        auto it1 = upper_bound(power.begin(),power.end(),b);
        auto it2 = lower_bound(power.begin(),power.end(),a);
        ll n=it1-it2;

        if(n==0) printf("Case %d: 0\n",cs++);
        else printf("Case %d: %lld\n",cs++,precalculate[n]);
    }
    return 0;
}
