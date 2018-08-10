#include<cstdio>
using namespace std;

int main(){
    double h,u,d,f;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)){
        if(h==0) break;
        int day=1;
        double climb=0;
        double r = (u*f)/100.0;
        while(1){
            climb+=u;
            if(u>0) u-=r;
            if(climb>h) break;
            climb-=d;
            if(climb<0) break;
            day++;
        }
        if(climb<0) printf("failure on day %d\n",day);
        else printf("success on day %d\n",day);
    }
    return 0;
}
