#include <stdio.h>
int main(){
    int test,r,i;
    int l,w,ul,ur,ll;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&r);
        l=5*r;
        w=l*6/10.0;
        ul=l*45/100;
        ur=l-ul;
        ll=w/2;
        printf("Case %d:\n",i);
        printf("%d %d\n",(-1)*ul,ll);
        printf("%d %d\n",ur,ll);
        printf("%d %d\n",ur,(-1)*ll);
        printf("%d %d\n",(-1)*ul,(-1)*ll);
    }
    return 0;
}
