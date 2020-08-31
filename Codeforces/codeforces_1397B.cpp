#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int n;
    scanf("%d",&n);
    vector<ll>a(n);
    for(int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    sort(a.begin(),a.end());

    ll ans = LLONG_MAX;
    for(int i = 1;i<=100000;i++){
        ll temp = 0,val = 1;
        for(int j=0;j<n;j++){
            temp += abs(val - a[j]);
            if((double)val * (double)i > 1e18){
                temp = LLONG_MAX;
                break;
            }
            val *= i;
        }
        if(temp > ans)
            break;
        ans = temp;
    }
    printf("%lld\n",ans);

    return 0;
}
