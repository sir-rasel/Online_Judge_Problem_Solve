#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int testcase,i=1;
    while(cin>>testcase and testcase!=0){
        double u,v,t,s,a;
        if(testcase==1){
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=u*t+(0.5)*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(testcase==2){
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=u*t+(0.5)*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(testcase==3){
            cin>>u>>a>>s;
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(testcase==4){
            cin>>v>>a>>s;
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
