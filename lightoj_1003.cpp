#include <bits/stdc++.h>
using namespace std;

vector < vector<int> > G(10010);
int visited[10010];
int flag=1;

void dfs(int v)
{
    int i;
    visited[v]=1;
    if (flag==0) return;
    for (i=0;i<G[v].size();i++){
        if (visited[G[v][i]]==1){
            flag=0;
            return;
        }
        else if (visited[G[v][i]]==0){
            dfs(G[v][i]);
        }
    }
    visited[v]=2;
}

int main ()
{
    int t;
    cin>>t;
    int cas=1;
    while (t--){
        int n,i;
        cin>>n;
        int co=0;
        for (i=0;i<10010;i++){
            G[i].clear();
            visited[i]=0;
        }
        flag=1;
        map <string,int> m;
        while (n--){
            string str1,str2;
            cin>>str1>>str2;
            if (m.find(str1)==m.end())
                m[str1]=co++;
            if (m.find(str2)==m.end())
                m[str2]=co++;
            G[m[str1]].push_back(m[str2]);
        }

        for (i=0;i<co;i++){
            if (visited[i]==0){
                dfs(i);
            }
        }
        if (flag==0)
            cout<<"Case "<<cas++<<": No"<<endl;
        else
            cout<<"Case "<<cas++<<": Yes"<<endl;
    }
}
