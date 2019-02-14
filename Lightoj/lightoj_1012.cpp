#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N=25;

char grid[N][N];
bool visit[N][N];
ll w,h,ans;

void dp(ll i,ll j){
    if(i==h or j==w or i<0 or j<0 or grid[i][j]=='#' or visit[i][j]) return;
    visit[i][j]=true;
    ans++;
    dp(i,j+1);
    dp(i,j-1);
    dp(i+1,j);
    dp(i-1,j);
}

int main(){
    ll test,cs=1;
    cin>>test;
    while(test--){
        cin>>w>>h;
        ll posI,posJ;
        for(ll i=0;i<h;i++){
            for(ll j=0;j<w;j++){
                cin>>grid[i][j];
                if(grid[i][j]=='@'){
                    posI=i;
                    posJ=j;
                }
            }
        }
        memset(visit,false,sizeof(visit));
        ans=0;
        dp(posI,posJ);
        cout<< "Case "<<cs++<< ": "<<ans<<endl;
    }
    return 0;
}
