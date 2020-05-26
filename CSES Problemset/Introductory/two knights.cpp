#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        double ans = (((i*i)*(i*i-1))/2.0)-(4*(i-1)*(i-2));
        printf("%lld\n",(ll)ans);
    }
    return 0;
}
