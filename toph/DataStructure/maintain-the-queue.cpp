#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll k, l, n, t, i, cs = 0;
    cin >> t;
    while(t--){
        vector < pair < ll, ll > > arr;
        vector < ll > out;
        cin >> n;
        for(i = 1; i <= n; i++) cin >> k >> l, arr.push_back(make_pair(k,l));
        sort(arr.begin(),arr.end());
        ll ans = 0,flag = 0;
        for(i = n - 1; i >= 0; i--){
            if(ans < arr[i].second){
                flag++;
                break;
            }
            out.insert(out.begin()+arr[i].second, arr[i].first);
            ans++;
        }
        if(flag==1){
            printf("Case %lld: No ordering possible!\n", ++cs); continue;
        }
        printf("Case %lld:",++cs);
        for(i=0;i<out.size();i++) printf(" %lld",out[i]);
        printf("\n");
    }
    return 0;
}
