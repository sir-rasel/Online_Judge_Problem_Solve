#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans = 0;
    auto it = b.begin()-1;
    for(int i=0;i<n;i++){
        it = lower_bound(it+1,b.end(),a[i]);

        if(it==b.end()) {
            ans=-1;
            break;
        }
        if(it-b.begin()==m-1 or i+1==n) {
            ans++;
            it = b.begin()-1;
            if(i+1!=n) ans++;
        }
    }
    printf("%lld\n",ans);
}
