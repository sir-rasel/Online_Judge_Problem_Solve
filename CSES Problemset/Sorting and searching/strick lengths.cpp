#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a.begin(),a.end());

    ll ans = 0, num = a[n/2];
    for(int i=0;i<n;i++)
        ans += abs(num-a[i]);

    printf("%lld\n",ans);

    return 0;
}
