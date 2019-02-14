#include <stdio.h>
int main(){
    int test,i,n;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        printf("Case #%d: %d\n",i,2*n-1);
    }
    return 0;
}
