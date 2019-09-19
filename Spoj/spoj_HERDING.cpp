#include<bits/stdc++.h>
using namespace std;

const int maxx = 1005;
int n,m,trap=0,counter=1;
int visit[maxx][maxx];
char grid[maxx][maxx];

void dfs(int i,int j){
    if(!visit[i][j]) visit[i][j]=counter;
    else{
        if(visit[i][j]==counter) return;
        else{
            trap--;
            return;
        }
    }
    if(grid[i][j]=='S') dfs(i+1,j);
    if(grid[i][j]=='E') dfs(i,j+1);
    if(grid[i][j]=='N') dfs(i-1,j);
    if(grid[i][j]=='W') dfs(i,j-1);
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) scanf("%s",grid[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(!visit[i][j]){
                trap++;
                dfs(i,j);
                counter++;
            }
    printf("%d\n",trap);
    return 0;
}
