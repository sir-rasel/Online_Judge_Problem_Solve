#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    char c;
    cin>>n>>m>>c;
    string grid[n];
    for(int i=0; i<n; i++) cin>>grid[i];
    int res=0;
    map<char,int>detect;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==c){
                if(i!=0 && grid[i-1][j]!=c && grid[i-1][j]!='.'){
                    if(detect[grid[i-1][j]]==0) res++;
                    detect[grid[i-1][j]]++;
                }
                if(i!=n-1 && grid[i+1][j]!=c && grid[i+1][j]!='.'){
                    if(detect[grid[i+1][j]]==0) res++;
                    detect[grid[i+1][j]]++;
                }
                if(j!=0 && grid[i][j-1]!=c && grid[i][j-1]!='.'){
                    if(detect[grid[i][j-1]]==0) res++;
                    detect[grid[i][j-1]]++;
                }
                if(j!=m-1 && grid[i][j+1]!=c && grid[i][j+1]!='.'){
                    if(detect[grid[i][j+1]]==0) res++;
                    detect[grid[i][j+1]]++;
                }
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
