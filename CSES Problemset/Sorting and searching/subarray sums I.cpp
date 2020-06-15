#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n,x;
    scanf("%lld %lld",&n,&x);
    vector<ll>ar(n+1, 0);
    for(ll i=1;i<=n;i++){
        ll num;
        scanf("%lld",&num);
        ar[i] = ar[i-1]+num;
    }

    int counter = 0;
    for(int i=0;i<=n;i++){
        auto it = lower_bound(ar.begin()+i+1,ar.end(),x+ar[i]);
        if(*it == (x+ar[i]) ) counter++;
    }
    printf("%d\n",counter);

    return 0;
}
