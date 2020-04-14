#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        if(n<=2)
            printf("0\n");
        else{
            ll a = n/2;
            a++;
            ll ans = (n-a);
            printf("%lld\n",ans);
        }
    }
	return 0;
}
