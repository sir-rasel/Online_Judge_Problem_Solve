#include <bits/stdc++.h>
using namespace std;

int ai[1010],n;
double l;

bool check(double radius){
    bool res=true;
    if((0+radius)<ai[1]) res=false;
    for(int i=1;i<n and res;i++) if( (ai[i]+(2*radius))<ai[i+1] ) res=false;
    if((l-radius)>ai[n]) res=false;
    return res;
}

double binarySearch(double l){
    double low=0,high=l,ans;
    for(int i=0;i<10000;i++){
        double mid = (low+high)/2.0;
        if(check(mid)) high=mid,ans=mid;
        else low=mid;
    }
    return ans;
}


int main(){
    cin>>n>>l;
    for(int i=1;i<=n;i++) cin>>ai[i];
    sort(ai,ai+(n+1));
    double radius = binarySearch(l);
    printf("%f\n",radius);
    return 0;
}
