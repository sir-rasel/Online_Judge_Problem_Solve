#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        char chessPiece;
        int n,m;
        cin>>chessPiece>>n>>m;
        if(chessPiece=='r' or chessPiece=='Q')
            printf("%d\n",min(n,m));
        else if(chessPiece=='k')
            printf("%d\n",(int)(ceil((n*m)/2.0)));
        else printf("%d\n",(int)(ceil(n/2.0)*ceil(m/2.0)) );
    }
    return 0;
}
