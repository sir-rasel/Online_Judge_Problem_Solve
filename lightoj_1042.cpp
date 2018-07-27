#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int number;
        scanf("%d",&number);
        int small=(number&-number);
        int ripple=small+number;
        int ones = number^ripple;
        ones = (ones>>2)/small;
        int ans = ripple|ones;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
