#include <stdio.h>
int main () {
    int a,b,sum,i,n;
    scanf ("%d",&n);
    if (n<=125){
        for (i=1;i<=n;i++){
                scanf ("%d %d",&a,&b);
            if (a>=0 && b>=0 && a<=10 && b<=10){
                    sum = a+b;
                printf ("Case %d: %d\n",i,sum);
            }
        }
    }
    return 0;
}
