#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,x,y;
    vector<vector<int>>v;
    while(scanf("%d%d",&n,&m)!=EOF){
        v.assign(1000000, vector<int>());
        for(i=1; i<=n; i++){
            cin>>x;
            v[x].pb(i);
        }
        for(i=0; i<m; i++){
            cin>>x>>y;
            if(v[y].size()>x-1)
                printf("%d\n", v[y][x - 1]);
            else
                printf("0\n");
        }
    }
    return 0;
}
