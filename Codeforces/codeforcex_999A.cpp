#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=0;
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n+5];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int ans = 0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            ans++;
            c++;
        }
        else break;
    }
    for(int i=n-1;i>=0 and i>c;i--){
        if(arr[i]<=k){
            ans++;
        }
        else break;
    }
    printf("%d\n",ans);
    return 0;
}
