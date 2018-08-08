#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        int r1,r2,h,p;
        double r,v;
        scanf("%d %d %d %d",&r1,&r2,&h,&p);
        r = r2+(p*(r1-r2))/(double)h;
        v = (1/3.0)*pi*(r*r+r2*r2+r*r2)*p;
        printf("Case %d: %.9lf\n",cs,v);
    }
    return 0;
}
