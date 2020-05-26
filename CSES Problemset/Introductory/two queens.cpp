#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        double ans = ((i*i*i*i)/2.0)-((5*i*i*i)/3.0)+((3*i*i)/2.0)-(i/3.0);
        printf("%lld\n",(ll)ans);
    }
    return 0;
}
