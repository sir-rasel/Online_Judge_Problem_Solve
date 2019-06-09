#include <bits/stdc++.h>
using namespace std;

int up[2000][2000];
int dn[2000][2000];
int ri[2000][2000];
int le[2000][2000];
string s[2000];
int h,w;

int main(){
    cin>>h>>w;
    for (int i = 0; i < h; i++) cin>>s[i];
    //////////////up
    for(int j = 0; j < w; j++){
        if(s[0][j]=='.') up[0][j]=1;
        else up[0][j]=0;
    }
    for (int i = 1; i < h; i++){
        for (int j = 0; j < w; j++){
            if(s[i][j]=='.') up[i][j]=up[i-1][j]+1;
            else up[i][j]=0;
        }
    }
    ////////////le
    for(int j = 0; j < h; j++){
        if(s[j][0]=='.') le[j][0]=1;
        else le[j][0]=0;
    }
    for (int i = 1; i < w; i++){
        for (int j = 0; j < h; j++){
            if(s[j][i]=='.') le[j][i]=le[j][i-1]+1;
            else le[j][i]=0;
        }
    }
    ////////////dn
    for(int j = w-1; j>=0; j--){
        if(s[h-1][j]=='.') dn[h-1][j]=1;
        else dn[h-1][j]=0;
    }
    for (int i = h-2; i>=0; i--){
        for (int j = 0; j < w; j++){
            if(s[i][j]=='.') dn[i][j]=dn[i+1][j]+1;
            else dn[i][j]=0;
        }
    }
    ////////////ri
    for(int j = h-1; j >=0 ; j--){
        if(s[j][w-1]=='.') ri[j][w-1]=1;
        else ri[j][w-1]=0;

    }
    for (int i = w-2; i >= 0; i--){
        for (int j = 0; j <h ; j++){
            if(s[j][i]=='.') ri[j][i]=ri[j][i+1]+1;
            else ri[j][i]=0;
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if(ans<up[i][j]+dn[i][j]+ri[i][j]+le[i][j]-3)
                ans = up[i][j]+dn[i][j]+ri[i][j]+le[i][j]-3;
    printf("%d\n",ans);
    return 0;
}
