#include <stdio.h>
int main(){
    int c,i,j,n,arr[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0;i<2*n-1;++i){
        for(j = 0;j<=i && j<n;++j){
            c = i-j;
            if(c>=0 && c<n) printf("%d ",arr[c][j]);
        }
    }
    printf("\n");
    return 0;
}
