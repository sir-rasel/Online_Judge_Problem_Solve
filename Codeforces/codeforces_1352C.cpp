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

        ll temp = (k/n);
        ll ans = k+temp;
        ll prev = temp;

        while(true){
            temp = (ans/n);
            ans+=(temp-prev);

            if(temp-prev==0) break;
            prev = temp;
        }
        if(ans%n==0) ans++;

        if(k<n) ans = k;

        printf("%lld\n",ans);
    }
    return 0;
}
