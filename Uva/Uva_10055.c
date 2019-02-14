#include <stdio.h>
int main(){
    long long int a,b,sub;
    while(scanf("%lld %lld",&a,&b) !=EOF){
        if(b>a)
            sub=b-a;
        else
            sub=a-b;
        printf("%lld\n",sub);
    }
    return 0;
}
