#include <stdio.h>
int main(){
    int test,wall,hieght,temp,hijump,lojump,i,count;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&wall);
        hijump=0;
        lojump=0;
        temp=0;
        count=0;
        while(wall--){
            scanf("%d",&hieght);
            if(hieght>temp && count!=0) hijump++;
            else if(hieght<temp && count!=0) lojump++;
            temp=hieght;
            count++;
        }
        printf("Case %d: %d %d\n",i,hijump,lojump);
    }
    return 0;
}
