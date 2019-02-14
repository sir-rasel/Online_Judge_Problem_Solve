#include <stdio.h>
int main(){
    int a,b,sum1,sum2,temp;
    while(scanf("%d %d",&a,&b) && a!=-1 && b!=-1){
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        sum1=b-a;
        sum2=100-b+a;
        if(sum2<sum1) printf("%d\n",sum2);
        else printf("%d\n",sum1);
    }
    return 0;
}
