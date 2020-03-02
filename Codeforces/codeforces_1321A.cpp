#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int n;
    scanf("%d",&n);
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);

    int ro=0,bi=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) ro++;
        else if(a[i]<b[i]) bi++;
    }

    if(ro==0) printf("-1\n");
    else if(ro>bi) printf("1\n");
    else {
        int ans = bi/ro+1;
        printf("%d\n",ans);
    }
    return 0;
}
