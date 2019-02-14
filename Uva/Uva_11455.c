#include <stdio.h>
#include <stdlib.h>

int com(const int *a,const int *b){
    return (*a-*b);
}

int main(){
    int a[4],test,i;
    scanf("%d",&test);
    while(test--){
        for(i=0;i<4;i++) scanf("%d",&a[i]);
        qsort(a,4,sizeof(int),com);
        if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3])
            printf("square\n");

        else if(a[0]==a[1] && a[2]==a[3])
            printf("rectangle\n");

        else if(a[0]+a[1]+a[2]>a[3])
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
