#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll mn;
bool visit[1500];
vector <vector < pair <ll,ll> > > vec;

void dfs(ll x,ll val){
    visit[x] = true;
    if(val > mn) mn = val;
    for(int i=0; i<vec[x].size(); i++)
        if(visit[vec[x][i].first]==false)
              dfs(vec[x][i].first,val + vec[x][i].second);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        vector < vector <pair <ll,ll> > > temp(n+2);
        swap(temp,vec);
        ll e = n-1;
        for(int i=0; i<n+10; i++) visit[i] = false;
        ll sum = 0;
        while(e--){
            ll a,b,w;
            scanf("%lld %lld %lld",&a,&b,&w);
            sum += w;
            vec[a].push_back({b,w});
            vec[b].push_back({a,w});
        }
        mn = INT_MIN;
        dfs(1,0);
        ll st = sum - mn;
        st*=2;
        printf("Case %d: %lld\n",cs++,mn+st);
    }
    return 0;
}
