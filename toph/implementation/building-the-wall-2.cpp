#include<bits/stdc++.h>
using namespace std;
int a[100001],n,m,ans=0,u,v;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        a[u]++;
        if(v<u) a[1]++;
        a[v+1]--;
    }
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        if(a[i]>1) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
