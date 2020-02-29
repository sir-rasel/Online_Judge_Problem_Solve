#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct data{
    int ai,ti;
    bool operator<(data a){
        if(ai==a.ai){
            return ti<a.ti;
        }
        return ai<a.ai;
    }
}arr[200005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i].ai);
    for(int i=0;i<n;i++) scanf("%d",&arr[i].ti);
    sort(arr,arr+n);

    multiset<int, greater<int> > check;
    int last = 0;
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        while (!check.empty() && last < arr[i].ai) {
            auto it = check.begin();
            sum -= *it;
            ans += sum;
            check.erase(it);
            ++last;
        }
        check.insert(arr[i].ti);
        sum += arr[i].ti;
        last = arr[i].ai;
    }
    while (!check.empty()) {
        auto it = check.begin();
        sum -= *it;
        ans += sum;
        check.erase(it);
    }
    printf("%lld\n",ans);
    return 0;
}
