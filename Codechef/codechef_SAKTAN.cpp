#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m,q;
        scanf("%d %d %d",&n,&m,&q);
        vector<int>row(n+5);
        vector<int>col(m+5);
        for(int i=1;i<=n;i++) row[i]=0;
        for(int i=1;i<=m;i++) col[i]=0;
        while(q--){
            int r,c;
            scanf("%d %d",&r,&c);
            row[r]++;
            col[c]++;
            row[r]%=2;
            col[c]%=2;
        }
        int rowOdd=0,rowEven=0,colOdd=0,colEven=0;
        for(int i=1;i<=n;i++){
            if(row[i]==1) rowOdd++;
            else rowEven++;
        }
        for(int i=1;i<=m;i++){
            if(col[i]==1) colOdd++;
            else colEven++;
        }
        ll res = ((ll)((ll)colEven*rowOdd)+(ll)((ll)rowEven*colOdd));
        printf("%lld\n",res);
    }
    return 0;
}
