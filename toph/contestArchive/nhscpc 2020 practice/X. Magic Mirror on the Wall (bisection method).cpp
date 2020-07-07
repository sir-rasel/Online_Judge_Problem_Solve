#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e7;
const double eps = 1e-4;

double x, y, x2, y2;

double distance(pair<double,double> a, pair<double,double> b){
    return sqrt( (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second) );
}

pair<double,double> binarySearch(double l,double h){
    int repeatation = 100;
    while(repeatation--){
        double mid = (h + l) / 2.0;
        double distance1  = distance({mid, 0}, {x, y});
        double distance2  = distance({mid, 0}, {x2, y2});
        double base1  = distance1 / y;
        double base2  = distance2 / y2;

        if (base1 == base2) break;
        else if (base1 > base2) l = mid;
        else h = mid;
    }
    return {(l+h)/2, 0.0};
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        cin>>x>>y>>x2>>y2;

        if(x<=x2){
            swap(x,x2);
            swap(y,y2);
        }

        double high = max(x,x2);
        double low = min(x,x2);
        pair<double,double> point = binarySearch(low,high);
        printf("%.20f %.20f\n",point.first,point.second);
    }
    return 0;
}
