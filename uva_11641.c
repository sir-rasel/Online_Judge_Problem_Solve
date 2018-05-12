#include <stdio.h>
#include <math.h>
int main(){
    int a,b,count,i,temp;
    while(scanf("%d %d",&a,&b) && (a!=0 || b!=0)){
            count=0;
        while(a<=b){
            temp=sqrt(a);
            if(temp*temp==a) count++;
            a=(temp+1)*(temp+1);
        }
        printf("%d\n",count);
    }
    return 0;
}
