#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin>>n>>m;
    ll ans = min(2*(n-1), 2*m-1);
    cout<<ans<<endl;
    return 0;
}
