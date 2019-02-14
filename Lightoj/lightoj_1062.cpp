#include<bits/stdc++.h>
using namespace std;

const double eps = 0.00000001;
double x,y,c;

double calculateHeightOfCrossingPoint(double mid){
    double A = sqrt((x*x) - (mid*mid));
    double B = sqrt((y*y) - (mid*mid));
    return ((A*B)/(A+B));
}

double CalculateStreetUsingBinarySearch(){
    double low = 0,high=min(x,y);
    while(high-low>eps){
        double mid = (high+low)/2.0;
        if(calculateHeightOfCrossingPoint(mid)<=c)
            high=mid;
        else low = mid;
    }
    return low;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%lf %lf %lf",&x,&y,&c);
        double res = CalculateStreetUsingBinarySearch();
        printf("Case %d: %f\n",cs++,res);
    }
    return 0;
}

