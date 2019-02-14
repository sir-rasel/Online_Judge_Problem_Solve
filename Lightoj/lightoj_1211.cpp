#include <bits/stdc++.h>
using namespace std;

struct point{
    int x1,x2,y1,y2,z1,z2;
};

int main(){
    int test,cs=0;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        point a[n+5];
        for(int i=0;i<n;i++)
            scanf("%d%d%d%d%d%d",&a[i].x1,&a[i].y1,&a[i].z1,&a[i].x2,&a[i].y2,&a[i].z2);
        point intersectCube={0,1001,0,1001,0,1001};
        for(int i=0;i<n;i++){
            intersectCube.x1 = max(intersectCube.x1,a[i].x1);
            intersectCube.x2 = min(intersectCube.x2,a[i].x2);
            intersectCube.y1 = max(intersectCube.y1,a[i].y1);
            intersectCube.y2 = min(intersectCube.y2,a[i].y2);
            intersectCube.z1 = max(intersectCube.z1,a[i].z1);
            intersectCube.z2 = min(intersectCube.z2,a[i].z2);
        }
        int volume = (intersectCube.x2-intersectCube.x1)*(intersectCube.y2-intersectCube.y1)*(intersectCube.z2-intersectCube.z1);
        volume = (volume<0)? 0:volume;
        printf("Case %d: %d\n",++cs,volume);
    }
    return 0;
}
