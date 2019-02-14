#include <stdio.h>
int main(){
    int a[1000],max,n,i,index;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0]+a[1]+a[2];
    index=2;
    for(i=1;i<n-2;i++){
        if(a[i]+a[i+1]+a[i+2]>max) {
            max=a[i]+a[i+1]+a[i+2];
            index=i+2;
        }
    }
    printf("%d %d\n",max,index);
    return 0;
}
