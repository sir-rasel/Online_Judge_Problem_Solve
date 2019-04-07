#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int k;
    scanf("%d",&k);
    double x = (100*sqrt(2.0));
    double c[m+1][n+1];
    bool t[m+2][n+2]={false};
    for(int i=0; i<k; i++){
        int X,Y;
        scanf("%d %d",&X,&Y);
        t[Y][X]=true;
    }
    c[0][0]=0;
    for(int j=0; j<=n; j++) c[0][j]=j*100;
    for(int i=1; i<=m; i++){
        c[1][0]=c[0][0]+100;
        for(int j=1; j<=n; j++){
            double a=1000000000;
            double b=1000000000;
            double d=1000000000;

            a=c[0][j]+100;
            if(j-1>=0) b=c[1][j-1]+100;
            if(i-1>=0 and j-1>=0 and t[i][j]){
                d=c[0][j-1]+x;
                c[1][j]=min(min(a,b),d);
            }
            else c[1][j]=min(a,b);

        }
        for(int j=0; j<=n; j++) c[0][j]=c[1][j];
    }
    cout<<round(c[0][n])<<endl;
    return 0;
}
