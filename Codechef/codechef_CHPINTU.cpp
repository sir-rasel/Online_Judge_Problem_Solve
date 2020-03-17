#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d\n",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);

        int pr[m+5]={0};
        int f[n+5];
        int p[n+5];
        map<int,bool>ch;
        for(int i=0;i<n;i++) {
            scanf("%d",&f[i]);
            ch[f[i]]=true;
        }
        for(int i=0;i<n;i++) scanf("%d",&p[i]);
        for(int i=0;i<n;i++) pr[f[i]]+=p[i];

        int minn = INT_MAX;
        for(int i=1;i<=m;i++){
            if(ch[i]) minn = min(minn,pr[i]);
        }
        printf("%d\n",minn);
    }
    return 0;
}
