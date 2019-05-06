#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        long long int ans=0;
        for(int i=1;i<=n;i++){
            int h;
            scanf("%d",&h);
            ans = max(ans,(long long int) h*(n-i+1));
        }
        printf("Case %d: %lld\n",cs++,ans);
    }
    return 0;
}
