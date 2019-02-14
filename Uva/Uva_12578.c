#include <stdio.h>
#include <math.h>
int main(){
    double w,r,pi,rec,cir;
    int test,l;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&l);
        w=6*l/10.0;
        r=l/5.0;
        pi=acos(-1);
        cir=pi*r*r;
        rec=l*w;
        printf("%.2lf %.2lf\n",cir,rec-cir);
    }
    return 0;
}
