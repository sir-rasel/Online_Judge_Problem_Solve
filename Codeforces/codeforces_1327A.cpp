#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void check(ll n,ll k){
    if(n<(k*k) or (n-k*k)%2!=0)
        printf("NO\n");
    else printf("YES\n");
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        check(n,k);
    }
    return 0;
}
