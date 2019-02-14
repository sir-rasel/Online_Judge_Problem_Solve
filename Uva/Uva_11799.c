#include <stdio.h>
int main(){
    int test,n,max,i,j,num;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        max=0;
        for(j=0;j<n;j++){
            scanf("%d",&num);
            if(max<num) max=num;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
