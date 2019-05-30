#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        ll ans=0,cur=0;
        while(cur<n){
            ans++;
            cur=(cur*3)+1;
        }
        printf("Case %d: %lld\n",cs++,ans);
    }
    return 0;
}
