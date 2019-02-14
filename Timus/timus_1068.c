#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    if(n<1){
        while(n<=1){
            sum+=n;
            n++;
        }
    }
    else{
        while(n>=1){
            sum+=n;
            n--;
        }
    }
    printf("%d\n",sum);
    return 0;
}
