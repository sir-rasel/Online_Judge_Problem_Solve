#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
ll mod = 1000000007;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<ll>arr(n);
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        sort(arr.begin(),arr.end(),greater<ll>());
        ll profit = 0;
        for(int i=0;i<n;i++){
            ll price;
            if(arr[i]-i<0) price = 0;
            else price = arr[i]-i;

            profit = (profit+price)%mod;
        }
        printf("%lld\n",profit);
    }
    return 0;
}
