#include <bits/stdc++.h>
using namespace std;

string goal = "ALLIZZWELL";
bool visited[105][105];

int col, row;
vector<string> table;

int fx[]={1,0,-1,0,-1,-1,1,1};
int fy[]={0,1,0,-1,-1,1,-1,1};

bool check(int x,int y,int i){
    if(x<0 or x>=row or y<0 or y>=col or table[x][y]!=goal[i] or visited[x][y])
        return false;
    return true;
}

int dfs(int r, int c, int a){
    if ( a == 10 ) return true;
    visited[r][c] = 1;
    for(int i=0;i<8;i++){
        int rowS = r+fx[i], colS = c+fy[i];
        if(!check(rowS,colS,a)) continue;
        if (dfs(rowS, colS, a+1)){
            visited[r][c] = 0;
            return true;
        }
    }
    visited[r][c] = 0;
    return false;
}

int main () {
    int test;
    scanf("%d",&test);
    while (test--) {
        table.clear();
        scanf("%d %d",&row,&col);
        for (int i = 0; i < row; ++i) {
            string st;
            cin >> st;
            table.push_back(st);
        }
        bool res = false;
        for (int i = 0 ; i < row ; i++)
            for (int j = 0; j < col ; j++)
                if (table[i][j] == 'A' && dfs(i,j,1)){
                    res = true;
                    break;
                }

        if (res) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
