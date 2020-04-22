#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<ll>power;
const ll maxx = 1000000005;

void cal(){
    ll i=1;
    while(i<maxx){
        power.push_back(i);
        i*=2;
    }
}

int main() {
    cal();
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);

        ll x = 1;
        for(int i=2;i<power.size();i++){
            if(power[i]-1>n) break;
            if( n%(power[i]-1)==0 ){
                x = n/(power[i]-1);
                break;
            }
        }
        printf("%lld\n",x);
    }

    return 0;
}
