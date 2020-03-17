#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(ll mid,ll k,ll n,ll a, ll b){
    ll temp = mid*a;
    ll temp2 = (k-temp);
    if(temp2<=0) return false;
    ll bTern = temp2/b;
    ll remain = temp2-(b*bTern);
    if(remain<=0 and bTern+mid<=n) return false;

    if(mid+bTern>=n) return true;
    else return false;
}

ll binarySearch(ll k,ll n,ll a,ll b){
    ll low=0,high=n;
    ll ans = -1;

    while (low<=high){
        ll mid = (low+high)/2;
        if (check(mid,k,n,a,b)) {
            low=mid+1;
            ans = mid;
        }
        else high=mid-1;
    }

    return ans;
}

int main(){
    ll q;
    scanf("%lld",&q);
    while(q--){
        ll k,n,a,b;
        scanf("%lld %lld %lld %lld",&k,&n,&a,&b);
        printf("%lld\n",binarySearch(k,n,a,b));
    }
    return 0;
}
