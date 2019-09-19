#include <bits/stdc++.h>
using namespace std;

const int MAX = 55, INF = 0x7f7f7f7f;
int d[MAX][MAX][MAX];
char grid[MAX][MAX][2];
int n, a, b, c;

int bfs(){
    queue< int > Q;
    Q.push(a), Q.push(b), Q.push(c);
    memset(d, 0x7f, sizeof d);
    d[a][b][c] = 0;
    while(!Q.empty()){
        a = Q.front();
        Q.pop();
        b = Q.front();
        Q.pop();
        c = Q.front();
        Q.pop();
        for(int i=1; i<=n; i++){
            if(grid[a][i][0]==grid[b][c][0] && d[i][b][c] > d[a][b][c] + 1){
                Q.push(i), Q.push(b), Q.push(c);
                d[i][b][c] = d[a][b][c] + 1;
            }
            if(grid[b][i][0]==grid[c][a][0] && d[a][i][c] > d[a][b][c] + 1){
                Q.push(a), Q.push(i), Q.push(c);
                d[a][i][c] = d[a][b][c] + 1;
            }
            if(grid[c][i][0]==grid[a][b][0] && d[a][b][i] > d[a][b][c] + 1){
                Q.push(a), Q.push(b), Q.push(i);
                d[a][b][i] = d[a][b][c] + 1;
            }
        }
    }
    int minn = INF;
    for(int i=1; i<=n; i++) minn = min(minn, d[i][i][i]);
    return minn;
}

int main() {
	while(scanf("%d", &n)==1 && n) {
		scanf("%d %d %d", &a, &b, &c);
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				scanf("%s", grid[i][j]);

		int res = bfs();
		if(res==INF) printf("impossible\n");
		else printf("%d\n",res);
	}
	return 0;
}
