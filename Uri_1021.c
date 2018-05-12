#include<stdio.h>
#include<math.h>
    int main(){
        float N;
        int a,b,c,d,e,e1,f,g,h,i,j,z;
        scanf("%f",&N);
        z=ceil(N*100);
        a=z/10000;
        z=z%10000;
        b=z/5000;
        z=z%5000;
        c=z/2000;
        z=z%2000;
        d=z/1000;
        z=z%1000;
        e=z/500;
        z=z%500;
        e1=z/200;
        z=z%200;
        f=z/100;
        z=z%100;
        g=z/50;
        z=z%50;
        h=z/25;
        z=z%25;
        i=z/10;
        z=z%10;
        j=z/5;
        z=z%5;
        printf("NOTAS:\n%d nota(s) de R$ 100.00\n",a);
        printf("%d nota(s) de R$ 50.00\n",b);
        printf("%d nota(s) de R$ 20.00\n",c);
        printf("%d nota(s) de R$ 10.00\n",d);
        printf("%d nota(s) de R$ 5.00\n",e);
        printf("%d nota(s) de R$ 2.00\n",e1);
        printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",f);
        printf("%d moeda(s) de R$ 0.50\n",g);
        printf("%d moeda(s) de R$ 0.25\n",h);
        printf("%d moeda(s) de R$ 0.10\n",i);
        printf("%d moeda(s) de R$ 0.05\n",j);
        printf("%d moeda(s) de R$ 0.01\n",z);
    return 0;
}
