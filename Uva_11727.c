#include <stdio.h>
int main(){
    int test,a,b,c,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((b<a && b>c)||(b>a && b<c)) printf("Case %d: %d\n",i,b);
        else if((a<b && a>c)||(a>b && a<c)) printf("Case %d: %d\n",i,a);
        else printf("Case %d: %d\n",i,c);
    }
    return 0;
}
