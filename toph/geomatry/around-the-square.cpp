#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main(){
    double a,r1,r2,r3,r4;
    while(scanf("%lf %lf %lf %lf %lf",&a,&r1,&r2,&r3,&r4) == 5)
        printf("%.3lf\n",(a*a)-(((pi*r1*r1)/4.0)+((pi*r2*r2)/4.0)+((pi*r3*r3)/4.0)+((pi*r4*r4)/4.0)));
    return 0;
}
