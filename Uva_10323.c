#include <stdio.h>
int main (){
    int n,i;
    unsigned long long int sum;
    while(scanf ("%d",&n)!=EOF){
        if(n>13){
            printf("Overflow!\n");
        }
        else if(n<0){
            if(n%2!=0)printf("Overflow!\n");
            else if (n%2==0)printf("Underflow!\n");
        }
        else if(n<8) {
            printf("Underflow!\n");
        }
        else {
               sum=1;
            for (i=n;i>=1;i--){
                if (n==0){
                    sum=1;
                }
                else {
                    sum*=i;
                }
            }
            printf ("%lld\n",sum);
        }
    }
    return 0;
}
