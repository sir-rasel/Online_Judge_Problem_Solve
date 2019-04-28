#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    double x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        double sm=0.0;
        for(int j=1;j<=n;j++){
            scanf("%lf",&x);
            sm+=x;
        }
        printf("Case %d: %.3lf\n",i,sm/n);
    }
    return 0;
}
