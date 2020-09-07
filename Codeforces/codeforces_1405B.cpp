#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<int>arr(n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        vector<ll>neg(n+1,0),pos(n+1,0);
        for(int i=0;i<n;i++){
            if(arr[i]<0)
                neg[i+1] = neg[i] + abs(arr[i]);
            else neg[i+1] = neg[i];

            if(arr[i]>0)
                pos[i+1] = pos[i] + arr[i];
            else pos[i+1] = pos[i];
        }

        ll ans = 0;
        for(int i=1;i<=n;i++){
            ans = max(ans,neg[i]-pos[i]);
        }
        printf("%lld\n",ans);

    }

    return 0;
}
