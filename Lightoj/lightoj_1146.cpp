#include<bits/stdc++.h>
using namespace std;

const double eps = 1e-9;

int cmp(double x, double y = 0, double tol = eps) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

int ax,ay,bx,by,cx,cy,dx,dy;
double dx1, dy1, dx2, dy2;

void input(){
    scanf("%d %d %d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
    dx1 = bx - ax; dy1 = by - ay; dx2 = dx - cx; dy2 = dy - cy;
}

double distance(double x){
    double x1 = ax + dx1 * x;
    double y1 = ay + dy1 * x;
    double x2 = cx + dx2 * x;
    double y2 = cy + dy2 * x;

    double dx = x2 - x1;
    double dy = y2 - y1;

    return sqrt(dx*dx + dy*dy);
}

double ternaySearch(){

    double lo = 0.0;
    double hi = 1.0;

    while(cmp(hi,lo) == 1){
        double l1 = (lo*2.0+hi)/3.0;
        double l2 = (lo+2.0*hi)/3.0;
        if(cmp(distance(l1),distance(l2)) == -1) hi = l2;
        else lo = l1;
    }
    return distance(lo);
}


int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        input();
        printf("Case %d: %.10lf\n",cs++,ternaySearch());
    }
    return 0;
}
