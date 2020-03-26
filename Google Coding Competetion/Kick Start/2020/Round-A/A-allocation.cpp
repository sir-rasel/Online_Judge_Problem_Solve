#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,b;
        scanf("%d %d",&n,&b);
        vector<int>arr(n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr.begin(),arr.end());

        int ans=0;
        for(int i=0;i<n and b>0;i++){
            if(b>=arr[i]){
                ans++;
                b-=arr[i];
            }
        }
        printf("Case #%d: %d\n",cs++,ans);
    }
    return 0;
}
