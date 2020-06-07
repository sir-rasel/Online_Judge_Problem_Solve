#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);

        ll sum = (n*(n+1))/2;
        ll ans = 0,div=n;
        while(true){
            div = div/k;
            ans +=(sum-k*((div)*(div+1)/2));
            sum = ((div)*(div+1))/2;
            if(div==0) break;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
