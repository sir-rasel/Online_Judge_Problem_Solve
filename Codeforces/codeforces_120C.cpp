#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool checkInc(ll x,ll arr[],ll n,ll k){
    ll inc=0;
    for (int i=n/2; i<n; i++){
        if (x-arr[i]>0) inc+=x-arr[i];
        if (inc>k) return false;
    }
    if (inc<=k) return true;
    else return false;
}

ll binarySearch(ll arr[],ll n, ll k){
    ll low=1;
    ll high=2e9;

    while (low<high){
        ll mid = (low+high+1)/2;
        if (checkInc(mid,arr,n,k)) low=mid;
        else high=mid-1;
    }

    return low;
}

int main(){
    ll n,k;
    scanf("%lld %lld",&n,&k);
    ll arr[n+5];
    for (int i=0; i<n; i++) scanf("%lld",&arr[i]);
    sort(arr,arr+n);

    printf("%lld\n",binarySearch(arr,n,k));
    return 0;
}
