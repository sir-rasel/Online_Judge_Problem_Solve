#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

string s;
bool visited[8][8];
int ans;

char mov[] = {'D','U','L','R'};

int fx[]={1,-1,0,0};
int fy[]={0,0,-1,1};

void solve(int pos, int x, int y, char prev = 'R'){
    if (x == 6 and y == 0){
        if (pos == 48)
            ++ans;
        return;
    }

    if (prev == 'U' and (x == 0 or visited[x - 1][y]) and y > 0 and y < 6 and !visited[x][y - 1] and !visited[x][y + 1])
        return;
    if (prev == 'D' and (x == 6 or visited[x + 1][y]) and y > 0 and y < 6 and !visited[x][y - 1] and !visited[x][y + 1])
        return;
    if (prev == 'L' and (y == 0 or visited[x][y - 1]) and x > 0 and x < 6 and !visited[x - 1][y] and !visited[x + 1][y])
        return;
    if (prev == 'R' and (y == 6 or visited[x][y + 1]) and x > 0 and x < 6 and !visited[x - 1][y] and !visited[x + 1][y])
        return;

    if (s[pos] == '?'){
        for(int i=0;i<4;i++){
            int xx = x+fx[i];
            int yy = y+fy[i];

            if((xx>=0 and xx<=6) and (yy>=0 and yy<=6) and !visited[xx][yy]){
                visited[xx][yy] = 1;
                solve(pos + 1, xx, yy, mov[i]);
                visited[xx][yy] = 0;
            }
        }
    }
    else{
        if (s[pos] == 'U') --x;
        if (s[pos] == 'D') ++x;
        if (s[pos] == 'L') --y;
        if (s[pos] == 'R') ++y;

        if (x < 0 or y < 0 or x >= 7 or y >= 7 or visited[x][y])
            return;

        visited[x][y] = 1;
        solve(pos + 1, x, y,s[pos]);
        visited[x][y] = 0;
    }
}

int main () {
    cin>>s;
    visited[0][0]=1;
    solve(0,0,0);
    printf("%d\n",ans);
    return 0;
}
