#include <stdio.h>
int main(){
    int a[11],n,test,i,j;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++) scanf("%d",&a[j]);
        printf("Case %d: %d\n",i,a[n/2]);
    }
    return 0;
}
