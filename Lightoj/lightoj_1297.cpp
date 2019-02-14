#include <bits/stdc++.h>
using namespace std;

int checkError(double x, double y, double tolarance = 1e-9) {
    if(x<=y+tolarance){
        if(x+tolarance<y) return -1;
        else return 0;
    }
    else return 1;
}

double area (double x, double w, double l) {
    return (l - 2.0 * x) * (w - 2 * x) * x;
}

double search_X(double l ,double w){
    double low=0,hi=min(l,w)*0.5;
    while(checkError(low,hi)==-1){
        double mid1 = (2.0 * low + hi) / 3.0;
        double mid2 = (2.0 * hi + low) / 3.0;

        if(checkError( area(mid1,w,l), area(mid2,w,l) )==-1) low=mid1;
        else hi = mid2;
    }
    return low;
}

int main() {
    int test;
    scanf("%d",&test);
    for (int cas = 1; cas <= test; cas++){
        double l,w;
        scanf("%lf %lf",&l,&w);
        double x = search_X(l,w);
        printf("Case %d: %lf\n",cas,area(x,w,l));
    }
    return 0;
}

//int main(){
//        int T,i;
//        double L,W,x;
//        scanf("%d",&T);
//        for(i =0; i<T; i++){
//            scanf("%lf%lf",&L,&W);
//            x = (W+L-sqrt(W*W+L*L-W*L))/6;
//            printf("Case %d: %lf\n",i+1,(W-2*x)*(L-2*x)*x);
//        }
//        return 0;
//}
