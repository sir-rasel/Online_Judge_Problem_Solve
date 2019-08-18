#include<bits/stdc++.h>
using namespace std;

struct node{
    int x,y,t;
};

bool check(node point,int t,int x,int y){
    int div = t/point.t;
    int mod = t%point.t;

    int pos;
    if(div%2==0) pos=point.x+mod;
    else pos=point.y-mod;

    if(pos>=x and pos<=y) return true;
    else return false;
}

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        vector<node> point(n);
        for(int i=0;i<n;i++) {
            scanf("%d %d",&point[i].x,&point[i].y);
            point[i].t=(point[i].y-point[i].x);
        }
        for(int i=0;i<m;i++){
            int x,y,t;
            scanf("%d %d %d",&x,&y,&t);

            int ans=0;
            for(int j=0;j<n;j++)
                if(check(point[j],t,x,y)) ans++;

            printf("%d\n",ans);
        }
    }
    return 0;
}
