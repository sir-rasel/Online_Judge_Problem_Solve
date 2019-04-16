#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

map<int, int>m;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        m[num]++;
    }
    ll total = 0;
    ll ans = 0;
    for(auto x : m){
        ans += x.second*total;
        total += x.second;
    }
    printf("%lld\n",ans);
    return 0;
}
