#include <stdio.h>
int main(){
    int i,n,count=0,pos=0,neg=0;
    for(i=0;i<5;i++){
        scanf("%d",&n);
        if(n%2==0) count++;
        if(n>0) pos++;
        else if(n<0) neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,5-count,pos,neg);
    return 0;
}
