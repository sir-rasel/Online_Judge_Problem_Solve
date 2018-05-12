#include <stdio.h>

int gcd(int a,int b);

int main(){
    int a,b,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
    return 0;
}

int gcd(int a,int b){
    if(a==0) return b;
    gcd(b%a,a);
}
