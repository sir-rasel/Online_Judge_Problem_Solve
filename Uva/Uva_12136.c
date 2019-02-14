#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,test,i;
    char j;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d%c%d %d%c%d",&a,&j,&b,&c,&j,&d);
        scanf("%d%c%d %d%c%d",&e,&j,&f,&g,&j,&h);
        a=a*60+b;
        c=c*60+d;
        e=e*60+f;
        g=g*60+h;
        if(e>c || a>g)
            printf("Case %d: Hits Meeting\n",i);
        else
             printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
