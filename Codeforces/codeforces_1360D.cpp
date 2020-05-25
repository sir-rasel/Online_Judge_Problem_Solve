#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,k;
        scanf("%lld %lld",&n,&k);

        vector<ll>div;
        ll sq = sqrt(n);
        for(ll i=1;i<=sq;i++){
            if(n%i==0){
                div.push_back(i);
                div.push_back(n/i);
            }
        }
        sort(div.begin(),div.end());

        ll ans = n;
        for(int i=div.size()-1;i>=0;i--){
            if(div[i]>k) continue;
            else{
                ans = n/div[i];
                break;
            }
        }
        printf("%lld\n",ans);
    }
	return 0;
}
