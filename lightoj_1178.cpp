#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        double a,b,c,d;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        if(a<c) swap(a,c);
        double s = (b+d+(a-c))/2.0;
        double triangleArea = sqrt(s*(s-b)*(s-d)*(s-(a-c)));
        double hieght = (2*triangleArea)/(a-c);
        double reactangleArea = hieght*c;
        double trapiziumArea = triangleArea+reactangleArea;
        printf("Case %d: %f\n",cs,trapiziumArea);
    }
    return 0;
}
