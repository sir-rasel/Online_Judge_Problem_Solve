#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MAX = 105;
const int INF = 1000005;

int h,w;
int memo[MAX][MAX];
bool s[MAX][MAX];

int dfs(int r, int c){
  if(r >= h || c >= w) return INF;
  if(memo[r][c] != -1) return memo[r][c];
  if(r == h-1 && c == w-1) return memo[r][c] = (!s[r][c]);
  int x = dfs(r, c+1) + (!s[r][c] && s[r][c] != s[r][c+1]),
      y = dfs(r+1, c) + (!s[r][c] && s[r][c] != s[r+1][c]);
  return memo[r][c] = min(x, y);
}

int main(){
    cin>>h>>w;
    memset(memo,-1,sizeof memo);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char cc;
            cin>>cc;
            s[i][j] = (cc == '.');
        }
    }
    cout << dfs(0,0) << endl;
}
