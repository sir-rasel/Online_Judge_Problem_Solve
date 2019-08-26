#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr,arr+n);
        int ans=1;
        for(int i=0;i<n-1;i++)
            if(arr[i+1]-arr[i]>k) ans++;
        printf("Case #%d: %d\n",cs++,ans);
    }
    return 0;
}
