#include <stdio.h>

int main(){
    long long int test,n,digit,i;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld",&n);
        n=(((((n*567)/9)+7492)*235)/47)-498;
        for(i=0;i<2;i++) {
            digit=n%10;
            n/=10;
        }
        if(digit<0) printf("%lld\n",(-1)*digit);
        else printf("%lld\n",digit);
    }
    return 0;
}
