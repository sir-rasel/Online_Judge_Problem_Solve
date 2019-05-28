#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000007;
typedef long long int ll;

ll parent[MAX];
ll sz[MAX];
ll ans;

void makeSet(){
    for(int i=1;i<MAX;i++){
        sz[i]=1;
        parent[i]=i;
    }
}

ll Find(ll a){
    if(parent[a]==a) return a;
    return parent[a]=Find(parent[a]);
}

void Union(ll a,ll b){
    ll p1=Find(a), p2=Find(b);
    if(p1!=p2){
        ans-=(sz[p1]*(sz[p1]-1))/2;
        ans-=(sz[p2]*(sz[p2]-1))/2;
        sz[p1]+=sz[p2];
        parent[p2]=p1;
        ans+=(sz[p1]*(sz[p1]-1))/2;
    }
}

int main(){
    makeSet();
    ll n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        Union(a,b);
        printf("%lld\n",ans);
    }
    return 0;
}
