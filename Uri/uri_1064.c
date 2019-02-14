#include <stdio.h>
int main(){
    int count=0,i;
    double average=0,n;
    for(i=0;i<6;i++){
        scanf("%lf",&n);
        if(n>0) {
            count++;
            average+=n;
        }
    }
    printf("%d valores positivos\n%.1lf\n",count,average/count);
    return 0;
}
