#include<bits/stdc++.h>
#define mx 20004
using namespace std;

struct Marks{
    double got;
    double total;
}mark[mx];

double Mid;

bool comp(Marks a, Marks b){
    return (a.got - Mid*a.total)  > (b.got - Mid*b.total);
}

bool check(double mid, int n, int use){
    Mid = mid/100.0;
    sort(mark+1, mark+1+n, comp);
    double Got = 0, Total = 0;
    for(int i=1; i<=use; i++){
        Got+=mark[i].got;
        Total+=mark[i].total;
    }
    double avg = (Got/Total)*100;
    return avg >= mid;
}

double binarySearch(double n,double use){
    double lo = 0, hi = 100, mid,ans = 0;
    for(int i=1; i<=30; i++){
        mid = (lo+hi)/2.0;
        if(check(mid, n, use)){
            lo = mid;
            ans = max(ans, mid);
        }
        else hi = mid;
    }
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,d;
        scanf("%d%d",&n,&d);
        int use = n-d;
        for(int i=1; i<=n; i++)
            scanf("%lf%lf",&mark[i].got, &mark[i].total);
        printf("Case %d: %.10lf\n", cs++,binarySearch(n,use));
    }
}
