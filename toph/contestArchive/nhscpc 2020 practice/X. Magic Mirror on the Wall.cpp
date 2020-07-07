#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e7;
const double eps = 1e-4;

double x, y, x2, y2;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        cin>>x>>y>>x2>>y2;

        if(x>x2){
            swap(x,x2);
            swap(y,y2);
        }

        double m = (y2+y)/(-x+x2);
        double c1 = (y-(-m*x));
        double c2 = (y2-(m*x2));

        double xAxis = (c1+abs(c2))/(2.0*m), yAxis = 0;
        printf("%.20f %.20f\n",xAxis,yAxis);
    }
    return 0;
}
