#include <stdio.h>

int main(){
    int test,i,n,j,mile,juice,sec;
    scanf("%d",&test);
    for(j=1;j<=test;j++){
        scanf("%d",&n);
        mile=0;
        juice=0;
        for(i=0;i<n;i++){
            scanf("%d",&sec);
            mile+=sec/30+1;
            juice+=sec/60+1;
        }
        mile=mile*10;
        juice=juice*15;
        if(mile==juice) printf("Case %d: Mile Juice %d\n",j,mile);
        else if(mile<juice) printf("Case %d: Mile %d\n",j,mile);
        else printf("Case %d: Juice %d\n",j,juice);
    }
    return 0;
}
