#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        int s = (a+b+c)/2;
        int area = sqrt(s*(s-a)*(s-b)*(s-c));
        bool flag=false;;
        if(area==(0.5*a*b)) flag=true;
        else if(area==(0.5*b*c)) flag=true;
        else if(area==(0.5*c*a)) flag=true;
        if(flag) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
