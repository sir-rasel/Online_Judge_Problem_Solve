#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        double r,a;
        scanf("%lf %lf",&r,&a);
        a = acos(-1) * a / 180;
        double  ans=r*sin(a)/(sin(a)*sin(a)+cos(a));
        printf("%.6lf\n",ans);
    }
    return 0;
}
