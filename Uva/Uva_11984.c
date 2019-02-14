#include <stdio.h>
int main ()
{
    int test,i;
    float cel,fah;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf ("%f %f",&cel,&fah);
        fah+= (9*cel)/5+32;
        cel = (((fah-32)/9)*5);
        printf("Case %d: %.2f\n",i,cel);
    }
    return 0;
}
