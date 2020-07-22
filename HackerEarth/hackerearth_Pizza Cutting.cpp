#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        ll ans = (n*(n+1))/2 + 1;
        printf("%lld\n",ans);
    }
    return 0;
}
