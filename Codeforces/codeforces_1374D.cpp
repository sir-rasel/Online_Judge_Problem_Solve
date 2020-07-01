#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int maxx = 1e6+5;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);

        vector<int>a(n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            a[i] = k-(a[i]%k);
        }

        map<int,int>c;
        for(int i=0;i<n;i++){
            c[a[i]]++;
        }

        for(auto it:c){
            if(it.first==k) continue;
            ans = max(ans,(ll)k*(it.second-1)+(ll)it.first+1);
        }
        printf("%lld\n",ans);
    }

    return 0;
}
