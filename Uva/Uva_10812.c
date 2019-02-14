#include <stdio.h>
int main(){
    int test,a,b,sum,diff;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&a,&b);
        if (a>=b&&(a+b)%2==0){
            sum=(a+b)/2;
            diff=(a-b)/2;
            printf("%d %d\n",sum,diff);
        }
        else
         printf("impossible\n");
    }
    return 0;
}
