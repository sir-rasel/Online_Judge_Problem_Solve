#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        double r;
        scanf("%lf",&r);
        printf("Case %d: %.2lf\n",cs++,(8*r*r)-(2*3.1416*r*r));
    }
    return 0;
}
