#include <stdio.h>
int main(){
    int b,sum;
    while(scanf("%d",&b)&& b!=0){
        sum=0;
        while(b>=3){
            sum+=b/3;
            b=(b/3)+(b%3);
        }
        if(b==2) sum++;
        printf("%d\n",sum);
    }
    return 0;
}
