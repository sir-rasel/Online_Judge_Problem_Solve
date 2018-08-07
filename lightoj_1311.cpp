#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        double v1,v2,v3,a1,a2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        double t1 = v1/a1;
        double t2 = v2/a2;
        double time = max(t1,t2);
        double dis = v1*t1+(0.5)*-a1*t1*t1;
        dis += v2*t2+(0.5)*-a2*t2*t2;
        double birds = v3*time;
        printf("Case %d: %.9lf %.9lf\n",cs,dis,birds);
    }
    return 0;
}
