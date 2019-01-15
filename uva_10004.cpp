#include<bits/stdc++.h>
using namespace std;

bool bfs(int source,vector<int>edges[],int n){
    bool visit[n+5];
    bool colour[n+5];
    memset(visit,false,sizeof(visit));
    memset(colour,false,sizeof(visit));
    queue<int>Q;
    Q.push(source);
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
        visit[t]=true;
        for(auto node:edges[t]){
            if(visit[node]){
                if(colour[t]==colour[node]) return false;
            }
            else {
                Q.push(node);
                colour[node]=(!colour[t]);
            }
        }
    }
    return true;
}

int main(){
    int n;
    while(scanf("%d",&n) and n!=0){
        vector<int>edges[n+5];
        int e;
        scanf("%d",&e);
        for(int i=0;i<e;i++){
            int u,v;
            scanf("%d %d",&u,&v);
            edges[u].push_back(v);
            edges[v].push_back(u);
        }

        if(bfs(0,edges,n)) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
