#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll sum=0, n, k, lmt, found=0, psbl=1, cnt=1;
    cin>>n>>k;
    lmt = n-k+1;
    ll ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
        if(ar[i]>=lmt) {
            sum += ar[i];
            if(found) {
                psbl *= cnt;
                psbl%=998244353;
            }
            cnt=0;
            found = 1;
        }
        cnt++;
    }
    cout<<sum<<" "<<psbl<<endl;
}
