#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;
const int N = 1e4+10;

bool visit[N];
stack<int>seq;

void dfs(int u,vector<int>edge[]){
    visit[u]=true;
    for(auto v:edge[u])
        if(!visit[v])
            dfs(v,edge);
    seq.push(u);
}

void clean(){
    while(!seq.empty())
        seq.pop();
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int>edge[k+2];

        for(int i=0;i<k;i++){
            int u,v;
            scanf("%d %d",&u,&v);
            edge[u].push_back(v);
        }

        memset(visit,false,sizeof visit);
        clean();
        for(int i=1;i<=n;i++)
            if(!visit[i])
                dfs(i,edge);

        int ans = 0;
        memset(visit,false,sizeof visit);

        stack<int>temp;
        swap(temp,seq);
        while(!temp.empty()){
            int u = temp.top();
            temp.pop();

            if(!visit[u]){
                ans++;
                dfs(u,edge);
            }
        }

        printf("Case %d: %d\n",cs++,ans);
    }

	return 0;
}
