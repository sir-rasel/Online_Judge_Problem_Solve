#include<bits/stdc++.h>
#define eps 1e-4
#define PI acos(-1.0)
using namespace std;

double gcd(double x, double y){
    while (fabs(x) > eps && fabs(y) > eps){
        if (x > y)
                x -= floor(x / y) * y;
        else
                y -= floor(y / x) * x;
    }
    return x + y;
}

double area(double a,double b,double c){
    double s=((double)a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf",&x3,&y3);
    double a,b,c;
    a=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    b=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    c=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double S;
    S=area(a,b,c);
    double R=((double)a*b*c)/(4*S);
    double A,B,C;
    A=acos((b*b+c*c-a*a)/(2*b*c));
    B=acos((a*a+c*c-b*b)/(2*a*c));
    C=acos((a*a+b*b-c*c)/(2*a*b));
    double g=gcd(A,gcd(B,C));
    double n=(PI)/(g);
    double ans=((double)R*R*n*sin((2*PI)/n))/2;
    printf("%.6lf\n",ans);
    return 0;
}
