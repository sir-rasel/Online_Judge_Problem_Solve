#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n+5];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        printf("Case %d:\n",i);
        while(q--){
            int fast,last;
            scanf("%d %d",&fast,&last);
            int *k = lower_bound(a,a+n,fast);
            int *l = upper_bound(a,a+n,last);
            printf("%d\n",l-k);
        }
    }
    return 0;
}
