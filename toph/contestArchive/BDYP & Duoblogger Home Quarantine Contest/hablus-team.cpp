#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>arr(n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr.begin(),arr.end());

    ll ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=k) break;
        int t = (k-arr[i]-1);
        auto it = upper_bound(arr.begin()+i,arr.end(),t);
        if(it==arr.end() or *it>t) it--;
        int idx = it-arr.begin();
        if(idx>i) ans+=(idx-i);
    }
    printf("%lld\n",ans);
	return 0;
}
