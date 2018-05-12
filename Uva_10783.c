#include <stdio.h>
int main(){
    int a,b,t,sum,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        if(a%2==0) a++;
        sum=0;
        for(a;a<=b;a+=2) sum+=a;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
