#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,roll=6;
    scanf("%d %d",&a,&b);
    int m = max(a,b);
    int res = roll-m+1;
    if(res%2==1) {
        if(roll%res==0){
            roll/=res;
            res/=res;
        }
    }
    else{
        if(roll%res==0){
            roll/=res;
            res/=res;
        }
        else{
            roll/=2;
            res/=2;
        }
    }
    printf("%d/%d\n",res,roll);
    return 0;
}
