#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

struct point{
    double x,y;
};

double length(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(){
    double n,r;
    scanf("%lf %lf",&n,&r);
    point arr[105];
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&arr[i].x,&arr[i].y);
    }
    double sum = 2*pi*r;
    for(int i=0;i<n-1;i++){
        sum+=length(arr[i],arr[i+1]);
    }
    sum+=length(arr[0],arr[(int)n-1]);
    printf("%.2f\n",sum);
    return 0;
}
