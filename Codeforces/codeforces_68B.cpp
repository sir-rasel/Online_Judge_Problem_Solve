#include<bits/stdc++.h>
using namespace std;

const int MAXN = 10005;

int n,k;
double sum;
int a[MAXN];

bool check(double val){
    double lo = 0, up = 0;
    for(int i=0;i<n;i++)
        if (a[i] < val) lo += val - a[i];
        else up += a[i] - val;
    return up - (up * k) / 100.0 >= lo;
}

int main(){
    scanf( "%d %d", &n, &k );
    for(int i=0;i<n;i++){
        scanf("%d",&a[i] );
        sum += a[i];
    }
    double lo = 0, hi = sum/n*1.0;
    for(int i=0;i<100;i++){
        double mid = (lo + hi) / 2.0;
        if (check(mid)) lo = mid;
        else hi = mid;
    }
    printf("%.9f\n",lo);
    return 0;
}
