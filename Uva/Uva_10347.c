#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double sigma,area,cal;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        sigma=(a+b+c)/2.0;
        cal=sigma*(sigma-a)*(sigma-b)*(sigma-c);
        area=4.0*sqrt(cal)/3.0;
        if(area>0) printf("%.3lf\n",area);
        else printf("-1.000\n");
    }
    return 0;
}
