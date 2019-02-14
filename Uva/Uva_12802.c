#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int prime(long long int n);

int main(){
    long long int a,i,flag,n;
    char c[1000000];
    while(1){
        flag=0;
        scanf("%s",c);
        n=strlen(c);
        a=atoll(c);
        printf("%lld\n",a<<1);
        for(i=0,--n;i<n;n--,i++){
            if(c[i]!=c[n]) {
                flag++;
                break;
            }
        }
        if(flag==0 && prime(a)==1) break;
    }
    return 0;
}

int prime(long long int n){
    int a=sqrt(n),i;
    for (i=2;i<=a;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
