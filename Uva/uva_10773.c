#include <stdio.h>
#include <math.h>
int main(){
    double test,i,u,v,d;
    double t1,t2;
    scanf("%lf",&test);
    for(i=1;i<=test;i++){
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v>=u || v==0 || u==0) printf("Case %.0lf: can't determine\n",i);
        else{
            t1=d/u;
            t2=d/sqrt(u*u-v*v);
            printf("Case %.0lf: %.3lf\n",i,t2-t1);
        }
    }
    return 0;
}
