#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    scanf("%d",&n);
    ll sum=0;
    vector<ll>v(n);
    for(int i=0;i<n;i++) scanf("%lld",&v[i]);
    ll choice = 1e18;
    for(int i=n-1;i>=0;i--){
        choice = min(choice - 1, v[i]);
		choice = max(0LL, choice);
		sum += choice;
    }
    printf("%lld\n",sum);
    return 0;
}
