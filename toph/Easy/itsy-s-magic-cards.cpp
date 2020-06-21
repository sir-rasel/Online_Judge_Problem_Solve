#include<bits/stdc++.h>
using namespace std;

vector <int> graph[105];
int visited[105];

void make_graph(int u, int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int cnt = 0;

int DFS(int u, int x){
    if(visited[u]!=0) return 0;
    visited[u] = x;
    int p = (x==1)? 2 : 1;
    int q = 1;
    if(x==1) cnt++;
    for(int i=0; i < graph[u].size(); i++)
        q += DFS(graph[u][i],p);
    return q;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    char a,b;
    int u,v;
    for(int i = 0; i < m; i++){
        scanf(" %c %c",&a,&b);
        u = a - 'A' + 1;
        v = b - 'A' + 1;
        make_graph(u,v);
    }
    int p, q = 0, tot = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i]==0){
            cnt = 0;
            p = DFS(i,1);
            tot += p;
            p = max(cnt, p - cnt);
            q += p;
        }
    }

    printf("%d\n",n-tot+q);
    return 0;
}
