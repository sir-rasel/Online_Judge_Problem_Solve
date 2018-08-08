#include <bits/stdc++.h>
using namespace std;

int result(int n){
    if(n%3==0 or n%3==1){
        return (n/3)*2;
    }
    else return (n/3)*2+1;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        int a,b;
        scanf("%d %d",&a,&b);
        int ans1 = result(b);
        int ans2 = result(a-1);
        int res = ans1-ans2;
        printf("Case %d: %d\n",cs,res);
    }
    return 0;
}
