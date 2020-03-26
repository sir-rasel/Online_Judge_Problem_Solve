#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int maxN = 100005;
ll arr[maxN],n,k;

bool check(ll mid){
    ll counter=0;
    for(ll i=1;i<n;i++){
        counter += ceil( (arr[i]-arr[i-1])/(mid*1.0) )-1;
        if(counter>k) return false;
    }
    if(counter<=k) return true;
    else return false;
}

ll binarySearch(ll maxxDiff){
    ll low=1,high=maxxDiff,ans=1;
    while(low<=high){
        ll mid = (low+high)/2;
        if(check(mid)){
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%lld %lld",&n,&k);
        ll maxxDiff;
        for(ll i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            if(i==0) maxxDiff = 0;
            else maxxDiff = max(maxxDiff,(arr[i]-arr[i-1]));
        }

        ll ans = binarySearch(maxxDiff);
        printf("Case #%d: %lld\n",cs++,ans);
    }
    return 0;
}
