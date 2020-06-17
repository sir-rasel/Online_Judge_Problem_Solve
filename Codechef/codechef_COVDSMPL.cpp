#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,p;
        scanf("%d %d",&n,&p);

        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j] = 0;

        for (int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%d %d %d %d %d\n",1,i,j,i,j);
                fflush(stdout);

                int aij;
                scanf("%d",&aij);

                if(aij>0) a[i-1][j-1] = aij;
            }
        }

        printf("2\n");
        fflush(stdout);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j+1==n) {
                    printf("%d",a[i][j]);
                    fflush(stdout);
                }
                else {
                    printf("%d ",a[i][j]);
                    fflush(stdout);
                }
            }
            printf("\n");
            fflush(stdout);
        }

        int x;
        scanf("%d",&x);
        fflush(stdout);
    }
    return 0;
}
