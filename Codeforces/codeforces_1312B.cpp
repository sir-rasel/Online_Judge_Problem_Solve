#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n;i++){
            if(i+1==n) printf("%d\n",arr[i]);
            else printf("%d ",arr[i]);
        }
    }
    return 0;
}
