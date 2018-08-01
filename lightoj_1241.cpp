#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++) {
        int n;
        scanf("%d",&n);
        int a[n+5];
        for(int i=1; i<=n; i++) {
            scanf("%d",&a[i]);
        }
        int l=0;
        int p=2;
        for(int i=1;i<=n; i++) {
            if(a[i]>p){
                l+=ceil((a[i]-p)/5.0);
                p=a[i];
            }
        }
        printf("Case %d: %d\n",t,l);
    }

    return 0;
}


