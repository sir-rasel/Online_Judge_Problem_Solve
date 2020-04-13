#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
ll mod = 1000000007;

ll detectNumberOfPrime(ll n){
    ll counter=0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0) {
                n/=i;
                counter++;
            }
        }
    }
    if(n>1) counter++;
    return counter;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll x,k;
        scanf("%lld %lld",&x,&k);

        if(detectNumberOfPrime(x)>=k) printf("1\n");
        else printf("0\n");

    }
    return 0;
}
