#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
const double EPS = 1e-9;
const ld pi = acos(-1.0);

int main(){
    int n;
    scanf("%d",&n);
    ld ang=0.0,tang=0.0;
    ld py=0,px=15.0;
    for(int i=0;i<n;i++){
        ld x,y;
        cin>>x>>y;
        ld a=x*x +y*y;
        ld b=px*px+py*py;
        ld c=(px-x)*(px-x)+(py-y)*(py-y);
        ld cs=(a+b-c)/(2*sqrt(a*b));

        if(abs(cs)<EPS) cs=0.;
        else if(cs-EPS<-1.0) cs=-1.;
        else if(cs+EPS>1.0) cs=1.;

        tang+=acos(cs);
        px=x;
        py=y;
    }
    cout<<setprecision(15)<<tang*180/pi<<endl;
    return 0;
}
