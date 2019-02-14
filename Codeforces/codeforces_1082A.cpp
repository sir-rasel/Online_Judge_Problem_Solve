#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll directSolve(ll a,ll b,ll d){
    if(abs(a-b)%d) return 4e9;
    else return (abs(a-b)/d);
}

ll bySolve(ll a,ll b,ll d){
    return (abs(a-b)/d+(abs(a-b)%d>0));
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,x,y,d;
        scanf("%lld %lld %lld %lld",&n,&x,&y,&d);
        ll ans = 3e9;
        ans=min(ans,directSolve(x,y,d));
        ans=min(ans,bySolve(1,x,d)+directSolve(1,y,d));
        ans=min(ans,bySolve(x,n,d)+directSolve(n,y,d));
        if(ans>2e9) printf("-1\n");
        else printf("%lld\n",ans);
    }
    return 0;
}
