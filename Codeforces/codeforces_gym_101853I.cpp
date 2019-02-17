#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        double a,b,d;
        scanf("%lf %lf %lf",&a,&b,&d);
        double ab = sqrt( (d*d)/2.0 );
        double outsideHalfCircle = ( pi*(ab/2)*(ab/2)/2 );
        double abcQuarterCircle = ( pi*(d/2)*(d/2) )/4;
        double halfPerimeter = (ab+d)/2;
        double triangleArea = sqrt((halfPerimeter*(halfPerimeter-ab)*(halfPerimeter-d/2)*(halfPerimeter-d/2)));
        double intersectCircle = abcQuarterCircle-triangleArea;
        double grayCicleArea = 4*(outsideHalfCircle-intersectCircle);
        printf("%lf\n",grayCicleArea);
    }
    return 0;
}
