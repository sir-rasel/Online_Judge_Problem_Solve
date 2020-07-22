#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const double eps = 1e-4;

ll dp[105] = {0,0,1,1,2,1,3,1,4,2};

ll solution(ll n){
    if(dp[n]!=0) return dp[n];
    if(n<10) return dp[n];
    else{
        ll ans = 0;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                ll t = n/i;
                if(t<10 and t!=i){
                    ans += solution(i);
                    ans += solution(t);
                }
                else ans += solution(t);
            }
        }
        return ans;
    }
}

int main(){
    ll n;
    scanf("%lld",&n);

    for(ll i = 10;i<=100;i++)
        dp[i] = solution(i);
    dp[100] = 9;

    printf("%lld\n",dp[n]);
    return 0;
}
