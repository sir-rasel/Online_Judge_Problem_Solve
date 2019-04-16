#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        double l;
        scanf("%lf",&l);
        double ans = 3.1416*l*l;
        printf("%.3f\n",ans);
    }
    return 0;
}
