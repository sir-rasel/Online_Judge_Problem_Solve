#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf",&a);
    if(a<=2000) printf("Isento\n");
    else{
        if(a<=3000){
            b=(a-2000)*8/100;
        }
        else if(a<=4500){
            b=(a-3000)*18/100+80;
        }
        else{
            b=(a-4500)*28/100+80+270;
        }
        printf("R$ %.2lf\n",b);
    }
    return 0;
}
