#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5];
        int ans=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        for(int i=0;i<n;i++){
            bool flag=true;
            for(int j=1;j<=5 and i-j>=0 and flag;j++){
                if(arr[i-j]<=arr[i]) flag=false;
            }
            if(flag) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
