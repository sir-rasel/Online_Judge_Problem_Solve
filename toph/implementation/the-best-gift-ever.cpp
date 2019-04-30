#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        ull asum[n+5]={0},bsum[m+5]={0};
        for(int i=1;i<=n;i++){
            int num;
            scanf("%d",&num);
            asum[i]=asum[i-1]+num;
        }
        for(int i=1;i<=m;i++){
            int num;
            scanf("%d",&num);
            bsum[i]=bsum[i-1]+num;
        }
        printf("Case %d:\n",cs++);
        int q;
        scanf("%d",&q);
        while(q--){
            int i,j,k,l;
            scanf("%d %d %d %d",&i,&j,&k,&l);
            ull ans = (asum[j]-asum[i-1])*(bsum[l]-bsum[k-1]);
            printf("%llu\n",ans);
        }
    }
    return 0;
}
