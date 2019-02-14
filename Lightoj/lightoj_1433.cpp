#include<bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
};

double dis(point a,point b){
    return sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
}

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        point a,b,o;
        scanf("%lf %lf %lf %lf %lf %lf",&o.x,&o.y,&a.x,&a.y,&b.x,&b.y);
        double oa = dis(o,a);
        double ab = dis(a,b);
        double theta = acos((2*oa*oa-ab*ab)/(2*oa*oa));
        double arc = theta*oa;
        printf("Case %d: %lf\n",i,arc);
    }
    return 0;
}
