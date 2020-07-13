#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const ll Max = 1e10;
const double eps = 1e-4;

int main(){
    int test;
    cin>>test;
    while(test--){
        ll n,num;
        ll x;
        scanf("%lld %lld",&n,&x);

        multiset<ll>ss;
        int ans = 0;
        for(int i=0;i<n;i++){
            scanf("%lld",&num);
            if(num*2>=x) ss.insert(num);
            else ans++;
        }

        for(auto it: ss){
            while(it>x){
                ans++;
                x*=2;
            }
            ans++;
            x = it*2;
        }

        printf("%d\n",ans);
    }
    return 0;
}
