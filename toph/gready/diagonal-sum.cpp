#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    scanf("%d",&n);
    vector<ll>arr(n*n);
    for(int i=0;i<n*n;i++) scanf("%lld",&arr[i]);
    sort(arr.begin(),arr.end());
    if(n%2!=0){
        ll ans1=0;
        for(int i=0;i<n-1;i++) ans1+=arr[i];
        ll ans2=0;
        for(int i=n*n-1;i>=(n*n)-n+1;i--) ans2+=arr[i];
        ll ans = ans2-ans1;
        printf("%lld\n",ans);
    }
    else{
        ll ans1=0;
        for(int i=0;i<n;i++) ans1+=arr[i];
        ll ans2=0;
        for(int i=n*n-1;i>=(n*n)-n;i--) ans2+=arr[i];
        ll ans = ans2-ans1;
        printf("%lld\n",ans);
    }
    return 0;
}
