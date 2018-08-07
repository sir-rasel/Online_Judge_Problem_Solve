#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int cow;
        scanf("%d",&cow);
        printf("Case %d:\n",i);
        while(cow--){
            int x,y;
            scanf("%d %d",&x,&y);
            if( (x>x1 and x<x2) and (y>y1 and y<y2) ) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
