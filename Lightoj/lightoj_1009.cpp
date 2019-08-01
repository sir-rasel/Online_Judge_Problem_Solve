#include<bits/stdc++.h>
using namespace std;

int rival[20005];
vector<int>edge[20005];
int lycan,vampire;

void clearMemory(){
    for(int i=0;i<20005;i++) edge[i].clear();
    memset(rival,0,sizeof rival);
}

void bfs(int node){
    queue<int>Q;
    Q.push(node);
    rival[node]=1;
    vampire++;

    while(!Q.empty()){
        int v = Q.front();
        Q.pop();

        for(auto x:edge[v])
            if(rival[x]==0){
                Q.push(x);
                if(rival[v]==1) rival[x]=2,lycan++;
                else rival[x]=1,vampire++;
            }
    }
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        clearMemory();
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int u,v;
            scanf("%d %d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        int ans=0;
        for(int i=1;i<20005;i++)
            if(!edge[i].empty() and rival[i]==0){
                lycan=vampire=0;
                bfs(i);
                ans+=max(lycan,vampire);
            }

        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
