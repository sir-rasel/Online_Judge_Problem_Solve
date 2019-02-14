#include <stdio.h>

long long int result(long long int n);

int main(){
    long long int n,res;
    scanf("%lld",&n);
    res=result(n);
    printf("%lld\n",res);
    return 0;
}

long long int result(long long int n){
    if(n==0) return 10;
    if(n==1) return 1;
    long long int i,p=1,q=0;
    for(i=9;i>1;i--){
        while((n%i==0)){
            q+= p*i;
            p= p*10;
            n/=i;
        }
    }
    if(n==1) return q;
    else return -1;
}
