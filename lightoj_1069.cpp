#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int me,lift;
        scanf("%d %d",&me,&lift);
        int ans;
        if(lift>=me) ans = (lift*4)+19;
        else ans = ((me-lift+me)*4)+19;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
