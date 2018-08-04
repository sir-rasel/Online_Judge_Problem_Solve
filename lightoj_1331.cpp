#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        double r1,r2,r3;
        scanf("%lf %lf %lf",&r1,&r2,&r3);

        double a = r1+r2;
        double b = r1+r3;
        double c = r2+r3;

        double s = (a+b+c)/2;
        double triarea = sqrt(s*(s-a)*(s-b)*(s-c));

        double X = acos((a*a+b*b-c*c)/(2*a*b));
        double Y = acos((b*b+c*c-a*a)/(2*b*c));
        double Z = acos((a*a+c*c-b*b)/(2*a*c));

        double arcArea1 = (0.5)*r1*r1*X;
        double arcArea2 = (0.5)*r3*r3*Y;
        double arcArea3 = (0.5)*r2*r2*Z;
        double totalArcArea = arcArea1+arcArea2+arcArea3;

        double res = triarea - totalArcArea;
        printf("Case %d: %.8lf\n",i,res);
    }
    return 0;
}
