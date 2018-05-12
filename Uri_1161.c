#include <stdio.h>
long long int fac(int n);
int main (){
    int n,m,i;
    long long int  sum;
    while(scanf("%d %d",&n,&m)!=EOF){
        sum=fac(n)+fac(m);
        printf("%lld\n",sum);
    }
    return 0;
}
long long int fac(int n){
    long long int sum=1,i;
    if (n==0){
        sum=1;
    }
    else{
        for (i=1;i<=n;i++)  sum*=i;
    }
    return sum;
}
