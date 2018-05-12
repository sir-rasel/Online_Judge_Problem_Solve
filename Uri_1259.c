#include <stdio.h>
#include <stdlib.h>

int comp1(const int *a,const int *b){
    return *a-*b;
}

int comp2(const int *a,const int *b){
    return *b-*a;
}

int main(){
    int a[100000],b[100000],i=0,j=0,n,test,k;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        if(n%2==0) {
            a[i]=n;
            i++;
        }
        else{
            b[j]=n;
            j++;
        }
    }
    qsort(a,i,sizeof(int),comp1);
    qsort(b,j,sizeof(int),comp2);
    for(k=0;k<i;k++) printf("%d\n",a[k]);
    for(k=0;k<j;k++) printf("%d\n",b[k]);
    return 0;
}
