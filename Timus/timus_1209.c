#include <stdio.h>
#include <math.h>
int main(){
    long long int test,num,k,i=0,temp;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld",&num);
        k=8*num-7;
        temp=sqrt(k);
        if(k==temp*temp) printf("1 ");
        else printf("0 ");
    }
    printf("\n");
    return 0;
}
