#include <stdio.h>
#include <math.h>
int main(){
    double r,n,ans;
while(scanf("%lf%lf",&r,&n)==2)
    {
        ans=r*r*n/2*sin(2.0*3.1415926535897932384626433832795/n);
        printf("%.3lf\n",ans);
    }
    return 0;
}
