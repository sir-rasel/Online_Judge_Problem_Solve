#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    bool connection[n+5][n+5]={0};
    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(connection[a][b] or connection[b][a]) printf("old\n");
        else printf("new\n");
        connection[a][b]=true;
        connection[b][a]=true;
    }
    return 0;
}
