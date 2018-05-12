#include <stdio.h>
int main(){
    long long int cut,num;
    while(scanf("%lld",&cut)&& cut>=0){
        num=cut*(cut+1)/2+1;
        printf("%lld\n",num);
    }
    return 0;
}
