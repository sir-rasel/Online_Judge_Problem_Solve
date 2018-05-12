#include <stdio.h>
int main(){
    int N,i,j,c,r;
    scanf("%d",&N);
    int M[100][100],x = 0;
    for(i = 0;i<2*N-1;++i){
        for(r = 0;r<=i && r<N;++r){
            c = i-r;
            if(c>=0 && c<N) M[r][c] = ++x;
        }
    }
    for(i = 0;i<N;++i){
        for(j = N-1;j>=0;--j) printf("%d ",M[i][j]);
        putchar('\n');
    }
    return 0;
}
