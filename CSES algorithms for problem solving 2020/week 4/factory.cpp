#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

bool check(vector<ll>mac,ll mid,ll t){
    ll task = 0;
    for(ll i=0;i<mac.size();i++){
        task += mid/mac[i];
        if(task>=t) return true;
    }
    return task>=t;
}

ll minimumTime(vector<ll>mac, ll t){
    ll l = 1, h = 1e18,ans = 1;
    while(l<=h){
        ll mid = l + (h-l)/2;
        if(check(mac,mid,t)){
            ans = mid;
            h = mid - 1;
        }
        else l = mid + 1;
    }
    return ans;
}

int main(){
    ll n,t;
    scanf("%lld %lld",&n,&t);

    vector<ll> machine(n);
    for (auto &it: machine) scanf("%lld",&it);

    printf("%lld\n",minimumTime(machine,t));
    return 0;
}
