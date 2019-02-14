#include <stdio.h>
int main(){
    long long int num;
    while(scanf("%lld",&num)!=EOF){
        printf("%lld\n",(num*(num+1))/2*(num*(num+1))/2);
    }
    return 0;
}
