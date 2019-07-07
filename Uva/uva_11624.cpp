#include<bits/stdc++.h>
#define MAX 1005
#define maxVal 100000000
#define pii pair<int,int>
using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
string s[MAX];
int d[MAX][MAX],J[MAX][MAX];
int row,col,sourceX,sourceY;
queue<pii>fire;

void fireTraverse(){
	while(!fire.empty()){
		pii top=fire.front();
		fire.pop();
		for(int k=0;k<4;k++){
			int tx=top.first+fx[k];
			int ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and s[tx][ty]!='#' and d[tx][ty]==maxVal){
				d[tx][ty]=d[top.first][top.second]+1;
				fire.push(pii(tx,ty));
			}
		}
	}
}

void joaTraverse(){
	queue<pii>q;
	q.push(pii(sourceX,sourceY));
	while(!q.empty()){
		pii top=q.front();
		q.pop();
		for(int k=0;k<4;k++){
			int tx=top.first+fx[k];
			int ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and s[tx][ty]!='#' and J[tx][ty]==maxVal){
				J[tx][ty]=J[top.first][top.second]+1;
				q.push(pii(tx,ty));
			}
		}
	}
}

void detectJ(){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            if(s[i][j]=='J'){
                sourceX=i;
                sourceY=j;
                J[i][j]=0;
            }
            else J[i][j]=maxVal;
        }
}

void detectFire(){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            if(s[i][j]=='F'){
                d[i][j]=0;
                fire.push({i,j});
            }
            else d[i][j]=maxVal;
        }
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&row,&col);
        getchar();
        for(int i=0;i<row;i++) getline(cin,s[i]);
        detectJ();
        detectFire();
        fireTraverse();
        joaTraverse();
        int res=maxVal;
        for(int i=0;i<row;i++){
            if(J[i][0]<d[i][0])
                res=min(res,J[i][0]);
            if(J[i][col-1]<d[i][col-1])
                res=min(res,J[i][col-1]);
        }
        for(int j=0;j<col;j++){
            if(J[0][j]<d[0][j])
                res=min(res,J[0][j]);
            if(J[row-1][j]<d[row-1][j])
                res=min(res,J[row-1][j]);
        }
        if(res!=maxVal) printf("%d\n",res+1);
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
