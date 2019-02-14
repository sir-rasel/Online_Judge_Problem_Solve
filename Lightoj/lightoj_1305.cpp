#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int ax,ay,bx,by,cx,cy;
        scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        int difx = bx-ax;
        int dx = cx-difx;
        int dify = cy-by;
        int dy = dify+ay;
        long long int area = ax*(by-cy)+ay*(cx-bx)+(bx*cy-cx*by);
        if(area<0) area*=-1;
        printf("Case %d: %d %d %lld\n",i,dx,dy,area);
    }
    return 0;
}
