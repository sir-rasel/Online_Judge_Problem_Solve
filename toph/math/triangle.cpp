#include<bits/stdc++.h>
using namespace std;

bool check(double a,double b,double c){
    if(a+b<c) return false;
    if(a+c<b) return false;
    if(b+c<a) return false;
    return true;
}
double area(double a,double b,double c){
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        if(check(a,b,c)) printf("%.2lf\n",area(a,b,c));
        else printf("Oh, No!\n");
    }
    return 0;
}
