#include <stdio.h>
int main(){
    int n,k,m;
    scanf("%d %d",&n,&k);
    if(n<k) {
        printf("2\n");
        return 0;
    }
    m=2*n%k;
    if(m==0){
        printf("%d\n",2*n/k);
    }
    else{
        printf("%d",(2*n/k)+1);
    }
    return 0;
}
