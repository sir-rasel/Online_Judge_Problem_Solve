#include<bits/stdc++.h>
using namespace std;

int N, E;
vector<int> G[16];
int DP[(1<<16)];
bool vis[16][(1<<16)];
bool flag[(1<<16)];

void DFS(int u, int mask){
    int v, len;
    vis[u][mask] = true;
    flag[mask] = true;
    len = G[u].size();
    for(int i=0; i<len; i++){
        v = G[u][i];
        if(!vis[v][mask|(1<<v)]) DFS(v,(mask|(1<<v)));
    }
}

int rec(int mask){
    int &ret = DP[mask];
    if(mask==0) return 0;
    if(ret!=-1) return ret;
    ret = 20;
    for(int i=mask; i>0; i=(mask&(i-1))){
        if(flag[i]) ret = min(ret, 1+rec(mask^i));
    }
    return ret;
}

int main(){
    int test, x, y;
    cin>>test;
    for(int i=1; i<=test; i++){
        cin>>N>>E;
        for(int j=0; j<N; j++) G[j].clear();
        for(int j=0; j<E; j++){
            cin>>x>>y;
            x--, y--;
            G[x].push_back(y);
        }
        memset(vis,false,sizeof(vis));
        memset(flag,false,sizeof(flag));
        for(int j=0; j<N; j++) DFS(j,(1<<j));
        memset(DP,-1,sizeof(DP));
        cout<<"Case "<<i<<": "<<rec((1<<N)-1)<<endl;
    }
    return 0;
}
