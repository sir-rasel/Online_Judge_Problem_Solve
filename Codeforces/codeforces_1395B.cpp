#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int main() {
    int n,m,r,c;
    scanf("%d %d %d %d",&n,&m,&r,&c);

    bool board[n][m];
    memset(board,false,sizeof board);

    printf("%d %d\n",r,c);
    board[r-1][c-1] = true;
    r = 1;

    printf("%d %d\n",r,c);
    board[r-1][c-1] = true;
    c = 1;

    printf("%d %d\n",r,c);
    board[r-1][c-1] = true;
    c = 1;

    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++){
                if(board[i-1][j-1] == false)
                    printf("%d %d\n",i,j);
                board[i-1][j-1] = true;
            }
        }
        else{
            for(int j=m;j>=1;j--){
                if(board[i-1][j-1] == false)
                    printf("%d %d\n",i,j);
                board[i-1][j-1] = true;
            }
        }
    }
    return 0;
}
