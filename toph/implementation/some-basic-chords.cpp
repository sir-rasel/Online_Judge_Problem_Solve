#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=1;i<=t; i++){
        scanf("%d",&n);
        char a[n+1][7];
        for(int j=1; j<=n; j++) scanf("%s",a[j]);
        printf("Case %d: ",i);
        if(n==5) (a[1][0]=='x' ? printf("A-major\n") : printf("E-minor\n"));
        else if(n==8)
            if(a[1][0]=='x') (a[1][1]=='x' ? printf("D-major\n") : printf("A-minor\n"));
        else (a[7][0]=='1' ? printf("E-major\n") : printf("G-major\n"));
        else if(n==11)
            if(a[1][0]=='x' && a[1][1]=='x') (a[10][4]=='1' ? printf("B-minor\n"): printf("D-minor\n"));
        else (a[10][2]=='1' ? printf("C-major\n") : printf("F-major\n"));
    }
    return 0;
}
