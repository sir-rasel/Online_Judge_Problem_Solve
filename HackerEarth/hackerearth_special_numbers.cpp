#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e8;

int main(){
    ll n;
    scanf("%lld",&n);
    vector<ll>specialNumber;
    specialNumber.push_back(4);
    specialNumber.push_back(7);

    for(int i=0;i<specialNumber.size();i++){
        ll m = specialNumber[i];

        ll f = (m*10)+4;
        ll s = (m*10)+7;

        if(f<=n) specialNumber.push_back(f);
        if(s<=n) specialNumber.push_back(s);
    }

    ll ans = 0;
    for(int i=0;i<int(specialNumber.size())-1;i++){
        for(int j = i + 1;j<specialNumber.size();j++){
            if(__gcd(specialNumber[i],specialNumber[j]) == 1) ans++;
        }
    }

    if(n <= 6) ans = 0;
    printf("%lld\n",ans);
    return 0;
}
