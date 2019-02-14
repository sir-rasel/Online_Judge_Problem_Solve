#include <stdio.h>
#include <stdlib.h>

int comp(const int *a,const int *b){
    return *a-*b;
}

int arr[20000001];

int main(){
    int test,i;
    while(scanf("%d",&test) && test!=0){
        for(i=0;i<test;i++)
            scanf("%d",&arr[i]);
        qsort(arr,test,sizeof(int),comp);
        for(i=0;i<test;i++){
             printf("%d",arr[i]);
             if(i==test-1) printf("\n");
             else printf(" ");
        }

    }
    return 0;
}
