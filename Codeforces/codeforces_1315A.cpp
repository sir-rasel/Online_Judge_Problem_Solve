#include<bits/stdc++.h>
using namespace std;

int maximumArea(int a,int b,int x,int y){
    int area1 = ((x)*b);
    int area2 = ((a-x-1)*b);
    int area3 = (a*(y));
    int area4 = (a*(b-y-1));
    int area = max(area1,max(area2,max(area3,area4)));
    area1 = ((x-1)*(y));
    area2 = ((a-x)*(y-1));
    area2 = ((x-1)*(b-y));
    area4 = ((a-x)*(b-y-1));
    area = max(area,max(area1,max(area2,max(area3,area4))));
    return area;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,x,y;
        scanf("%d %d %d %d",&a,&b,&x,&y);
        int ans = maximumArea(a,b,x,y);
        printf("%d\n",ans);
    }
    return 0;
}
