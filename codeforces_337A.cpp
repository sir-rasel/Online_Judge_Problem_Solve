#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int puzzles[m+2];
    for(int i=0;i<m;i++){
        cin>>puzzles[i];
    }
    sort(puzzles,puzzles+m);
    int minimum=INFINITY;
    for(int i=0;i<=m-n;i++){
        minimum=min(minimum,puzzles[i+n-1]-puzzles[i]);
    }
    cout<<minimum<<endl;
    return 0;
}
