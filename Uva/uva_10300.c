#include <stdio.h>
int main(){
    long long int test,far,sum,dis,ani,rate;
    while(scanf("%lld",&test)==1){
        while(test--){
            scanf("%lld",&far);
            sum=0;
            while(far--){
                scanf("%lld %lld %lld",&dis,&ani,&rate);
                sum+=(dis*rate);
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
