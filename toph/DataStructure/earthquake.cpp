#include <bits/stdc++.h>
using namespace std ;

int a[65][65], lenOfSeq[65][65] ;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=1 ; i<=n ; i++)
            for(int j=1 ; j<=m ; j++) scanf("%d",&a[i][j]);
        for(int i=1 ; i<=n ; i++)
            for(int j=1 ; j<=m ; j++)
            {
                if( j==1 || a[i][j]!=a[i][j-1] ) lenOfSeq[i][j] = 1 ;
                else lenOfSeq[i][j] = lenOfSeq[i][j-1] + 1 ;
            }

        long long int ans = 0 ;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                int mn = lenOfSeq[i][j] ;
                int number = a[i][j] ;
                for(int k=i ; k>=1 ; k--){
                    if(a[k][j] != number) break ;
                    mn = min(mn,lenOfSeq[k][j]) ;
                    ans += mn ;
                }
            }
        }
        printf("Case %d: %lld\n",cs++,ans) ;
    }
    return 0 ;
}
