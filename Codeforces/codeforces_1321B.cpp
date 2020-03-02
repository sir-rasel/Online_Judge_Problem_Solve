#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

ll solution(int a[],int n){
    unordered_map<int,ll> dp;
    for (int i = 0; i < n; ++i) {
        int cur = a[i] - i;
        if (dp.find(cur) == dp.end()) {
            dp[cur] = a[i];
        } else {
            dp[cur] += a[i];
        }
    }

    ll mx = 0;
    for (auto i : dp) {
        mx = max(mx, i.second);
    }
    return mx;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%lld\n",solution(arr,n));
    return 0;
}
