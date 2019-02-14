#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cs=1;
    while(scanf("%d",&n) and n>0){
        int ans=0;
        while(n>1){
            n=ceil(n/2.0);
            ans++;
        }
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
