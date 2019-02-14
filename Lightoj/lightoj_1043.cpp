#include<bits/stdc++.h>
using namespace std;

double checkAreaRatio(double ab,double ac,double bc,double ad){
    double ae,de,s1,s2,largeTriangleArea,smallTriangleArea,trapheziumArea,ratio;
    ae = (ad*ac)/ab;
    de = (ad*bc)/ab;

    s1 = (ab+ac+bc)/2.0;
    s2 = (ad+ae+de)/2.0;
    largeTriangleArea = sqrt(s1 * (s1-ab) * (s1-ac) * (s1-bc));
    smallTriangleArea = sqrt(s2 * (s2-ad) * (s2-ae) * (s2-de));
    trapheziumArea = largeTriangleArea - smallTriangleArea;

    ratio  = smallTriangleArea/trapheziumArea;
    return ratio;
}

double bisection(double ab,double ac,double bc,double ratio){
    double low=0.0,high=ab,ad;
    for(int i=0;i<100;i++){
        double mid=(low+high)/2.0;
        ad=mid;
        if(checkAreaRatio(ab,ac,bc,ad)>ratio) high=mid;
        else low=mid;
    }
    return ad;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        double ab,ac,bc,ratio;
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&ratio);
        printf("Case %d: %lf\n",cs++,bisection(ab,ac,bc,ratio));
    }
    return 0;
}
