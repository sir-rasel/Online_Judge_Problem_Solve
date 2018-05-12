#include <stdio.h>
#include <stdlib.h>
int comp(const int *a, const int *b){
    return *a-*b;
}
int main(){
    int test,sum,i,r,dis[30001],temp;
    scanf("%d",&test);
    while(test--){
            sum=0;
        scanf("%d",&r);
        for(i=0;i<r;i++){
            scanf("%d",&dis[i]);
        }
        qsort(dis,r,sizeof(int),comp);
        temp=dis[r/2];
        for(i=0;i<r;i++){
            sum+=abs(temp-dis[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
