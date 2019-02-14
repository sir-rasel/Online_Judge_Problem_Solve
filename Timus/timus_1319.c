#include<stdio.h>
int main(){
    int i,j,k,l,n,a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(l=n-i+1,k=j=0;j<n;j++){
            if(i<=j){
                a[i][j]=((n-k-1)*(n-k)/2)+1+i;k++;
            }else{
                a[i][j]=a[i-1][j]+l;l++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
