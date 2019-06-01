#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int row,col,i,j;
        char s[105][105];
        int num[105][105]= {0};
        scanf("%d %d",&row,&col);
        for(i=0; i<row; i++) scanf("%s",s[i]);
        int y,cnt=0,x=3;
        for(i=0; i<row; i++){
            y=3;
            for(j=0; j<col; j++){
                num[x][y]=s[i][j]-48;
                y++;
            }
            x++;
        }
        for(int i=1; i<=x; i++)
            for(int j=1; j<=y; j++){
                if(num[i][j]==0 && num[i][j+1]==0 && num[i+1][j]==0 && num[i+1][j+1]==1) cnt++;
                if(num[i][j]==0 && num[i][j+1]==0 && num[i+1][j]==1 && num[i+1][j+1]==0) cnt++;
                if(num[i][j]==1 && num[i][j+1]==0 && num[i+1][j]==0 && num[i+1][j+1]==0) cnt++;
                if(num[i][j]==0 && num[i][j+1]==1 && num[i+1][j]==0 && num[i+1][j+1]==0) cnt++;
                if(num[i][j]==0 && num[i][j+1]==1 && num[i+1][j]==1 && num[i+1][j+1]==1) cnt++;
                if(num[i][j]==1 && num[i][j+1]==1 && num[i+1][j]==0 && num[i+1][j+1]==1) cnt++;
                if(num[i][j]==1 && num[i][j+1]==0 && num[i+1][j]==1 && num[i+1][j+1]==1) cnt++;
                if(num[i][j]==1 && num[i][j+1]==1 && num[i+1][j]==1 && num[i+1][j+1]==0) cnt++;
                if(num[i][j]==1 && num[i][j+1]==0 && num[i+1][j]==0 && num[i+1][j+1]==1) cnt++;
                if(num[i][j]==0 && num[i][j+1]==1 && num[i+1][j]==1 && num[i+1][j+1]==0) cnt++;
            }
        printf("Case %d: %d\n",cs++,cnt);
    }
    return 0;
}
