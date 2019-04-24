#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int p,k,d;
        scanf("%d %d %d",&p,&k,&d);
        int temp = p+k;
        int ans = p+d;
        while(ans<=temp) ans+=d;
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
