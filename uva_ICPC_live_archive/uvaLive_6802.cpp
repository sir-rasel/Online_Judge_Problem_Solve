#include<bits/stdc++.h>
using namespace std;

int grid[65][65];

int countAns(){
    int ans=0;
    for(int i=0;i<64;i++)
        for(int j=0;j<64;j++)
            if(grid[i][j]>1) ans++;

    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        memset(grid,0,sizeof grid);
        int x,y;
        scanf("%d %d",&x,&y);
        grid[x][y]++;
        string s;
        cin>>s;
        int xflag=0,yflag=1;

        for(int i=0;i<s.size();i++){
            if(s[i]=='F'){
                x+=xflag;
                y+=yflag;
                grid[x][y]++;
            }
            else if(s[i]=='R'){
                if(xflag==0 and yflag==1) xflag=1,yflag=0;
                else if(xflag==1 and yflag==0) xflag=0,yflag=-1;
                else if(xflag==0 and yflag==-1) xflag=-1,yflag=0;
                else if(xflag==-1 and yflag==0) xflag=0,yflag=1;
            }
            else{
                if(xflag==1 and yflag==0) xflag=0,yflag=1;
                else if(xflag==0 and yflag==1) xflag=-1,yflag=0;
                else if(xflag==-1 and yflag==0) xflag=0,yflag=-1;
                else if(xflag==0 and yflag==-1) xflag=1,yflag=0;
            }
        }
        printf("Case #%d: %d %d %d\n",cs++,x,y,countAns());
    }
    return 0;
}
