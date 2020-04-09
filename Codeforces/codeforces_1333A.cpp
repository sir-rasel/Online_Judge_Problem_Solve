#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        char grid[n][m];
        for(int i=0;i<n;i++){
            int k = (i%2),col=0;
            if(k) col = 1;
            for(int j=0;j<m;j++){
                if(col%2==0) grid[i][j]='B';
                else grid[i][j]='W';
                col++;
            }
        }

        if(n%2==0 and m%2==0) grid[n-1][m-2]='B';
        else if( (n*m)%2==0 ) grid[n-1][m-1]='B';

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j+1==m) printf("%c",grid[i][j]);
                else printf("%c ",grid[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
