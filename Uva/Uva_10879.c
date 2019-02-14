#include <stdio.h>
#include <math.h>
int main(){
    int n,k,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&k);
        b=sqrt(k);
        for(a=2;a<=b;a++){
            if(k%a==0) {
                printf("Case #%d: %d = %d * %d = ",i,k,a,k/a);
                break;
            }
        }
        for(a++;a<=b;a++){
            if(k%a==0){
                printf("%d * %d\n",a,k/a);
                break;
            }
        }
    }
    return 0;
}
