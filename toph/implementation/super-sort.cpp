#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,n,k;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0; i<n; i++) scanf("%d",&arr[i]);
        sort(arr,arr+n);
        bool flag=true;
        for(int j=1; j<n and flag; j++)
            if(arr[j]-arr[j-1]>k) flag=false;
        if(flag)
            for(int i=0;i<n;i++) {
                if(i!=n-1) printf("%d ",arr[i]);
                else printf("%d\n",arr[i]);
            }
        else printf("No Solution\n");
    }
    return 0;
}
