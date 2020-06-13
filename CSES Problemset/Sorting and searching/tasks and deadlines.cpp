#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

bool comp(pii a, pii b){
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
    int n;
    scanf("%d",&n);
    pii arr[n];
    for(int i=0;i<n;i++) scanf("%d %d",&arr[i].first, &arr[i].second);
    sort(arr,arr+n,comp);

    ll time = 0;
    ll ans = 0;

    for(int i=0;i<n;i++){
        time += arr[i].first;
        ans += arr[i].second - time;
    }
    printf("%lld\n",ans);

    return 0;
}
