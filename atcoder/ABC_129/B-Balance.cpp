#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int sum[n];
    sum[0]=arr[0];
    for(int i=1;i<n;i++) sum[i]=arr[i]+sum[i-1];
    int ans = INT_MAX;
    for(int i=0;i<n-1;i++){
        int s1=sum[i];
        int s2 = sum[n-1]-sum[i];
        ans = min(ans,abs(s1-s2));
    }
    printf("%d\n",ans);
    return 0;
}
