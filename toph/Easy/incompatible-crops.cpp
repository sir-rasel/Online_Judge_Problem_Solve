#include <bits/stdc++.h>
using namespace std;

bool isValid(int n,int m,char a[][30],int i,int j){
    if(i<0) return true;
    if(i==n) return true;
    if(j<0) return true;
    if(j==m) return true;
    if(a[i][j]=='.') return true;
    else return false;
}

int check(int n,int m,char a[][30],int i,int j){
    if(isValid(n,m,a,i+1,j) and isValid(n,m,a,i-1,j) and isValid(n,m,a,i,j-1) and isValid(n,m,a,i,j+1)) return 1;
    return 0;
}

int main(){
    char field[30][30];
    int n,m;
    scanf("%d %d",&n,&m);
    getchar();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            scanf("%c",&field[i][j]);
        getchar();
    }
    int counter=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(field[i][j]=='.')
                counter+=check(n,m,field,i,j);
    printf("%d\n",counter);
    return 0;
}
