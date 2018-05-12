#include <stdio.h>
int main(){
    long long int num;
    long long int sum,i;
    while(scanf("%lld",&num) && num!=0){
        sum=sumation(num);
        printf("%lld\n",sum);
    }
    return 0;
}

int sumation(long long int n){
    int sum=0,sum1;
    while (n){
        sum+=n%10;
        n/=10;
    }
    sum1=sum;
    if(sum<10) return sum;
    sumation(sum1);
}
