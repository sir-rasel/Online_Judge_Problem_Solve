#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);

        ll ans = (n)*(n-1)+1;
        printf("%lld\n",ans);
    }
    return 0;
}
