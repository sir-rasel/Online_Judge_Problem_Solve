#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;
const int N = 2e5+10;
int n,k;

vector<int>g[N];
ll h[N];

int dfs(int u,int p,int d){
    int s=1;
    for(auto v:g[u])
        if(v!=p)
            s+=dfs(v,u,d+1);

    h[u]=d-s;
    return s;
}

int main(){
    cin>>n>>k;
    for(int i=1; i<n; ++i){
        int u,v;
        cin>>u>>v;
        g[--u].push_back(--v);
        g[v].push_back(u);
    }
    dfs(0,-1,1);
    sort(h,h+n);
    cout<<accumulate(h+n-k,h+n,0ll)<<endl;
    return 0;
}
