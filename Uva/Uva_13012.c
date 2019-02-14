#include <stdio.h>
int main(){
    int a,test,i,flag;
    while(scanf("%d",&test)!=EOF){
        flag=0;
        for(i=0;i<5;i++) {
            scanf("%d",&a);
            if(a==test) flag++;
        }
        printf("%d\n",flag);
    }
    return 0;
}
