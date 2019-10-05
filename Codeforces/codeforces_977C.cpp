#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>arr,int n,int k){
    int low=1,high=1000000000,mid;
    while(low<=high){
        mid = (low+high)/2;
        int index = upper_bound(arr.begin(),arr.end(),mid)-arr.begin();
        if(index==k) return mid;
        else if(index<k) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>arr(n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr.begin(),arr.end());
    printf("%d\n",bs(arr,n,k));
    return 0;
}
