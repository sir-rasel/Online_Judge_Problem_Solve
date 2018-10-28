#include <bits/stdc++.h>
using namespace std;

int n,c;
int arr[100005];

bool check(int mid){
    int cnt=0,last=-mid;
    for(int i=0;i<n;i++){
        if(last+mid<=arr[i]){
            cnt++;
            last=arr[i];
        }
    }
    if(cnt>=c) return true;
    else return false;
}
int bs(){
    int low=0,mid,high=1000000002;
    while(low<=high){
        mid=(low+high)/2;
        if(check(mid)) low=mid+1;
        else high = mid-1;
    }
    return high;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&c);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr,arr+n);
        printf("%d\n",bs());
    }
    return 0;
}
