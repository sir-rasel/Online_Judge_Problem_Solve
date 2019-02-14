#include <stdio.h>
#include <stdlib.h>
int comp(void *a,void *b){
    return (*(int*)a- *(int*)b);
}
int main(){
    int a[4001],b[4001],c=0,i,j,k,n,m,count=0;
    scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        j = (int*)bsearch(&k,a,m,sizeof(int),comp);
        if(j!=NULL) {
            b[c]=k;
            c++;
        }
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        j = (int*)bsearch(&k,b,c,sizeof(int),comp);
        if(j!=NULL) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
