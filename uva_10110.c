#include <stdio.h>
#include <math.h>
int main(){
    long long int num,temp;
    while(scanf("%lld",&num)&& num!=0){
        temp=sqrt(num);
        if(temp*temp==num) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
