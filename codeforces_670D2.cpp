#include<bits/stdc++.h>
using namespace std;

int n;
unsigned long long int k,a[100002],b[100002];

bool check(long long int x){
    long long int sum=0;
    for(int i=0;i<n;i++){
        if(x*a[i]>b[i]) sum+=((x*a[i])-b[i]);
    }
    if(sum<=k) return true;
    else return false;
}

unsigned long long int bs(){
    unsigned long long int low=0,mid,high=20000000000;
    while(low<=high){
        mid = (low+high)/2;
        if(check(mid)) low = mid+1;
        else high = mid-1;
    }
    return high;
}

int main(){
    scanf("%d %llu",&n,&k);
    for(int i=0;i<n;i++) scanf("%llu",&a[i]);
    for(int i=0;i<n;i++) scanf("%llu",&b[i]);
    printf("%llu\n",bs());
    return 0;
}
