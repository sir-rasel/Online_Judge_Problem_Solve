#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    double ans = 0.0;
    double secondPart = 0.0;
    for(int i=1; i<=m; ++i) {
        secondPart = pow((i-1.0)/m, n*1.0);
        ans += (pow(i*1.0/m, n*1.0)-secondPart)*i;
    }
    printf("%.10f\n",ans);
    return 0;
}
