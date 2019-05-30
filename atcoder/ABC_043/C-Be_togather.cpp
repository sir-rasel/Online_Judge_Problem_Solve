#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    sum=round(sum/(double)n);
    long long int ans = 0;
    for(int i=0;i<n;i++)
        ans += (arr[i]-sum)*(arr[i]-sum);
    printf("%lld\n",ans);
    return 0;
}
