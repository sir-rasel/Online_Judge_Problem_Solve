#include <iostream>
using namespace std;

char oil[105][105];

void floadFill(int i,int j,int n,int m){
    if( (i<0 or i>=n) or (j<0 or j>=m) or oil[i][j]=='*' ) return;
    oil[i][j]='*';
    floadFill(i+1,j+1,n,m);
    floadFill(i+1,j-1,n,m);
    floadFill(i-1,j-1,n,m);
    floadFill(i-1,j+1,n,m);
    floadFill(i+1,j,n,m);
    floadFill(i,j-1,n,m);
    floadFill(i-1,j,n,m);
    floadFill(i,j+1,n,m);
}

int main(){
    int n,m;
    while(cin>>n>>m and (n!=0 and m!=0)){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>oil[i][j];
            }
        }
        int counter=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(oil[i][j]=='@'){
                    floadFill(i,j,n,m);
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
