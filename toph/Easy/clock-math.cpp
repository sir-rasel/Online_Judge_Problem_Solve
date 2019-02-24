#include<bits/stdc++.h>
using namespace std;

double clockMath(int h, int m){
    return (double)(360 - ((30 * h) - (5.5 * m)));
}

int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    double res1=clockMath(h,m);
    double res2=360-res1;
    printf("%lf\n",min(res1,res2));
    return 0;
}
