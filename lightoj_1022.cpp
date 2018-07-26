#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        double radius;
        scanf("%lf",&radius);
        double squareArea = 4*(radius*radius);
        double circleArea = pi*(radius*radius);
        double ans = squareArea - circleArea;
        printf("Case %d: %.2f\n",i,ans);
    }
    return 0;
}
