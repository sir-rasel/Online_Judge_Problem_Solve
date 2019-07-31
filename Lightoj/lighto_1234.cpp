#include<bits/stdc++.h>
using namespace std;

const int maxx = 1e6+5;
const double eulerConstant=0.5772156649014532;
double harmonicNumber[maxx];

void preCalculate(){
    harmonicNumber[1]=1;
    for(int i=2;i<maxx;i++) harmonicNumber[i]=harmonicNumber[i-1]+(1.0/i);
}


int main(){
    preCalculate();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(n<maxx) printf("Case %d: %.8lf\n",cs++,harmonicNumber[n]);
        else printf("Case %d: %.8lf\n",cs++,(eulerConstant+log((double)n)+0.5/(double)n));
    }
    return 0;
}
