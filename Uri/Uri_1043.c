#include<stdio.h>
int main(){
    double a,b,c,res;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        res=(a+b+c);
        printf("Perimetro = %.1lf\n",res);
    }
    else{
        res=(0.5*(a+b)*c);
        printf("Area = %.1lf\n",res);
    }
    return 0;
}
