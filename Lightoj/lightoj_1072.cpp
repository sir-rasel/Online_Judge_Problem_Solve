#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main(){
    int test,cs=0;
    scanf("%d",&test);
    while(test--){
        double R,n;
        scanf("%lf %lf",&R,&n);
        double angle = (pi/n);
        double sinValue = sin(angle);
        double r = (sinValue*R)/(1+sinValue);
        printf("Case %d: %.10f\n",++cs,r);
    }
    return 0;
}
