#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

string s[10];
bool col[10],diag1[20],diag2[20];
int ans;

void eightQueen(int y){
    if (y == 8){
        ans++;
        return;
    }
    for (int x = 0; x < 8; x++){
        if (col[x] || diag1[x+y] || diag2[x-y+8-1] || s[y][x]=='*') continue;
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 1;
        eightQueen(y+1);
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 0;
    }
}

int main () {
    for(int i=0;i<8;i++) cin>>s[i];
    eightQueen(0);
    printf("%d\n",ans);
    return 0;
}
