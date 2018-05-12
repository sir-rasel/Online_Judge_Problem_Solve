#include <stdio.h>

int bigmod(long long int a,long long int b,long long int m);

int main(){
    long long int a,b,m;
    while(scanf("%lld %lld %lld",&a,&b,&m)==3){
        printf("%d\n",bigmod(a,b,m));
    }
    return 0;
}

int bigmod(long long int a,long long int b,long long int m){
    int x;
    if(b==0) return 1%m;
    x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}
