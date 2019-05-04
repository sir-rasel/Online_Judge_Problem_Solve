#include <bits/stdc++.h>
using namespace std;
int main(){
    double x=.5*sqrt(3.0/4.0),r;int n;
    int tc;cin>>tc;
    while(tc--){
        cin>>n>>r;
        double a=r/sqrt(0.25+pow((2*n-1)*cos(acos(-1.0)/6),2)  );
        cout<<setprecision(9)<<fixed<<6*a*a*x<<endl;
    }
    return 0;
}
