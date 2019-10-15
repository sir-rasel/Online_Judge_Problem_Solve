#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        long long int k;
        scanf("%d %lld",&n,&k);
        vector<int>arr(n+2);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        if (k >= n * 3) k = n * 3 + (k % (n * 3));
        for(int i=0;i<k;i++){
            int a = arr[i%n];
            int b = arr[n-(i%n)-1];
            arr[i%n]=a^b;
        }
        for(int i=0;i<n;i++){
            if(i+1==n) printf("%d\n",arr[i]);
            else printf("%d ",arr[i]);
        }
    }
    return 0;
}
