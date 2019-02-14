#include<bits/stdc++.h>
#define MAX 1005
#define pii pair<int,int>
using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
bool cell[MAX][MAX],vis[MAX][MAX];
int d[MAX][MAX];
int row,col,sourceX,sourceY,destinationX,destinationY;

void bfs(){
	memset(vis,false,sizeof vis);
	vis[sourceX][sourceY]=1;
	queue<pii>q;
	q.push(pii(sourceX,sourceY));
	while(!q.empty()){
		pii top=q.front(); q.pop();
		for(int k=0;k<4;k++){
			int tx=top.first+fx[k];
			int ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=false and vis[tx][ty]==0){
				vis[tx][ty]=1;
				d[tx][ty]=d[top.first][top.second]+1;
				q.push(pii(tx,ty));
			}
			if (tx==destinationX and ty==destinationY) return;
		}
	}
}

int main(){
    while(scanf("%d %d",&row,&col)==2 and (row!=0 and col!=0)){
        memset(cell,true,sizeof(cell));
        memset(d,0,sizeof(d));

        int bombRow;
        scanf("%d",&bombRow);
        for(int i=0;i<bombRow;i++){
            int rowLocation,numberOfBomb;
            scanf("%d %d",&rowLocation,&numberOfBomb);
            for(int j=0;j<numberOfBomb;j++){
                int columnNumber;
                scanf("%d",&columnNumber);
                cell[rowLocation][columnNumber]=false;
            }
        }
        scanf("%d %d",&sourceX,&sourceY);
        scanf("%d %d",&destinationX,&destinationY);

        bfs();
        printf("%d\n",d[destinationX][destinationY]);
    }
    return 0;
}
