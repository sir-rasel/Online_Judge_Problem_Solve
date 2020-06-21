#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string ar[105];

int dx [] = {0 , 0 , +1 , -1 , +1 , +1 , -1 , -1};
int dy [] = {+1 , -1 , 0 , 0 , +1 , -1 , +1 , -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n , m;
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> ar[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int cnt = 0;
            if(ar[i][j]=='*'){
                cout << ar[i][j];
                continue;
            }
            for(int k=0;k<8;k++){
                int tx = i+dx[k];
                int ty = j+dy[k];
                if(tx>=0 && tx<n && ty>=0 && ty<m)
                    if(ar[tx][ty]=='*') cnt++;
            }
            if(cnt==0) cout << ".";
            else cout << cnt;
        }
        cout << endl;
    }

    return 0;
}
