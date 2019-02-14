#include <stdio.h>
int main(){
    int c,n,m,a,sum=0,count=0;
    scanf("%d %d",&c,&n);
    while(n--){
        scanf("%d",&a);
        sum+=a-c;
        if(sum<0) sum=0;
    }
    printf("%d\n",sum);
    return 0;
}
