#include <bits/stdc++.h>
using namespace std;

int ans;
int dfs(vector<vector<int> > &g, vector<int> &b, int node){
    int cur = b[node] - 1;
    for (int i = 0; i < g[node].size(); ++i)
        cur += dfs(g, b, g[node][i]);
    ans += abs(cur);
    return cur;
}

void solve(){
    int n;
    scanf("%d",&n);
    int v, d, u;
    vector<vector<int> > g(n);
    vector<int> boys(n), in(n);
    for (int i = 0; i < n; ++i){
        scanf("%d",&v);
        v--;
        scanf("%d %d",&boys[v],&d);
        for (int j = 0; j < d; ++j){
            scanf("%d",&u);
            u--;
            g[v].push_back(u);
            in[u]++;
        }
    }
    ans = 0;
    for (int i = 0; i < n; ++i)
        if (in[i] == 0) dfs(g, boys, i);
    printf("%d\n", ans);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        printf("Case %d: ", cs++);
        solve();
    }
    return 0;
}
