#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,c,d,k;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        int pen = ceil((double)a/c);
        int pencil = ceil((double)b/d);
        if(pen+pencil<=k) printf("%d %d\n",pen,pencil);
        else printf("-1\n");
    }
    return 0;
}
