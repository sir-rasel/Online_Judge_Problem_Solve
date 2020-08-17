#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll mod = 1000000007;

int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<int>a(n);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);

        vector<pii>segment;
        int left = a[0],right = 0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                right = a[i-1];
                segment.push_back({left,right});

                left = a[i];
            }
        }

        right = a[n-1];
        segment.push_back({left,right});

        int m = segment.size();
        ll ans = 0;
        for(int i = m-2;i>=0;i--){
            if(segment[i].second > segment[i+1].first){
                ans += (segment[i].second - segment[i+1].first);
                segment[i+1].first = segment[i].second;

                segment[i].second = (segment[i+1].second+(segment[i].second - segment[i+1].first));
            }
            else
                segment[i].second = segment[i+1].second;
        }

        printf("%lld\n",ans);

    }
    return 0;
}
