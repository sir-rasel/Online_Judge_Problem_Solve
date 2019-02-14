#include <stdio.h>
int main(){
    int test,num,dis,min,max;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&num);
        min=100;
        max=-1;
        while(num--){
            scanf("%d",&dis);
            if(dis<min) min=dis;
            if(dis>max) max=dis;
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}
