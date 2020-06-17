#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int power(ll n){
    int count = 0;
    while(n%2==0) n/=2,count++;
    return count;
}

ll mul(int p){
    ll ans = 1;
    while(p--) ans*=2;
    return ans;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,ans;
        scanf("%lld",&n);

        int c = power(n);
        ll div = mul(c+1);
        ans = n/div;

        printf("%lld\n",ans);
    }
    return 0;
}
