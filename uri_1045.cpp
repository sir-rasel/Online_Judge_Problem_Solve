#include<stdio.h>
int main()
{
    double a,b,c,x;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a<b){
        x = a;
        a = b;
        b = x;
    }
    if(a<c){
        x = a;
        a = c;
        c = x;
    }

    if(a>=(b+c))printf("NAO FORMA TRIANGULO\n");
    else{
        if((a*a)==(b*b+c*c))printf("TRIANGULO RETANGULO\n");
        if((a*a)>(b*b+c*c))printf("TRIANGULO OBTUSANGULO\n");
        if((a*a)<(b*b+c*c))printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)printf("TRIANGULO EQUILATERO\n");
        else if((a==b||b==c||c==a))printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
