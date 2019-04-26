#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n+5];
    int minn=INT_MAX;
    int mov=0,temp=n;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<minn) minn=arr[i];
        if(arr[i]==0) temp--;
    }
    while(true){
        int d;
        if(minn==INT_MAX) d=x;
        else d= max(minn,x);
        minn=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>0) {
                arr[i]-=d;
                if(arr[i]<=0) temp--;
                if(arr[i]>0) {
                    if(arr[i]<minn) minn=arr[i];
                }
            }
        }
        mov++;
        if(temp<=0) break;
    }
    printf("%d\n",mov);
    return 0;
}
