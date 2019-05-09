#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll maxx = 1e16+1;
ll ans[30];

void precal(){
    ll sum = 1,node=0;
    ans[0]=0;
    for(ll i=1; ;i++){
        if(i==(ll)1) node=1;
        else{
            node = node*i;
            sum += node;
        }
        ans[i] = sum;
        if(sum>=maxx) break;
    }
}

int main(){
    precal();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        int i=18;
        while(n <= ans[i]) i--;
        printf("Case %d: %d %lld\n",cs++,i+1,n-ans[i]);
    }
    return 0;
}
